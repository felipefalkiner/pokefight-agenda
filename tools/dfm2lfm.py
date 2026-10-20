"""Converte os forms Delphi (DFM binário, RCDATA do EXE original) para Lazarus (.lfm).

Uso:
    python -I tools/dfm2lfm.py <PokéFight1.2.exe> <saida_dir> [--text <dir_dfm_texto>]

* Lê a tabela de recursos do PE diretamente (sem dependências) e decodifica
  o formato binário ``TPF0`` do Delphi.
* ``--text`` grava também o DFM completo em texto Delphi (preservação/estudo).
* Para os forms usados pela recompilação, gera ``.lfm`` com:
  - mapeamento de classes RxLib/VCL → LCL (CLASS_MAP);
  - lista branca de propriedades suportadas pela LCL;
  - remoção de dados binários (imagens/ícones são carregados de data/ui
    em tempo de execução) e de componentes sem equivalente (DROP).
  Os nomes dos componentes e dos handlers são mantidos idênticos ao original.
"""
import os
import re
import struct
import sys

FORMS = {  # recurso RCDATA -> (arquivo .lfm, classe Lazarus)
    'TINICIAL': ('uinicial.lfm', 'Tinicial'),
    'TAPKG': ('uapkg.lfm', 'TAPKG'),
    'TABOUT': ('usobre.lfm', 'Tabout'),
    'TTM': ('utms.lfm', 'Ttm'),
    'TMARTS': ('umarts.lfm', 'TMarts'),
    'TGOLD': ('ugold.lfm', 'TGold'),
    'TYELLOW': ('uyellow.lfm', 'Tyellow'),
    'TCORES': ('ucores.lfm', 'TCores'),
}

CLASS_MAP = {
    'TRxGIFAnimator': 'TImage',      # animação feita por TGifPlayer (ugifplayer.pas)
    'TSecretPanel': 'TPanel',        # rolagem dos créditos feita em código
    'TRxPopupMenu': 'TPopupMenu',
    'TRxMainMenu': 'TMainMenu',
    'TRxSpinEdit': 'TSpinEdit',
    'TRichEdit': 'TMemo',            # texto puro: o conteúdo original não tem formatação
    'TRxRichEdit': 'TMemo',
    'TColorComboBox': 'TColorBox',
}
# componentes sem equivalente direto: recriados (ou dispensados) em código
DROP = {'TRxGradientCaption', 'TFormStorage', 'TAppEvents', 'TRxTrayIcon', 'TNMSMTP'}

COMMON = {
    'Left', 'Top', 'Width', 'Height', 'Caption', 'Text', 'Hint', 'ShowHint',
    'ParentShowHint', 'Visible', 'Enabled', 'TabOrder', 'TabStop', 'Color',
    'ParentColor', 'ParentFont', 'Align', 'Tag', 'PopupMenu', 'Cursor',
    'Font.Charset', 'Font.Color', 'Font.Height', 'Font.Name', 'Font.Style', 'Font.Pitch',
}
PER_CLASS = {
    'TForm': {'BorderIcons', 'BorderStyle', 'ClientHeight', 'ClientWidth', 'Position',
              'Menu', 'ActiveControl', 'KeyPreview', 'WindowState'},
    'TLabel': {'Alignment', 'AutoSize', 'Transparent', 'WordWrap', 'Layout', 'FocusControl'},
    'TImage': {'AutoSize', 'Center', 'Stretch', 'Transparent', 'Proportional'},
    'TEdit': {'ReadOnly', 'MaxLength', 'CharCase', 'PasswordChar', 'AutoSelect', 'BorderStyle'},
    'TMemo': {'ReadOnly', 'MaxLength', 'ScrollBars', 'WordWrap', 'Lines.Strings', 'Alignment',
              'WantReturns', 'WantTabs', 'BorderStyle'},
    'TListBox': {'ItemHeight', 'Items.Strings', 'Sorted', 'MultiSelect', 'BorderStyle', 'Style'},
    'TComboBox': {'ItemHeight', 'Items.Strings', 'Style', 'Sorted', 'DropDownCount'},
    'TGroupBox': set(),
    'TPanel': {'BevelInner', 'BevelOuter', 'BevelWidth', 'BorderWidth', 'BorderStyle', 'Alignment'},
    'TBitBtn': {'Kind', 'ModalResult', 'Default', 'Cancel', 'Spacing', 'Layout', 'Margin'},
    'TButton': {'ModalResult', 'Default', 'Cancel'},
    'TBevel': {'Shape', 'Style'},
    'TMainMenu': set(),
    'TPopupMenu': {'AutoPopup'},
    'TMenuItem': {'Caption', 'ShortCut', 'Checked', 'GroupIndex', 'RadioItem', 'Default',
                  'Enabled', 'Visible', 'Hint', 'Tag'},
    'TTimer': {'Interval', 'Enabled'},
    'TColorDialog': set(), 'TFontDialog': set(), 'TOpenDialog': {'Filter', 'DefaultExt', 'Title'},
    'TSaveDialog': {'Filter', 'DefaultExt', 'Title'}, 'TPrintDialog': set(),
    'TShape': {'Shape', 'Brush.Color', 'Brush.Style', 'Pen.Color'},
    'TSpinEdit': {'MaxValue', 'MinValue', 'Value'},
    'TCheckBox': {'Checked', 'State', 'Alignment', 'AllowGrayed'},
    'TColorBox': set(),
}
# nomes que o Delphi aceitava mas o FPC não (campo com o mesmo nome de uma propriedade do TForm)
RENAME = {('TAPKG', 'Menu'): 'MenuBandeja'}

