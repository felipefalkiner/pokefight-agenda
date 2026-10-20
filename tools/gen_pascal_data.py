"""Gera as units de dados da recompilação a partir dos dados extraídos do EXE original.

    python -I tools/gen_pascal_data.py

Entradas:
  analysis/dados/pokedex.json                  (TAPKG.ListBox1Click, 158 entradas)
  analysis/dados/extras.json                   (TMs, HMs, Poké-Marts)
  analysis/decompilado/TAPKG.FormCreate.c      (lista inicial: 152 nomes)
  analysis/decompilado/TAPKG.codeClick.c       (lista com personagens: 158 nomes)
  legacy/original/PokéFight1.2.exe             (créditos do "Sobre", no DFM TABOUT)
Saídas:
  src/upokedados.pas, src/uextras.pas
"""
import json
import os
import re
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, os.path.join(ROOT, 'tools'))
import dfm2lfm  # noqa: E402

HEADER = ('{ ARQUIVO GERADO por tools/gen_pascal_data.py - não editar à mão.\n'
          '  Fonte: dados extraídos de PokéFight1.2.exe (ver analysis/README.md). }\n')


def pas(s):
    """Literal Pascal UTF-8, quebrando linhas (#13#10) e pedaços longos."""
    parts = []
    for i, seg in enumerate(s.replace('\r\n', '\n').replace('\r', '\n').split('\n')):
        if i:
            parts.append('#13#10')
        while seg:
            chunk, seg = seg[:180], seg[180:]
            parts.append("'" + chunk.replace("'", "''") + "'" + ('+' if seg else ''))
    return ''.join(parts) or "''"


def string_array(name, items, ind='  '):
    body = ',\n'.join(ind + '  ' + pas(x) for x in items)
    return '%s%s: array[0..%d] of string = (\n%s\n%s);\n' % (ind, name, len(items) - 1, body, ind)


def list_from_c(path):
    t = open(path, encoding='utf-8').read()
    m = re.search(r'\(piVar1,(".*?")\);', t)
    return [x for x in json.loads(m.group(1)).split('\r') if x]


def main():
    A = os.path.join(ROOT, 'analysis')
    poke = json.load(open(os.path.join(A, 'dados', 'pokedex.json'), encoding='utf-8'))
    extras = json.load(open(os.path.join(A, 'dados', 'extras.json'), encoding='utf-8'))
    nomes = list_from_c(os.path.join(A, 'decompilado', 'TAPKG.FormCreate.c'))
    personagens = list_from_c(os.path.join(A, 'decompilado', 'TAPKG.codeClick.c'))
    assert len(nomes) == 152 and len(personagens) == 158

    # ---------------------------------------------------------- upokedados.pas
    rows = []
    for r in poke['entradas']:
        b = r['barras_status_1a6']
        rows.append(
            '    ({ %3d } Numero: %s; Nome: %s; Tipo: %s; Versao: %s;\n'
            '      Evolucao: %s;\n      Localizacao: %s;\n      Descricao: %s;\n'
            '      Movimentos: %s;\n'
            '      Sprite: %s; Barras: (%d, %d, %d, %d, %d))' % (
                r['indice_listbox'], pas(r['numero']), pas(r['nome']), pas(r['tipo']),
                pas(r['versao']), pas(r['evolucao']), pas(r['localizacao']), pas(r['descricao']),
                pas('\n'.join(r['movimentos'])), pas(r['sprite']),
                *[b[k] or 0 for k in ('energia', 'ataque', 'defesa', 'velocidade', 'especial')]))
    d = poke['valores_padrao_antes_do_if']
    src = HEADER + '''unit upokedados;

{$mode objfpc}{$H+}

interface

type
  { Ordem das barras igual à do form original (i1..i5, de cima para baixo). }
  TBarra = (bEnergia, bAtaque, bDefesa, bVelocidade, bEspecial);

  TPokeEntrada = record
    Numero, Nome, Tipo, Versao, Evolucao, Localizacao, Descricao, Movimentos, Sprite: string;
    Barras: array[TBarra] of Byte;  // 1..6 = data/<n>.gif; 0 = barra vazia (personagens)
  end;

const
  { Valores que ListBox1Click gravava antes da cadeia de ifs (0x4b9df4). }
  PADRAO_SPRITE = %s;
  PADRAO_VERSAO = %s;
  PADRAO_EVOLUCAO = %s;
  PADRAO_LOCALIZACAO = %s;

  { TAPKG.FormCreate (0x4f8f00): 150 Pokémon + Missingno + Mew. }
%s
  { TAPKG.codeClick (0x4fa208): a mesma lista + 6 personagens (botão oculto). }
%s
  { TAPKG.ListBox1Click / Edit1Change: um registro por índice da lista. }
  POKEDEX: array[0..%d] of TPokeEntrada = (
%s
  );

implementation

end.
''' % (pas(d['sprite']), pas(d['versao']), pas(d['evolucao']), pas(d['localizacao']),
       string_array('LISTA_POKEMON', nomes), string_array('LISTA_COM_PERSONAGENS', personagens),
       len(rows) - 1, ',\n'.join(rows))
    open(os.path.join(ROOT, 'src', 'upokedados.pas'), 'w', encoding='utf-8', newline='\n').write(src)

    # ---------------------------------------------------------- uextras.pas
    res = dfm2lfm.rcdata(os.path.join(ROOT, 'legacy', 'original', 'PokéFight1.2.exe'))
    about = dfm2lfm.parse_dfm(res['TABOUT'])
    panel = next(c for c in about['children'] if c['name'] == 'SecretPanel1')
    creditos = [v[1] for v in dict(panel['props'])['Lines.Strings'][1]]
    src = HEADER + '''unit uextras;

{$mode objfpc}{$H+}

interface

const
  { Ttm.ListBox1Click (0x4b846c) }
%s
  { Ttm.ListBox2Click (0x4b8e4c) }
%s
  { TMarts.ComboBox1Click (0x4b7790) }
%s
  { Tabout.SecretPanel1.Lines (DFM TABOUT) - créditos que rolam no "Sobre". }
%s
implementation

end.
''' % (string_array('TM_LOCALIZACAO', extras['tm_localizacao']),
       string_array('HM_LOCALIZACAO', extras['hm_localizacao']),
       string_array('MART_ITENS', extras['marts_itens']),
       string_array('CREDITOS', creditos))
    open(os.path.join(ROOT, 'src', 'uextras.pas'), 'w', encoding='utf-8', newline='\n').write(src)
    print('ok: %d entradas, %d nomes, %d linhas de créditos' % (len(rows), len(nomes), len(creditos)))


if __name__ == '__main__':
    main()
