"""Gera a versão legada compatível com Windows 10/11 a partir do EXE original.

O EXE original (Delphi 3, jan/2000) funciona no Windows x64, exceto por três pontos:

1. Extrai as imagens chamando ``press.com`` / ``img.com``, que são .BAT compilados
   com BAT2EXEC (16 bits). O Windows de 64 bits não tem NTVDM, então aparece
   "Aplicativo de 16 bits sem suporte" e as imagens nunca são extraídas.
2. Lê e grava em ``c:\\windows\\data\\``, o que exige permissão de administrador.
3. Abre o site pelo caminho fixo do Internet Explorer em português.

Este patch resolve 2 e 3 substituindo só literais por versões menores, sem mexer no código:

* 331 AnsiStrings ``c:\\windows\\data\\...`` → ``data\\...`` (o cabeçalho de
  comprimento do literal é ajustado e o espaço que sobra é zerado);
* ``c:\\arquivos de programas\\Internet Explorer\\Iexplore.exe www...`` →
  ``explorer.exe http://www...`` (abre no navegador padrão).

O ponto 1 não precisa de patch no EXE: as chamadas ``WinExec('press.com')`` /
``WinExec('img.com')`` ficam como estão. Em legacy/win11, esses dois arquivos são
trocados por ``tools/gymextract`` (Free Pascal, PE nativo). O Windows executa um PE
mesmo com extensão .com, e ele faz a mesma extração que os .BAT originais, só que
para ``.\\data\\``.

Uso: python -I tools/patch_win11.py <original.exe> <saida.exe>
"""
import hashlib
import re
import struct
import sys

ORIGINAL_SHA256 = 'ff860b60a0b18a625a0b2cebb54bf961b8cefb09b3b2542bc474d7d545aab295'
BS = b'\\'
OLD_DIR = b'c:' + BS + b'windows' + BS + b'data' + BS
NEW_DIR = b'data' + BS
OLD_IE = (b'c:' + BS + b'arquivos de programas' + BS + b'Internet Explorer' + BS +
          b'Iexplore.exe www.pokefight.cjb.net')
NEW_IE = b'explorer.exe http://www.pokefight.cjb.net'


def is_ansistring(d, off):
    """Literal Delphi constante: refcount -1, comprimento, bytes, NUL."""
    rc, ln = struct.unpack_from('<iI', d, off - 8)
    return rc == -1 and d[off + ln:off + ln + 1] == b'\0', ln


def main(src, dst):
    d = bytearray(open(src, 'rb').read())
    sha = hashlib.sha256(d).hexdigest()
    if sha != ORIGINAL_SHA256:
        sys.exit('EXE inesperado (sha256 %s); este patch é específico da v1.2 original.' % sha)

    n_dir = 0
    for m in list(re.finditer(re.escape(OLD_DIR), d, re.I)):
        off = m.start()
        ok, ln = is_ansistring(d, off)
        if not ok:
            sys.exit('literal sem cabeçalho AnsiString em 0x%x' % off)
        new = NEW_DIR + bytes(d[off + len(OLD_DIR):off + ln])
        d[off:off + ln + 1] = new + b'\0' * (ln + 1 - len(new))
        struct.pack_into('<I', d, off - 4, len(new))
        n_dir += 1

    n_ie = 0
    for m in list(re.finditer(re.escape(OLD_IE) + b'\0', d)):
        off = m.start()  # argumento PChar do WinExec (sem cabeçalho)
        d[off:off + len(OLD_IE)] = NEW_IE + b'\0' * (len(OLD_IE) - len(NEW_IE))
        n_ie += 1

    assert (n_dir, n_ie) == (331, 2), (n_dir, n_ie)
    open(dst, 'wb').write(d)
    print('caminhos: %d  navegador: %d' % (n_dir, n_ie))
    print('sha256 %s' % hashlib.sha256(d).hexdigest())


if __name__ == '__main__':
    main(sys.argv[1], sys.argv[2])