NON_VISUAL = {'TMainMenu', 'TPopupMenu', 'TMenuItem', 'TTimer', 'TColorDialog', 'TFontDialog',
              'TOpenDialog', 'TSaveDialog', 'TPrintDialog'}


# ---------------------------------------------------------------- PE / recursos
def rcdata(exe):
    d = open(exe, 'rb').read()
    pe = struct.unpack_from('<I', d, 0x3c)[0]
    nsec = struct.unpack_from('<H', d, pe + 6)[0]
    opt = struct.unpack_from('<H', d, pe + 20)[0]
    rsrc_rva = struct.unpack_from('<I', d, pe + 24 + 96 + 2 * 8)[0]
    secs = []
    for i in range(nsec):
        o = pe + 24 + opt + i * 40
        vs, va, rs, ro = struct.unpack_from('<IIII', d, o + 8)
        secs.append((va, max(vs, rs), ro))

    def r2o(rva):
        for va, sz, ro in secs:
            if va <= rva < va + sz:
                return ro + rva - va
        raise ValueError(hex(rva))

    base = r2o(rsrc_rva)

    def entries(off):
        nn, ni = struct.unpack_from('<HH', d, base + off + 12)
        for i in range(nn + ni):
            name, ptr = struct.unpack_from('<II', d, base + off + 16 + 8 * i)
            if name & 0x80000000:
                p = base + (name & 0x7fffffff)
                ln = struct.unpack_from('<H', d, p)[0]
                name = d[p + 2:p + 2 + 2 * ln].decode('utf-16le')
            yield name, ptr

    out = {}
    for tname, tptr in entries(0):
        if tname != 10:  # RT_RCDATA
            continue
        for rname, rptr in entries(tptr & 0x7fffffff):
            for _lang, lptr in entries(rptr & 0x7fffffff):
                drva, dsz = struct.unpack_from('<II', d, base + lptr)
                out[rname] = d[r2o(drva):r2o(drva) + dsz]
    return out


# ---------------------------------------------------------------- TPF0
class Reader:
    def __init__(self, b):
        self.b, self.p = b, 0

    def u8(self):
        v = self.b[self.p]
        self.p += 1
        return v

    def n(self, k):
        v = self.b[self.p:self.p + k]
        self.p += k
        return v

    def i32(self):
        return struct.unpack('<i', self.n(4))[0]

    def sstr(self):
        return self.n(self.u8()).decode('cp1252')


def read_value(r):
    t = r.u8()
    if t == 0:
        return ('null', None)
    if t == 1:
        items = []
        while r.b[r.p] != 0:
            items.append(read_value(r))
        r.p += 1
        return ('list', items)
    if t == 2:
        return ('int', struct.unpack('<b', r.n(1))[0])
    if t == 3:
        return ('int', struct.unpack('<h', r.n(2))[0])
    if t == 4:
        return ('int', r.i32())
    if t == 5:
        b = r.n(10)
        m = int.from_bytes(b[:8], 'little')
        e = int.from_bytes(b[8:], 'little')
        sign = -1 if e & 0x8000 else 1
        return ('float', sign * m * 2.0 ** ((e & 0x7fff) - 16383 - 63) if m else 0.0)
    if t == 6:
        return ('str', r.sstr())
    if t == 7:
        return ('ident', r.sstr())
    if t in (8, 9):
        return ('ident', 'True' if t == 9 else 'False')
    if t == 10:
        return ('binary', r.n(r.i32()))
    if t == 11:
        items = []
        while True:
            s = r.sstr()
            if not s:
                break
            items.append(s)
        return ('set', items)
    if t == 12:
        return ('str', r.n(r.i32()).decode('cp1252'))
    if t == 13:
        return ('ident', 'nil')
    if t == 14:
        coll = []
        while r.b[r.p] != 0:
            r.p += 1
            props = []
            while r.b[r.p] != 0:
                props.append((r.sstr(), read_value(r)))
            r.p += 1
            coll.append(props)
        r.p += 1
        return ('collection', coll)
    raise ValueError('tipo %d em %d' % (t, r.p))


