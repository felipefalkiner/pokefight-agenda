"""Gera reconstrucao/PokeDados.inc (array Pascal) a partir de dados/pokedex.json."""
import json
import os
import sys

A = sys.argv[1]
d = json.load(open(os.path.join(A, 'dados', 'pokedex.json'), encoding='utf-8'))


def pas(s):
    s = s.replace("'", "''")
    parts = []
    for i, seg in enumerate(s.split('\n')):
        if i:
            parts.append('#13#10')
        # Delphi 3 limita cada literal a 255 caracteres: quebra em pedaços concatenados
        while seg:
            chunk, seg = seg[:200], seg[200:]
            if chunk.endswith("'") and not chunk.endswith("''"):
                chunk, seg = chunk[:-1], "'" + seg
            parts.append("'" + chunk + "'" + ('+' if seg else ''))
    return ''.join(parts) or "''"


L = [r'{ Gerado automaticamente de dados/pokedex.json - extraido de TAPKG.ListBox1Click (0x4b9df4).',
     r'  Barras: nivel 1..6 = c:\windows\data\<nivel>.gif; 0 = barra limpa (personagens). }',
     'type',
     '  TPokeEntrada = record',
     '    Numero, Nome, Tipo, Versao, Evolucao, Localizacao, Descricao, Movimentos, Sprite: string;',
     '    Energia, Ataque, Defesa, Velocidade, Especial: Byte;',
     '  end;',
     '',
     'const',
     '  POKEDEX: array[0..%d] of TPokeEntrada = (' % (len(d['entradas']) - 1)]
rows = []
for r in d['entradas']:
    b = r['barras_status_1a6']
    g = lambda k: b[k] or 0
    rows.append(
        "    ({ %3d } Numero: %s; Nome: %s; Tipo: %s; Versao: %s; Evolucao: %s;\n"
        "      Localizacao: %s;\n      Descricao: %s;\n      Movimentos: %s;\n"
        "      Sprite: '%s'; Energia: %d; Ataque: %d; Defesa: %d; Velocidade: %d; Especial: %d)" % (
            r['indice_listbox'], pas(r['numero']), pas(r['nome']), pas(r['tipo']), pas(r['versao']),
            pas(r['evolucao']), pas(r['localizacao']), pas(r['descricao']), pas('\n'.join(r['movimentos'])),
            r['sprite'], g('energia'), g('ataque'), g('defesa'), g('velocidade'), g('especial')))
L.append(',\n'.join(rows))
L.append('  );')
# Delphi 3 lê fontes em ANSI (cp1252)
open(os.path.join(A, 'reconstrucao', 'PokeDados.inc'), 'w', encoding='cp1252', errors='replace').write('\n'.join(L) + '\n')
print('ok', len(rows))
