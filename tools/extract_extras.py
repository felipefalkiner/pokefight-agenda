"""Extrai das funções decompiladas os dados secundários da Agenda:

* Ttm.ListBox1Click  -> localização de cada uma das 50 TMs
* Ttm.ListBox2Click  -> localização de cada uma das 5 HMs
* TMarts.ComboBox1Click -> itens e preços de cada Poké-Mart

Uso: python -I tools/extract_extras.py analysis/decompilado analysis/dados/extras.json

Os nomes das TMs/HMs e das cidades estão nos próprios forms (Items.Strings do DFM)
e já vão para os .lfm gerados por dfm2lfm.py.
"""
import json
import os
import re
import sys


def statements(path):
    acc, out = '', []
    for line in open(path, encoding='utf-8').read().split('\n'):
        acc = (acc + ' ' + line.strip()) if acc else line
        if acc.rstrip().endswith((';', '{', '}')) or not acc.strip():
            out.append(re.sub(r'\s+;$', ';', acc))
            acc = ''
    return out


def literal(s):
    m = re.match(r'^(?:\(uint \*\))?\s*(".*")$', s.strip())
    return json.loads(m.group(1)) if m else None


def by_index(path):
    """{indice: texto} para blocos `if (iVarN == K) { ... SetText/Lines ... }`."""
    cur, out = None, {}
    for st in statements(path):
        m = re.match(r'\s*if \(iVar\d == (0x[0-9a-f]+|\d+)\) \{', st)
        if m:
            cur = int(m.group(1), 0)
            continue
        if cur is None:
            continue
        m = re.match(r'\s*TControl_SetText\(Self->\w+,(.*)\);$', st)
        if m and literal(m.group(1)) is not None:
            out[cur] = literal(m.group(1))
        m = re.match(r'\s*\(\*\*\(code \*\*\)\(\*piVar1 \+ 0x2c\)\)\s*\(piVar1,(.*)\);$', st)
        if m and literal(m.group(1)) is not None:
            out[cur] = literal(m.group(1)).replace('\r', '\n')
    return [out[k] for k in sorted(out)]


def main(src, dst):
    data = {
        'fonte': 'Pseudocódigo Ghidra de Ttm.ListBox1Click (0x4b846c), Ttm.ListBox2Click (0x4b8e4c) '
                 'e TMarts.ComboBox1Click (0x4b7790)',
        'tm_localizacao': by_index(os.path.join(src, 'Ttm.ListBox1Click.c')),
        'hm_localizacao': by_index(os.path.join(src, 'Ttm.ListBox2Click.c')),
        'marts_itens': by_index(os.path.join(src, 'TMarts.ComboBox1Click.c')),
    }
    json.dump(data, open(dst, 'w', encoding='utf-8'), ensure_ascii=False, indent=1)
    print({k: len(v) for k, v in data.items() if isinstance(v, list)})


if __name__ == '__main__':
    main(sys.argv[1], sys.argv[2])