def read_component(r):
    flag = r.b[r.p]
    if flag & 0xf0 == 0xf0:
        r.p += 1
        if flag & 2:
            t = r.u8()
            r.n({2: 1, 3: 2, 4: 4}[t])
    comp = {'class': r.sstr(), 'name': r.sstr(), 'props': [], 'children': []}
    while r.b[r.p] != 0:
        comp['props'].append((r.sstr(), read_value(r)))
    r.p += 1
    while r.b[r.p] != 0:
        comp['children'].append(read_component(r))
    r.p += 1
    return comp


def parse_dfm(b):
    assert b[:4] == b'TPF0'
    r = Reader(b)
    r.p = 4
    return read_component(r)


# ---------------------------------------------------------------- escrita
def quote(s):
    out, cur = [], ''
    for ch in s:
        o = ord(ch)
        if ch == "'":
            cur += "''"
        elif 32 <= o < 127:
            cur += ch
        else:
            if cur:
                out.append("'" + cur + "'")
                cur = ''
            out.append('#%d' % o)
    if cur or not out:
        out.append("'" + cur + "'")
    return ''.join(out)


def fmt(v, ind):
    k, x = v
    if k == 'str':
        return quote(x)
    if k in ('ident',):
        return x
    if k == 'int':
        return str(x)
    if k == 'float':
        return repr(x)
    if k == 'set':
        return '[' + ', '.join(x) + ']'
    if k == 'null':
        return 'Null'
    if k == 'list':
        pad = ' ' * (ind + 2)
        return '(\n' + '\n'.join(pad + fmt(i, ind + 2) for i in x) + ')'
    if k == 'binary':
        h = x.hex().upper()
        pad = ' ' * (ind + 2)
        return '{\n' + '\n'.join(pad + h[i:i + 64] for i in range(0, len(h), 64)) + '}'
    if k == 'collection':
        pad = ' ' * (ind + 2)
        items = []
        for props in x:
            body = '\n'.join(pad + '  ' + n + ' = ' + fmt(pv, ind + 4) for n, pv in props)
            items.append(pad + 'item\n' + body + ('\n' if body else '') + pad + 'end')
        return '<\n' + '\n'.join(items) + '>'
    raise ValueError(k)


def write_text(c, ind=0, top=True):
    """DFM completo em texto (formato Delphi), para preservação."""
    lines = [' ' * ind + 'object %s: %s' % (c['name'], c['class'])]
    for n, v in c['props']:
        lines.append(' ' * (ind + 2) + n + ' = ' + fmt(v, ind + 2))
    for ch in c['children']:
        lines.extend(write_text(ch, ind + 2, False))
    lines.append(' ' * ind + 'end')
    return lines


def write_lfm(c, root_class, ind=0, is_root=True, events=None, form=None):
    form = form or c['class'].upper()
    cls = root_class if is_root else CLASS_MAP.get(c['class'], c['class'])
    name = RENAME.get((form, c['name']), c['name'])
    if not is_root and c['class'] in DROP:
        return []
    allowed = COMMON | PER_CLASS.get('TForm' if is_root else cls, set())
    if cls in NON_VISUAL:
        allowed = PER_CLASS.get(cls, set()) | {'Tag'}
    lines = [' ' * ind + 'object %s: %s' % (name, cls)]
    for n, v in c['props']:
        if v[0] == 'ident' and (form, v[1]) in RENAME:
            v = ('ident', RENAME[(form, v[1])])
        if n.startswith('On') and v[0] == 'ident':
            lines.append(' ' * (ind + 2) + n + ' = ' + v[1])
            events.add(v[1])
            continue
        if n not in allowed or v[0] == 'binary':
            continue
        if n == 'Font.Name' and v[1] == 'MS Sans Serif':
            v = ('str', 'MS Sans Serif')  # existe como fonte bitmap no Windows 11
        lines.append(' ' * (ind + 2) + n + ' = ' + fmt(v, ind + 2))
    for ch in c['children']:
        lines.extend(write_lfm(ch, root_class, ind + 2, False, events, form))
    lines.append(' ' * ind + 'end')
    return lines


def main():
    exe, outdir = sys.argv[1], sys.argv[2]
    textdir = sys.argv[sys.argv.index('--text') + 1] if '--text' in sys.argv else None
    res = rcdata(exe)
    os.makedirs(outdir, exist_ok=True)
    for name, b in sorted(res.items(), key=lambda kv: str(kv[0])):
        if not isinstance(name, str) or b[:4] != b'TPF0':
            continue
        comp = parse_dfm(b)
        if textdir:
            os.makedirs(textdir, exist_ok=True)
            with open(os.path.join(textdir, name + '.dfm'), 'w', encoding='utf-8', newline='\r\n') as f:
                f.write('\n'.join(write_text(comp)) + '\n')
        if name in FORMS:
            fn, cls = FORMS[name]
            events = set()
            with open(os.path.join(outdir, fn), 'w', encoding='utf-8', newline='\n') as f:
                f.write('\n'.join(write_lfm(comp, cls, events=events)) + '\n')
            print('%-10s -> %-12s handlers: %s' % (name, fn, ', '.join(sorted(events))))


if __name__ == '__main__':
    main()
