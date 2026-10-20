{ ARQUIVO GERADO por tools/gen_pascal_data.py - não editar à mão.
  Fonte: dados extraídos de PokéFight1.2.exe (ver analysis/README.md). }
unit uextras;

{$mode objfpc}{$H+}

interface

const
  { Ttm.ListBox1Click (0x4b846c) }
  TM_LOCALIZACAO: array[0..49] of string = (
    'Mt. Moon, Celadon Mart',
    'Game Corner, Celadon Mart',
    'Silph Co.',
    'Route 4',
    'Celadon Mart, Victory Road',
    'Fuschia City Gym',
    'Celadon Mart, Game Corner',
    'S.S. Anne',
    'Celadon Mart, Silph Co.',
    'Game Corner',
    'Cerulean City Gym',
    'Mt. Moon',
    'Celadon Mart',
    'Mansion (Cinnabar)',
    'Game Corner',
    'Route 12',
    'Celadon Mart, Victory Road',
    'Celadon Mart',
    'Route 25',
    'Route 15',
    'Celadon City Gym',
    'Mansion (Cinnabar)',
    'Game Corner',
    'Vermilion City Gym',
    'Power Plant',
    'Silph Co.',
    'Viridian City Gym',
    'Cerulean City Gym',
    'Mr. Psychic (Saffron City)',
    'Route 9',
    'Saffron City',
    'Celadon Mart, Fuschia City',
    'Celadon Mart, Power Plant',
    'Pewter City Gym',
    'Mansion (Cinnabar)',
    'Silph Co.',
    'Celadon Mart, Fuschia City',
    'Cinnabar Island Gym',
    'Route 12',
    'Safari Zone',
    'Celadon City',
    'Viridian City',
    'Victory Road',
    'S.S. Anne',
    'Route 24',
    'Saffron City Gym',
    'Victory Road',
    'Celadon Mart',
    'Celadon Mart',
    'Game Corner'
  );

  { Ttm.ListBox2Click (0x4b8e4c) }
  HM_LOCALIZACAO: array[0..4] of string = (
    'S.S. Anne',
    'Route 16',
    'Safari Zone',
    'Fuschia City',
    'Route 2'
  );

  { TMarts.ComboBox1Click (0x4b7790) }
  MART_ITENS: array[0..12] of string = (
    'Poke Ball       $200'#13#10'Antidote        $100'#13#10'Paralyz Heal    $200'#13#10'Burn Heal       $250',
    'Poke Ball       $200'#13#10'Potion          $300'#13#10'Escape Rope     $550'#13#10'Anditode        $100'#13#10'Burn Heal       $250'#13#10'Awakening       $200'#13#10'Paralyz Heal    $200',
    'Poke Ball       $200'#13#10'Potion          $300'#13#10'Repel           $350'#13#10'Anditode        $100'#13#10'Escape Rope     $550'#13#10'Burn Heal       $250'#13#10'Awakening       $200'#13#10'Paralyz Heal    $200',
    'Poke Ball       $200'#13#10'Super Potion    $700'#13#10'Repel           $350'#13#10'Ice Heal        $250'#13#10'Awakening       $200'#13#10'Paralyz Heal    $200',
    'Great Ball      $600'#13#10'Super Potion    $700'#13#10'Super Repel     $500'#13#10'Revive        $1,500'#13#10'Super Repel     $500'#13#10'Escape Rope     $550'#13#10'Antidote        $100'#13#10'Burn Heal       $250'#13#10'Ice Heal        $250'#13#10'Paralyz Heal    $200',
    'Great Ball      $600'#13#10'Hyper Potion  $1,500'#13#10'Max Repel       $700'#13#10'Escape Rope     $550'#13#10'Full Heal       $600'#13#10'Revive        $1,500',
    'Great Ball      $600'#13#10'Super Potion    $700'#13#10'Revive        $1,500'#13#10'Super Repel     $500'#13#10'Antidote        $100'#13#10'Burn Heal       $250'#13#10'Ice Heal        $250'#13#10'Awakening       $200'#13#10'Paralyz Heal    $200'#13#10'TM 32         $1,000'#13#10'TM 33         $1,000'#13#10'TM 02         $2,000'#13#10'TM 07         $2,000'#13#10'TM 37         $2,000'#13#10'TM 01         $3,000'#13#10'TM 05         $3,000'#13#10'TM 09         $3,000'#13#10'TM 17         $3,000',
    'Poke Doll     $1,000'#13#10'Fire Stone    $2,100'#13#10'Thunder Stone $2,100'#13#10'Water Stone   $2,100'#13#10'Leaf Stone    $2,100',
    'Accuracy       $950'#13#10'Guard Spec     $700'#13#10'Dire Hit       $650'#13#10'Attack         $500'#13#10'Defend         $550'#13#10'Speed          $350'#13#10'Special        $350'#13#10'HP Up        $9,800'#13#10'Protein      $9,800'#13#10'Iron         $9,800'#13#10'Carbos       $9,800'#13#10'Calcium      $9,800',
    'Fresh Water     $200'#13#10'Soda Pop        $300'#13#10'Lemonade        $350',
    'Ultra Ball     $1,200'#13#10'Great Ball       $600'#13#10'Super Potion     $700'#13#10'Revive         $1,500'#13#10'Full Heal        $600'#13#10'Super Repel      $500',
    'Ultra Ball     $1,200'#13#10'Great Ball       $600'#13#10'Hyper Potion   $1,500'#13#10'Max Repel        $700'#13#10'Escape Rope      $550'#13#10'Full Heal        $600'#13#10'Revive         $1,500',
    'Ultra Ball     $1,200'#13#10'Great Ball       $600'#13#10'Full Restore   $3,000'#13#10'Max Potion     $2,500'#13#10'Full Heal        $600'#13#10'Revive         $1,500'#13#10'Max Repel        $700'
  );

  { Tabout.SecretPanel1.Lines (DFM TABOUT) - créditos que rolam no "Sobre". }
  CREDITOS: array[0..41] of string = (
    'Caso você encontre algum erro na ',
    'Agenda Pokémon da Poké Fight peço-lhe',
    'que envie um e-mail, clicando em: Internet,',
    'e em seguida  "E-mail".',
    '',
    'ATENÇÃO: Aconselho, que faça o download',
    'deste programa no site oficial da Poké Fight',
    'para evitar futuros problemas.',
    '',
    'http://www.pokefight.cjb.net',
    '',
    '',
    'Credits:',
    '',
    '',
    'Programação:',
    '|Felix|',
    '',
    'Design:',
    '|Felix|',
    '',
    'Fotos, icones e etc.:',
    '[_KangaskhaN_]',
    '',
    '-----------------------------------',
    '',
    '|Felix|: ICQ; 42252211',
    'herik.r@bol.com.br',
    'herik@baydejbc.com.br',
    '',
    '',
    '[_KangaskhaN_] : ICQ; 45893472',
    's_paranoid@hotmail.com',
    '',
    '',
    '''Pokémon'' é uma marca oficial da Nitendo',
    'of America. Todos os direitos reservados.',
    '',
    'Programa de Livre Distribuição.',
    '(Este programa não pode ser vendido)',
    '',
    '« Versão 1.2 » 2000®'
  );

implementation

end.
