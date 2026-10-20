"""Remove caminhos locais da máquina da análise das evidências JSON do REA.

    python -I tools/sanitize_evidence.py analysis/evidencias

Os resultados do REA guardam o caminho absoluto do alvo analisado (uma cópia em
uma pasta temporária). O conteúdo e os hashes não mudam; só o prefixo do caminho
vira <analise>.
"""
import os
import re
import sys

SEP = r'[\\/]+'  # barra normal ou invertida, com qualquer nível de escape JSON
PATTERN = re.compile(r'C:' + SEP + r'Users' + SEP + r'[^"]*?' + SEP + r'scratchpad', re.I)

for name in os.listdir(sys.argv[1]):
    if not name.endswith('.json'):
        continue
    path = os.path.join(sys.argv[1], name)
    text = open(path, encoding='utf-8').read()
    new, n = PATTERN.subn('<analise>', text)
    if n:
        open(path, 'w', encoding='utf-8').write(new)
    print(name, n)
