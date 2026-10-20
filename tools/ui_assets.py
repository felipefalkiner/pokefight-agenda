"""Extrai as imagens da interface que vinham embutidas nos forms (DFM) do EXE original.

    python -I tools/ui_assets.py "legacy/original/PokéFight1.2.exe" assets/ui

Formatos encontrados nos DFMs do Delphi 3:
  Picture.Data (TJPEGImage) = ShortString 'TJPEGImage' + tamanho (int32) + JPEG
  Image.Data (TRxGIFAnimator) = tamanho (int32) + GIF
  Icon.Data                  = arquivo .ico puro
  Icons.Icons (TRxTrayIcon)  = quantidade (int32) + [tamanho (int32) + .ico]...
"""
import os
import struct
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import dfm2lfm  # noqa: E402

# (form, componente, propriedade) -> arquivo
NOMES = {
    ('TAPKG', 'Gif', 'Image.Data'): 'apkg_header.gif',
    ('TAPKG', 'RxGIFAnimator1', 'Image.Data'): 'apkg_titulo.gif',
    ('TAPKG', 'sair', 'Image.Data'): 'apkg_sair.gif',
    ('TAPKG', 'Image1', 'Picture.Data'): 'apkg_logo.jpg',
    ('TAPKG', 'APKG', 'Icon.Data'): 'apkg.ico',
    ('TINICIAL', 'Image1', 'Picture.Data'): 'splash.jpg',
    ('TABOUT', 'Image1', 'Picture.Data'): 'sobre_faixa.jpg',
    ('TABOUT', 'about', 'Icon.Data'): 'sobre.ico',
    ('TTM', 'Image1', 'Picture.Data'): 'tm.jpg',
    ('TYELLOW', 'Image1', 'Picture.Data'): 'yellow.jpg',
    ('TYELLOW', 'yellow', 'Icon.Data'): 'yellow.ico',
    ('TEMAIL', 'RxGIFAnimator1', 'Image.Data'): 'email1.gif',
    ('TEMAIL', 'RxGIFAnimator2', 'Image.Data'): 'email2.gif',
}


def blobs(comp, form, out):
    for name, (kind, value) in comp['props']:
        if kind == 'binary':
            out[(form, comp['name'], name)] = value
    for child in comp['children']:
        blobs(child, form, out)


def main(exe, outdir):
    os.makedirs(outdir, exist_ok=True)
    found = {}
    for form, data in dfm2lfm.rcdata(exe).items():
        if isinstance(form, str) and data[:4] == b'TPF0':
            blobs(dfm2lfm.parse_dfm(data), form, found)
    for key, fn in NOMES.items():
        b = found[key]
        if fn.endswith('.gif'):
            b = b[4:4 + struct.unpack_from('<I', b)[0]]
        elif fn.endswith('.jpg'):
            b = b[1 + b[0] + 4:]
        open(os.path.join(outdir, fn), 'wb').write(b)
    tray = found[('TAPKG', 'theme', 'Icons.Icons')]
    p = 4
    for i in range(struct.unpack_from('<I', tray)[0]):
        size = struct.unpack_from('<I', tray, p)[0]
        open(os.path.join(outdir, 'tray_%02d.ico' % i), 'wb').write(tray[p + 4:p + 4 + size])
        p += 4 + size
    print('ok: %d imagens + %d ícones da bandeja' % (len(NOMES), i + 1))


if __name__ == '__main__':
    main(sys.argv[1], sys.argv[2])
