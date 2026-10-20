{ Gerado automaticamente de dados/pokedex.json - extraido de TAPKG.ListBox1Click (0x4b9df4).
  Barras: nivel 1..6 = c:\windows\data\<nivel>.gif; 0 = barra limpa (personagens). }
type
  TPokeEntrada = record
    Numero, Nome, Tipo, Versao, Evolucao, Localizacao, Descricao, Movimentos, Sprite: string;
    Energia, Ataque, Defesa, Velocidade, Especial: Byte;
  end;

const
  POKEDEX: array[0..157] of TPokeEntrada = (
    ({   0 } Numero: '001'; Nome: 'Bulbasaur'; Tipo: 'Grama / Veneno'; Versao: 'Azul e Vermelha'; Evolucao: 'Level 16: Ivysaur / Level 32: Venusaur';
      Localizacao: 'Laboratório do Professor Carvalho (Cidade de Pallet)';
      Descricao: 'O Bulbasaur é um pokémon forte contra pokémons de rocha e água. Sua evolução final é o Venusaur. É o primeiro dos 150 pokémons.';
      Movimentos: 'LVL --- Tackle'#13#10'LVL --- Growl'#13#10'LVL 07 Leech Seed'#13#10'LVL 13 Vine Whip'#13#10'LVL 20 Poison Powder'#13#10'LVL 27 Razor Leaf'#13#10'LVL 34 Growth'#13#10'LVL 41 Sleep Powder'#13#10'LVL 48 Solar Beam';
      Sprite: '001.gif'; Energia: 3; Ataque: 1; Defesa: 1; Velocidade: 1; Especial: 2),
    ({   1 } Numero: '002'; Nome: 'Ivysaur'; Tipo: 'Grama / Veneno'; Versao: 'Azul e Vermelha'; Evolucao: 'Level 32: Venusaur';
      Localizacao: 'Evolução';
      Descricao: 'O Ivysaur é a primeira evolução do Bulbasaur. Evolui para Venusaur no level 32. Forte contra pokémons de rocha e água.';
      Movimentos: 'LVL --- Tackle'#13#10'LVL --- Growl'#13#10'LVL --- Leech Seed'#13#10'LVL --- Vine Whip'#13#10'LVL 22 Poison Powder'#13#10'LVL 30 Razor Leaf'#13#10'LVL 38 Growth'#13#10'LVL 46 Sleep Powder'#13#10'LVL 54 Solar Beam';
      Sprite: '002.gif'; Energia: 4; Ataque: 2; Defesa: 2; Velocidade: 2; Especial: 2),
    ({   2 } Numero: '003'; Nome: 'Venusaur'; Tipo: 'Grama / Veneno'; Versao: 'Azul e Vermelha'; Evolucao: 'não há';
      Localizacao: 'Evolução';
      Descricao: 'Última evolução do Bulbasaur. Bom ataque e defesa fazem dele um bom pokémon.';
      Movimentos: 'LVL --- Tackle'#13#10'LVL --- Growl'#13#10'LVL --- Leech Seed'#13#10'LVL --- Vine Whip'#13#10'LVL --- Poison Powder'#13#10'LVL --- Razor Leaf'#13#10'LVL 43 Growth'#13#10'LVL 55 Sleep Powder'#13#10'LVL 65 Solar Beam';
      Sprite: '003.gif'; Energia: 4; Ataque: 3; Defesa: 3; Velocidade: 3; Especial: 3),
    ({   3 } Numero: '004'; Nome: 'Charmander'; Tipo: 'Fogo'; Versao: 'Azul e Vermelha'; Evolucao: 'Level 16: Charmeleon / Level 36: Charizard';
      Localizacao: 'Laboratório do Professor Carvalho (Cidade de Pallet)';
      Descricao: 'O Charmander é um pokémon forte contra os pokémons de gelo e grama. Sua última evolução é o Charizard';
      Movimentos: 'LVL --- Scratch'#13#10'LVL --- Growl'#13#10'LVL 09 Ember'#13#10'LVL 15 Leer'#13#10'LVL 22 Rage'#13#10'LVL 30 Slash'#13#10'LVL 38 Flamethrower'#13#10'LVL 46 Fire spin';
      Sprite: '004.gif'; Energia: 3; Ataque: 2; Defesa: 1; Velocidade: 2; Especial: 1),
    ({   4 } Numero: '005'; Nome: 'Charmeleon'; Tipo: 'Fogo'; Versao: 'Azul e Vermelha'; Evolucao: 'Level 36: Charizard';
      Localizacao: 'Evolução';
      Descricao: 'Primeira evolução de Charmander. Seu ataque é fraco, porém, ele fica excelente quando evolui.';
      Movimentos: 'LVL --- Scratch'#13#10'LVL --- Growl'#13#10'LVL --- Ember'#13#10'LVL --- Leer'#13#10'LVL 24 Rage'#13#10'LVL 33 Slash'#13#10'LVL 42 Flamethrower'#13#10'LVL 56 Fire spin';
      Sprite: '005.gif'; Energia: 4; Ataque: 1; Defesa: 2; Velocidade: 3; Especial: 2),
    ({   5 } Numero: '006'; Nome: 'Charizard'; Tipo: 'Fogo / Voador'; Versao: 'Azul e Vermelha'; Evolucao: 'Não há';
      Localizacao: 'Evolução';
      Descricao: 'Última evolução do Charmander. Charizard é considerado um pokémon do fogo voador.';
      Movimentos: 'LVL --- Scratch'#13#10'LVL --- Growl'#13#10'LVL --- Ember'#13#10'LVL --- Leer'#13#10'LVL --- Rage'#13#10'LVL 36 Slash'#13#10'LVL 46 Flamethrower'#13#10'LVL 55 Fire spin';
      Sprite: '006.gif'; Energia: 5; Ataque: 3; Defesa: 2; Velocidade: 3; Especial: 3),
    ({   6 } Numero: '007'; Nome: 'Squirtle'; Tipo: 'Água'; Versao: 'Azul e Vermelha'; Evolucao: 'Level 16: Wartortle / Level 36: Blastoise';
      Localizacao: 'Laboratório do Professor Carvalho (Cidade de Pallet)';
      Descricao: 'Squirtle é forte contra pokémons do fogo e rocha. Sua última evolução é o Blastoise.';
      Movimentos: 'LVL --- Tackle'#13#10'LVL --- Growl'#13#10'LVL 08 Bubble'#13#10'LVL 15 Water Gun'#13#10'LVL 22 Bite'#13#10'LVL 28 Withdraw'#13#10'LVL 35 Skull Bash'#13#10'LVL 42 Hydro Pump';
      Sprite: '007.gif'; Energia: 3; Ataque: 1; Defesa: 2; Velocidade: 1; Especial: 1),
    ({   7 } Numero: '008'; Nome: 'Wartortle'; Tipo: 'Água'; Versao: 'Azul e Vermelha'; Evolucao: 'Level 36: Blastoise';
      Localizacao: 'Evolução';
      Descricao: 'Primeira evolução do Squirtle. Forte contra pokémons do fogo e da rocha. Sua última evolução é o Blastoise.';
      Movimentos: 'LVL --- Tackle'#13#10'LVL --- Growl'#13#10'LVL --- Bubble'#13#10'LVL --- Water Gun'#13#10'LVL 24 Bite'#13#10'LVL 31 Withdraw'#13#10'LVL 39 Skull Bash'#13#10'LVL 47 Hydro Pump';
      Sprite: '008.gif'; Energia: 4; Ataque: 2; Defesa: 3; Velocidade: 2; Especial: 2),
    ({   8 } Numero: '009'; Nome: 'Blastoise'; Tipo: 'Água'; Versao: 'Azul e Vermelha'; Evolucao: 'Não há';
      Localizacao: 'Evolução';
      Descricao: 'Blastoise é a última evolução do Squirtle. Novos e poderosos golpes como Skull Bash e Hydro Pump. É o pokémon que aparece na caixa da versão azul.';
      Movimentos: 'LVL --- Tackle'#13#10'LVL --- Growl'#13#10'LVL --- Bubble'#13#10'LVL --- Water Gun'#13#10'LVL --- Bite'#13#10'LVL --- Withdraw'#13#10'LVL 42 Skull Bash'#13#10'LVL 52 Hydro Pump';
      Sprite: '009.gif'; Energia: 5; Ataque: 3; Defesa: 4; Velocidade: 3; Especial: 3),
    ({   9 } Numero: '010'; Nome: 'Caterpie'; Tipo: 'Inseto'; Versao: 'Azul e Vermelha'; Evolucao: 'Level 7: Metapod / Level 10: Bitterfree';
      Localizacao: 'Floresta Viridian, Rotas 2, 24 e 25';
      Descricao: 'Um pokémon fraco, fácil de pegar e de evoluir e muito comum. Caterpie evolui no level 7 para Metapod e no level 10 para Butterfree.';
      Movimentos: 'LVL --- Tackle'#13#10'LVL --- String Shot';
      Sprite: '010.gif'; Energia: 3; Ataque: 1; Defesa: 1; Velocidade: 1; Especial: 1),
    ({  10 } Numero: '011'; Nome: 'Metapod'; Tipo: 'Inseto'; Versao: 'Azul e Vermelha'; Evolucao: 'Level 10: Butterfree';
      Localizacao: 'Floresta Viridian, Rotas 2, 24 e 25';
      Descricao: 'Um pokémon muito fraco, só fica disponível por 3 levels, depois ele se transforma no Butterfree.';
      Movimentos: 'LVL --- Harden';
      Sprite: '011.gif'; Energia: 3; Ataque: 1; Defesa: 2; Velocidade: 1; Especial: 1),
    ({  11 } Numero: '012'; Nome: 'Butterfree'; Tipo: 'Inseto / Voador'; Versao: 'Azul e Vermelha'; Evolucao: 'Não há';
      Localizacao: 'Evolução';
      Descricao: 'Uma borboleta que deixa os inimigos dormindo e confusos, Butterfree tem a defesa e ataque fraquíssimos. Seu melhor ataque é o Psybeam, conseguido no level 32.';
      Movimentos: 'LVL 12 Confusion'#13#10'LVL 15 Poison Powder'#13#10'LVL 16 Stun Spore'#13#10'LVL 17 Sleep Powder'#13#10'LVL 21 Supersonic'#13#10'LVL 26 Whirlwind'#13#10'LVL 32 Psybeam';
      Sprite: '012.gif'; Energia: 3; Ataque: 1; Defesa: 1; Velocidade: 3; Especial: 3),
    ({  12 } Numero: '013'; Nome: 'Weedle'; Tipo: 'Veneno'; Versao: 'Azul e Vermelha'; Evolucao: 'Level 7: Kakuna / Level 10: Beedrill';
      Localizacao: 'Floresta Viridian, Rotas 2, 24 e 25';
      Descricao: 'Weedle é outro pokémon fraco, fácil de pegar e evoluir e muito comum. Ele evolui no level 7 para Kakuna e no 10 para Beedrill.';
      Movimentos: 'LVL --- Tackle'#13#10'LVL --- String Shot';
      Sprite: '013.gif'; Energia: 3; Ataque: 1; Defesa: 1; Velocidade: 1; Especial: 1),
    ({  13 } Numero: '014'; Nome: 'Kakuna'; Tipo: 'Veneno'; Versao: 'Azul e Vermelha'; Evolucao: 'Level 10: Beedrill';
      Localizacao: 'Floresta Viridian, Rotas 2, 24 e 25';
      Descricao: 'Fraco, mas, você só terá ele por três levels, depois ele se transforma em Beedrill.';
      Movimentos: 'LVL --- Harden';
      Sprite: '014.gif'; Energia: 3; Ataque: 1; Defesa: 1; Velocidade: 1; Especial: 1),
    ({  14 } Numero: '015'; Nome: 'Beedrill'; Tipo: 'Veneno'; Versao: 'Azul e Vermelha'; Evolucao: 'Não há';
      Localizacao: 'Evolução';
      Descricao: 'Beedrill é um pokémon agressivo. Seus ataques são rápidos e ageis.';
      Movimentos: 'LVL 12 Fury Attack'#13#10'LVL 16 Focus Energy'#13#10'LVL 20 Twineedle'#13#10'LVL 25 Rage'#13#10'LVL 30 Pin Missile'#13#10'LVL 35 Agility';
      Sprite: '015.gif'; Energia: 4; Ataque: 3; Defesa: 1; Velocidade: 3; Especial: 1),
    ({  15 } Numero: '016'; Nome: 'Pidgey'; Tipo: 'Normal / Voador'; Versao: 'Azul e Vermelha'; Evolucao: 'Level 18: Pidgeotto / Level 36: Pidgeot';
      Localizacao: 'Rotas 1, 2, 3, 5, 6, 7, 8, 12, 14, 15, 24 e 25';
      Descricao: 'Pidgey é o pokémon mais fácil de achar em todo o jogo. Pode ser achado em muitos lugares.';
      Movimentos: 'LVL --- Gust'#13#10'LVL 05 Sand Attack'#13#10'LVL 12 Quick Attack'#13#10'LVL 19 Whirlwind'#13#10'LVL 28 Wing Attack'#13#10'LVL 36 Agility'#13#10'LVL 44 Mirror Move';
      Sprite: '016.gif'; Energia: 3; Ataque: 1; Defesa: 1; Velocidade: 2; Especial: 1),
    ({  16 } Numero: '017'; Nome: 'Pidgeotto'; Tipo: 'Normal / Voador'; Versao: 'Azul e Vermelha'; Evolucao: 'Level 36: Pidgeot';
      Localizacao: 'Rotas 14, 15, e 21';
      Descricao: 'Pidgeotto é a primeira evolução do Pidgey. Seus ataques são rápidos.';
      Movimentos: 'LVL --- Gust'#13#10'LVL --- Sand Attack'#13#10'LVL --- Quick Attack'#13#10'LVL 21 Whirlwind'#13#10'LVL 31 Wing Attack'#13#10'LVL 40 Agility'#13#10'LVL 49 Mirror Move';
      Sprite: '017.gif'; Energia: 4; Ataque: 2; Defesa: 1; Velocidade: 2; Especial: 1),
    ({  17 } Numero: '018'; Nome: 'Pidgeot'; Tipo: 'Normal / Voador'; Versao: 'Azul e Vermelha'; Evolucao: 'Não há';
      Localizacao: 'Evolução';
      Descricao: 'Pidgeot é a última evolução do Pidgey. Seus ataques são rápidos e fortes. Ele é ágil.';
      Movimentos: 'LVL --- Gust'#13#10'LVL --- Sand Attack'#13#10'LVL --- Quick Attack'#13#10'LVL --- Whirlwind'#13#10'LVL --- Wing Attack'#13#10'LVL 44 Agility'#13#10'LVL 54 Mirror Move';
      Sprite: '018.gif'; Energia: 5; Ataque: 3; Defesa: 2; Velocidade: 3; Especial: 2),
    ({  18 } Numero: '019'; Nome: 'Rattata'; Tipo: 'Normal'; Versao: 'Azul e Vermelha'; Evolucao: 'Level 20: Raticate';
      Localizacao: 'Rotas 1, 2, 4, 9, 10, 16, 17, 18, 21 e 22';
      Descricao: 'Outro pokémon fácil de achar. Ele tem bons ataques diretos. Ele é achado em vários lugares.';
      Movimentos: 'LVL --- Tackle'#13#10'LVL --- Tail Whip'#13#10'LVL 07 Quick Attack'#13#10'LVL 14 Hyper Fang'#13#10'LVL 23 Focus Energy'#13#10'LVL 36 Super Fang';
      Sprite: '019.gif'; Energia: 3; Ataque: 2; Defesa: 1; Velocidade: 2; Especial: 1),
    ({  19 } Numero: '020'; Nome: 'Raticate'; Tipo: 'Normal'; Versao: 'Azul e Vermelha'; Evolucao: 'Não há';
      Localizacao: 'Rotas 16, 17, 18, e 21';
      Descricao: 'A evolução do Rattata para Raticate é um ótimo passo. Novos ataques poderosos como o Super Fang são muito úteis.';
      Movimentos: 'LVL --- Tackle'#13#10'LVL --- Tail Whip'#13#10'LVL --- Quick Attack'#13#10'LVL 14 Hyper Fang'#13#10'LVL 27 Focus Energy'#13#10'LVL 41 Super Fang';
      Sprite: '020.gif'; Energia: 4; Ataque: 3; Defesa: 2; Velocidade: 3; Especial: 1),
    ({  20 } Numero: '021'; Nome: 'Spearow'; Tipo: 'Normal / Voador'; Versao: 'Azul e Vermelha'; Evolucao: 'Level 20: Fearow';
      Localizacao: 'Rotas 3, 4, 9, 10, 11, 16, 17, 18, 22 e 23';
      Descricao: 'Spearow é outro pokémon voador. Mas este pokémon é mais agressivo em comparação ao Pidgey.';
      Movimentos: 'LVL --- Peck'#13#10'LVL --- Growl'#13#10'LVL 09 Leer'#13#10'LVL 15 Fury Attack'#13#10'LVL 22 Mirror Move'#13#10'LVL 29 Drill Peck'#13#10'LVL 36 Agility';
      Sprite: '021.gif'; Energia: 3; Ataque: 1; Defesa: 1; Velocidade: 2; Especial: 1),
    ({  21 } Numero: '022'; Nome: 'Fearow'; Tipo: 'Normal / Voador'; Versao: 'Azul e Vermelha'; Evolucao: 'Não há';
      Localizacao: 'Rotas 17, 18, e 23';
      Descricao: 'Última evolução do Spearow. Ataques poderosos como Drill Peck. Sua energia é boa mas seu especial é horrível.';
      Movimentos: 'LVL --- Peck'#13#10'LVL --- Growl'#13#10'LVL --- Leer'#13#10'LVL --- Fury Attack'#13#10'LVL 25 Mirror Move'#13#10'LVL 34 Drill Peck'#13#10'LVL 43 Agility';
      Sprite: '022.gif'; Energia: 4; Ataque: 3; Defesa: 2; Velocidade: 3; Especial: 1),
    ({  22 } Numero: '023'; Nome: 'Ekans'; Tipo: 'Veneno'; Versao: 'Vermelha (Somente)'; Evolucao: 'Level 22: Arbok';
      Localizacao: 'Rotas 4, 8, 9, 10, 11 e 23';
      Descricao: 'Achado somente na versão vermelha do jogo. É um dos pokémons venenosos do jogo. Usa o Leer e o Screech para diminuir a defesa do inimigo. Seus ataques de veneno podem até matar os inimigos ou deixá-lo'+'s no estado Poisoned.';
      Movimentos: 'LVL --- Wrap'#13#10'LVL --- Leer'#13#10'LVL 10 Poison Sting'#13#10'LVL 17 Bite'#13#10'LVL 24 Glare'#13#10'LVL 31 Screech'#13#10'LVL 38 Acid';
      Sprite: '023.gif'; Energia: 3; Ataque: 2; Defesa: 1; Velocidade: 1; Especial: 1),
    ({  23 } Numero: '024'; Nome: 'Arbok'; Tipo: 'Veneno'; Versao: 'Vermelha (Somente)'; Evolucao: 'Não há';
      Localizacao: 'Rotas 23 e Unknown Dungeon';
      Descricao: 'Arbok é a evolução de Ekans. Só pode ser achado na versão vermelha. Sua velocidade é seu ponto forte.';
      Movimentos: 'LVL --- Wrap'#13#10'LVL --- Leer'#13#10'LVL --- Poison Sting'#13#10'LVL 17 Bite'#13#10'LVL 27 Glare'#13#10'LVL 36 Screech'#13#10'LVL 47 Acid';
      Sprite: '024.gif'; Energia: 3; Ataque: 2; Defesa: 2; Velocidade: 3; Especial: 1),
    ({  24 } Numero: '025'; Nome: 'Pikachu'; Tipo: 'Elétrico'; Versao: 'Azul e Vermelha'; Evolucao: 'Thunder Stone: Raichu';
      Localizacao: 'Floresta Viridian e Power Plant';
      Descricao: 'Pikachu é o pokémon mais popular em existência. É um dos poucos pokémons elétricos do jogo.';
      Movimentos: 'LVL --- Thundershock'#13#10'LVL --- Growl'#13#10'LVL 09 Thunderwave'#13#10'LVL 16 Quick Attack'#13#10'LVL 26 Swift'#13#10'LVL 33 Agility'#13#10'LVL 43 Thunder';
      Sprite: '025.gif'; Energia: 3; Ataque: 1; Defesa: 1; Velocidade: 3; Especial: 1),
    ({  25 } Numero: '026'; Nome: 'Raichu'; Tipo: 'Elétrico'; Versao: 'Azul e Vermelha'; Evolucao: 'Não há';
      Localizacao: 'Power Plant e Unknown Dungeon';
      Descricao: 'Raichu é um dos mais fortes pokémons do jogo. Porém, Raichu não aprende outros movimentos.';
      Movimentos: 'LVL --- Thundershock'#13#10'LVL --- Growl'#13#10'LVL --- Thunderwave'#13#10'LVL 16 Quick Attack'#13#10'LVL 26 Swift'#13#10'LVL 33 Agility'#13#10'LVL 43 Thunder';
      Sprite: '026.gif'; Energia: 3; Ataque: 3; Defesa: 1; Velocidade: 3; Especial: 3),
    ({  26 } Numero: '027'; Nome: 'Sandshrew'; Tipo: 'Terra'; Versao: 'Azul (Somente)'; Evolucao: 'Level 22: Sandslash';
      Localizacao: 'Rotas 4, 8, 9, 10, 11 e 23';
      Descricao: 'Achado somente na versão azul do game. Um bom pokémon de terra.';
      Movimentos: 'LVL --- Scratch'#13#10'LVL 10 Sand Attack'#13#10'LVL 17 Slash'#13#10'LVL 24 Poison Sting'#13#10'LVL 31 Swift'#13#10'LVL 38 Fury Swipes';
      Sprite: '027.gif'; Energia: 4; Ataque: 3; Defesa: 2; Velocidade: 1; Especial: 1),
    ({  27 } Numero: '028'; Nome: 'Sandslash'; Tipo: 'Terra'; Versao: 'Azul (Somente)'; Evolucao: 'Não há';
      Localizacao: 'Rotas 23 e Unknown Dungeon';
      Descricao: 'É a evolução do Sandshrew. Só é achado na versão azul.';
      Movimentos: 'LVL --- Scratch'#13#10'LVL 10 Sand Attack'#13#10'LVL 17 Slash'#13#10'LVL 24 Poison Sting'#13#10'LVL 31 Swift'#13#10'LVL 38 Fury Swipes';
      Sprite: '028.gif'; Energia: 4; Ataque: 4; Defesa: 4; Velocidade: 2; Especial: 2),
    ({  28 } Numero: '029'; Nome: 'Nidoran(F)'; Tipo: 'Veneno'; Versao: 'Azul e Vermelha'; Evolucao: 'Level 16: Nidorina / Moon Stone: Nidoqueen';
      Localizacao: 'Rota 22 e Safari Zone';
      Descricao: 'Este pokémon existe em versão feminina e masculina. A versão feminina é muito lenta em Speed. Porém, ela evolui para Nidorina, um bom pokémon.';
      Movimentos: 'LVL --- Tackle'#13#10'LVL --- Growl'#13#10'LVL 08 Scratch'#13#10'LVL 14 Poison Sting'#13#10'LVL 21 Tail Whip'#13#10'LVL 29 Bite'#13#10'LVL 36 Fury Swipes'#13#10'LVL 43 Double Kick';
      Sprite: '029.gif'; Energia: 4; Ataque: 1; Defesa: 1; Velocidade: 1; Especial: 1),
    ({  29 } Numero: '030'; Nome: 'Nidorina'; Tipo: 'Veneno'; Versao: 'Azul e Vermelha'; Evolucao: 'Moon Stone: Nidoqueen';
      Localizacao: 'Safari Zone e no Coin Exchange (Cidade de Celadon)';
      Descricao: 'Este pokémon aprende muitos movimentos, incluindo Fury Swipes e o Double Kick.';
      Movimentos: 'LVL --- Tackle'#13#10'LVL --- Growl'#13#10'LVL --- Scratch'#13#10'LVL 14 Poison Sting'#13#10'LVL 23 Tail Whip'#13#10'LVL 32 Bite'#13#10'LVL 41 Fury Swipes'#13#10'LVL 50 Double Kick';
      Sprite: '030.gif'; Energia: 4; Ataque: 2; Defesa: 1; Velocidade: 1; Especial: 1),
    ({  30 } Numero: '031'; Nome: 'Nidoqueen'; Tipo: 'Veneno'; Versao: 'Azul e Vermelha'; Evolucao: 'Não há';
      Localizacao: 'Evolução';
      Descricao: 'Nidoqueen é um grande pokémon que evolui com a Moonstone. Ela só aprende o Poison Sting e o Body Slam. Sua energia é excelente.';
      Movimentos: 'LVL --- Tackle'#13#10'LVL --- Scratch'#13#10'LVL --- Tail Whip'#13#10'LVL 14 Poison Sting'#13#10'LVL 23 Body Slam';
      Sprite: '031.gif'; Energia: 4; Ataque: 3; Defesa: 3; Velocidade: 1; Especial: 3),
    ({  31 } Numero: '032'; Nome: 'Nidoran(M)'; Tipo: 'Veneno'; Versao: 'Azul e Vermelha'; Evolucao: 'Level 16: Nidorino / Moon Stone: Nidoking';
      Localizacao: 'Rota 22 e Safari Zone';
      Descricao: 'A versão masculina dos Nidorans aprende muitos movimentos. Seu melhor desempenho é a energia.';
      Movimentos: 'LVL --- Leer'#13#10'LVL --- Tackle'#13#10'LVL 08 Horn Attack'#13#10'LVL 14 Poison Sting'#13#10'LVL 21 Focus Energy'#13#10'LVL 29 Fury Attack'#13#10'LVL 36 Horn Drill'#13#10'LVL 43 Double Kick';
      Sprite: '032.gif'; Energia: 3; Ataque: 1; Defesa: 1; Velocidade: 1; Especial: 1),
    ({  32 } Numero: '033'; Nome: 'Nidorino'; Tipo: 'Veneno'; Versao: 'Azul e Vermelha'; Evolucao: 'Moon Stone: Nidoking';
      Localizacao: 'Safari Zone e no Coin Exchange (Cidade de Celadon)';
      Descricao: 'Muito maior que o Nidoran(M). Também tem bastante movimentos. Use a Moonstone nele e ele se transformará no poderoso Nidoking.';
      Movimentos: 'LVL --- Leer'#13#10'LVL --- Tackle'#13#10'LVL --- Horn Attack'#13#10'LVL --- Poison Sting'#13#10'LVL 23 Focus Energy'#13#10'LVL 32 Fury Attack'#13#10'LVL 41 Horn Drill'#13#10'LVL 50 Double Kick';
      Sprite: '033.gif'; Energia: 3; Ataque: 2; Defesa: 1; Velocidade: 2; Especial: 1),
    ({  33 } Numero: '034'; Nome: 'Nidoking'; Tipo: 'Veneno'; Versao: 'Azul e Vermelha'; Evolucao: 'Não há';
      Localizacao: 'Evolução';
      Descricao: 'Melhor pokémon de toda a espécie Nidoran. Sua energia e defesa são ótimos. Ataques, velocidade e special são bons.';
      Movimentos: 'LVL --- Tackle'#13#10'LVL --- Horn Attack'#13#10'LVL --- Poison Sting'#13#10'LVL 23 Thrash';
      Sprite: '034.gif'; Energia: 5; Ataque: 3; Defesa: 4; Velocidade: 3; Especial: 2),
    ({  34 } Numero: '035'; Nome: 'Clefairy'; Tipo: 'Normal'; Versao: 'Azul e Vermelha'; Evolucao: 'Moon Stone: Clefable';
      Localizacao: 'Montanha da Lua e no Coin Exchange (Cidade de Celadon)';
      Descricao: 'Muito raro. Aprende muitos movimentos e pode evoluir com a Moonstone.';
      Movimentos: 'LVL --- Pound'#13#10'LVL --- Growl'#13#10'LVL 18 Doubleslap'#13#10'LVL 24 Minimize'#13#10'LVL 31 Metronome'#13#10'LVL 39 Defense Curl'#13#10'LVL 48 Light Screen';
      Sprite: '035.gif'; Energia: 4; Ataque: 1; Defesa: 1; Velocidade: 1; Especial: 2),
    ({  35 } Numero: '036'; Nome: 'Clefable'; Tipo: 'Normal'; Versao: 'Azul e Vermelha'; Evolucao: 'Não há';
      Localizacao: 'Evolução';
      Descricao: 'Com a Moonstone, Clefairy se transforma no poderoso Clefable. Energia excelente. O resto é bom.';
      Movimentos: 'LVL --- Sing'#13#10'LVL --- Doubleslap'#13#10'LVL --- Minimize'#13#10'LVL --- Metronome';
      Sprite: '036.gif'; Energia: 5; Ataque: 2; Defesa: 3; Velocidade: 2; Especial: 3),
    ({  36 } Numero: '037'; Nome: 'Vulpix'; Tipo: 'Fogo'; Versao: 'Azul (Somente)'; Evolucao: 'Fire Stone: Ninetales';
      Localizacao: 'Rotas 7, 8 e Pokémon House (na Ilha Cinnabar)';
      Descricao: 'Um pokémon-raposa. Seu ataque e defesa são ruins. Sua energia é boa.';
      Movimentos: 'LVL --- Ember'#13#10'LVL --- Tail Whip'#13#10'LVL 16 Quick Attack'#13#10'LVL 21 Roar'#13#10'LVL 28 Confuse Ray'#13#10'LVL 35 Flame Thrower'#13#10'LVL 42 Fire Spin';
      Sprite: '037.gif'; Energia: 4; Ataque: 1; Defesa: 1; Velocidade: 2; Especial: 2),
    ({  37 } Numero: '038'; Nome: 'Ninetales'; Tipo: 'Fogo'; Versao: 'Azul (Somente)'; Evolucao: 'Não há';
      Localizacao: 'Evolução';
      Descricao: 'Usando a Firestone em Vulpix, ele se transformará em Ninetales. Seus atributos são bons.';
      Movimentos: 'LVL --- Ember'#13#10'LVL --- Tail Whip'#13#10'LVL --- Quick Attack'#13#10'LVL --- Roar';
      Sprite: '038.gif'; Energia: 5; Ataque: 2; Defesa: 2; Velocidade: 3; Especial: 3),
    ({  38 } Numero: '039'; Nome: 'Jigglypuff'; Tipo: 'Normal'; Versao: 'Azul (Somente)'; Evolucao: 'Moon Stone: Wigglytuff';
      Localizacao: 'Rota 3';
      Descricao: 'Jigglypuff é um pokémon fraco. Porém, sua energia é excelente e seus movimentos de música fazem o oponente dormir.';
      Movimentos: 'LVL --- Sing'#13#10'LVL 09 Pound'#13#10'LVL 14 Disable'#13#10'LVL 19 Defense Curl'#13#10'LVL 24 Doubleslap'#13#10'LVL 29 Rest'#13#10'LVL 34 Body Slam'#13#10'LVL 39 Double-Edge';
      Sprite: '039.gif'; Energia: 5; Ataque: 1; Defesa: 1; Velocidade: 1; Especial: 1),
    ({  39 } Numero: '040'; Nome: 'Wigglytuff'; Tipo: 'Normal'; Versao: 'Azul e Vermelha'; Evolucao: 'Não há';
      Localizacao: 'Unknown Dungeon';
      Descricao: 'Use a Moonstone para transformar Jigglypuff em Wigglypuff. Só seu ataque melhora.';
      Movimentos: 'LVL --- Sing'#13#10'LVL --- Disable'#13#10'LVL --- Defense Curl'#13#10'LVL --- Doubleslap';
      Sprite: '040.gif'; Energia: 5; Ataque: 2; Defesa: 1; Velocidade: 1; Especial: 1),
    ({  40 } Numero: '041'; Nome: 'Zubat'; Tipo: 'Veneno / Voador'; Versao: 'Azul e Vermelha'; Evolucao: 'Level 22: Golbat';
      Localizacao: 'Montanha da Morte, Túnel da Pedra, Ilhas Seafrom e Victory Road';
      Descricao: 'Achado na maioria das cavernas. Zubat evolui no level 22 para Golbat. Energia muito boa. Ataque e defesa médios.';
      Movimentos: 'LVL --- Leech Life'#13#10'LVL 10 Supersonic'#13#10'LVL 15 Bite'#13#10'LVL 21 Confuse Ray'#13#10'LVL 28 Wing Attack'#13#10'LVL 36 Haze';
      Sprite: '041.gif'; Energia: 4; Ataque: 2; Defesa: 1; Velocidade: 2; Especial: 1),
    ({  41 } Numero: '042'; Nome: 'Golbat'; Tipo: 'Veneno / Voador'; Versao: 'Azul e Vermelha'; Evolucao: 'Não há';
      Localizacao: 'Ilhas Safrom, Victory Road e Unknown Dungeon';
      Descricao: 'Evolução do Zubat. Pokémon com atributos muito bons. Aprende 2 novos movimentos : Wing Attack e Haze.';
      Movimentos: 'LVL --- Leech Life'#13#10'LVL --- Supersonic'#13#10'LVL --- Bite'#13#10'LVL --- Confuse Ray'#13#10'LVL 32 Wing Attack'#13#10'LVL 43 Haze';
      Sprite: '042.gif'; Energia: 4; Ataque: 2; Defesa: 2; Velocidade: 3; Especial: 2),
    ({  42 } Numero: '043'; Nome: 'Oddish'; Tipo: 'Grama / Veneno'; Versao: 'Vermelha (Somente)'; Evolucao: 'Level 21: Gloom / Leaf Stone: Vileplume';
      Localizacao: 'Rotas 5, 6, 7, 12, 13, 14, 15, 24 e 25';
      Descricao: 'Achado somente na versão vermelha, em muitos lugares com grama. Muitos movimentos como Solar Beam.';
      Movimentos: 'LVL --- Absorb'#13#10'LVL 15 Poison Powder'#13#10'LVL 17 Stun Spore'#13#10'LVL 19 Sleep Powder'#13#10'LVL 24 Acid'#13#10'LVL 33 Petal Dance'#13#10'LVL 46 Solar Beam';
      Sprite: '043.gif'; Energia: 3; Ataque: 1; Defesa: 1; Velocidade: 1; Especial: 2),
    ({  43 } Numero: '044'; Nome: 'Gloom'; Tipo: 'Grama / Veneno'; Versao: 'Vermelha (Somente)'; Evolucao: 'Leaf Stone: Vileplume';
      Localizacao: 'Rotas 12, 13, 14 e 15';
      Descricao: 'Primeira evolução do Oddish. Achado somente na versão vermelha. Vários movimentos.';
      Movimentos: 'LVL --- Absorb'#13#10'LVL --- Poison Powder'#13#10'LVL --- Stun Spore'#13#10'LVL --- Sleep Powder'#13#10'LVL 28 Acid'#13#10'LVL 38 Petal Dance'#13#10'LVL 52 Solar Beam';
      Sprite: '044.gif'; Energia: 4; Ataque: 1; Defesa: 2; Velocidade: 1; Especial: 3),
    ({  44 } Numero: '045'; Nome: 'Vileplume'; Tipo: 'Grama / Veneno'; Versao: 'Vermelha (Somente)'; Evolucao: 'Não há';
      Localizacao: 'Evolução';
      Descricao: 'Evolui com a Leafstone. Não aprende nenhum movimento. Energia excelente, ataque, defesa e especial muito bons.';
      Movimentos: 'LVL --- Poison Powder'#13#10'LVL --- Stun Spore'#13#10'LVL --- Sleep Powder';
      Sprite: '045.gif'; Energia: 5; Ataque: 3; Defesa: 3; Velocidade: 1; Especial: 3),
    ({  45 } Numero: '046'; Nome: 'Paras'; Tipo: 'Inseto / Grama'; Versao: 'Azul e Vermelha'; Evolucao: 'Level 24: Parasect';
      Localizacao: 'Montanha da Lua e Safari Zone';
      Descricao: 'Achado em lugares escuros, como o Mt. Moon ou a Safari Zone, na Fuschia City. Energia média.';
      Movimentos: 'LVL --- Scratch'#13#10'LVL 13 Stun Spore'#13#10'LVL 20 Leech Life'#13#10'LVL 27 Spore'#13#10'LVL 34 Slash'#13#10'LVL 41 Growth';
      Sprite: '046.gif'; Energia: 3; Ataque: 2; Defesa: 1; Velocidade: 1; Especial: 1),
    ({  46 } Numero: '047'; Nome: 'Parasect'; Tipo: 'Inseto / Grama'; Versao: 'Azul e Vermelha'; Evolucao: 'Não há';
      Localizacao: 'Safari Zone e Unknown Dungeon';
      Descricao: 'Grande e mais poderoso do que Paras. Sua energia é boa, assim como o ataque.';
      Movimentos: 'LVL --- Scratch'#13#10'LVL --- Stun Spore'#13#10'LVL --- Leech Life'#13#10'LVL 30 Spore'#13#10'LVL 39 Slash'#13#10'LVL 48 Growth';
      Sprite: '047.gif'; Energia: 4; Ataque: 3; Defesa: 2; Velocidade: 1; Especial: 2),
    ({  47 } Numero: '048'; Nome: 'Venonat'; Tipo: 'Inseto / Grama'; Versao: 'Azul e Vermelha'; Evolucao: 'Level 31: Venomoth';
      Localizacao: 'Rotas 12, 13, 14, 15 e Safari Zone';
      Descricao: 'Achado na região sudeste do mapa. Tem muitos movimentos como o Psychic.';
      Movimentos: 'LVL --- Tackle'#13#10'LVL --- Disable'#13#10'LVL 24 Poison Powder'#13#10'LVL 27 Leech Life'#13#10'LVL 30 Stun Spore'#13#10'LVL 35 Psybeam'#13#10'LVL 38 Sleep Powder'#13#10'LVL 43 Psychic';
      Sprite: '048.gif'; Energia: 4; Ataque: 1; Defesa: 1; Velocidade: 1; Especial: 1),
    ({  48 } Numero: '049'; Nome: 'Venomoth'; Tipo: 'Inseto / Veneno'; Versao: 'Azul e Vermelha'; Evolucao: 'Não há';
      Localizacao: 'Safari Zone, Victory Road e Unknown Dungeon';
      Descricao: 'Energia muito boa, ataque e defesa bons. Ataques baseados na grama, inseto, veneno e normais.';
      Movimentos: 'LVL --- Tackle'#13#10'LVL --- Disable'#13#10'LVL --- Poison Powder'#13#10'LVL --- Leech Life'#13#10'LVL --- Stun Spore'#13#10'LVL 38 Psybeam'#13#10'LVL 43 Sleep Powder'#13#10'LVL 50 Psychic';
      Sprite: '049.gif'; Energia: 4; Ataque: 2; Defesa: 1; Velocidade: 3; Especial: 3),
    ({  49 } Numero: '050'; Nome: 'Diglett'; Tipo: 'Terra'; Versao: 'Azul e Vermelha'; Evolucao: 'Level 26: Digtrio';
      Localizacao: 'Caverna Diglett';
      Descricao: 'Pokémon-toupeira. Pode se esconder embaixo da terra no combate e atacar os inimigos de surpresa. Não é bom contra pokémons voadores.';
      Movimentos: 'LVL --- Scratch'#13#10'LVL 15 Growl'#13#10'LVL 19 Dig'#13#10'LVL 24 Sand-Attack'#13#10'LVL 31 Slash'#13#10'LVL 40 Earthquake';
      Sprite: '050.gif'; Energia: 1; Ataque: 2; Defesa: 1; Velocidade: 3; Especial: 1),
    ({  50 } Numero: '051'; Nome: 'Dugtrio'; Tipo: 'Terra'; Versao: 'Azul e Vermelha'; Evolucao: 'Não há';
      Localizacao: 'Caverna Diglett';
      Descricao: '3 pokémons em 1. Energia triplicada e velocidade boa. Última evolução do Digglet.';
      Movimentos: 'LVL --- Scratch'#13#10'LVL --- Growl'#13#10'LVL --- Dig'#13#10'LVL --- Sand-Attack'#13#10'LVL 35 Slash'#13#10'LVL 47 Earthquake';
      Sprite: '051.gif'; Energia: 3; Ataque: 2; Defesa: 1; Velocidade: 4; Especial: 2),
    ({  51 } Numero: '052'; Nome: 'Meowth'; Tipo: 'Normal'; Versao: 'Azul (Somente)'; Evolucao: 'Level 28: Persian';
      Localizacao: 'Rotas 5, 6, 7 e 8';
      Descricao: 'Ataques variados, como o Pay Day, onde Meowth rouba dinheiro do treinador do pokémon inimigo.';
      Movimentos: 'LVL --- Scratch'#13#10'LVL --- Growl'#13#10'LVL 12 Bite'#13#10'LVL 17 Pay Day'#13#10'LVL 24 Screech'#13#10'LVL 33 Fury Swipes'#13#10'LVL 44 Slash';
      Sprite: '052.gif'; Energia: 3; Ataque: 1; Defesa: 1; Velocidade: 3; Especial: 1),
    ({  52 } Numero: '053'; Nome: 'Persian'; Tipo: 'Normal'; Versao: 'Azul (Somente)'; Evolucao: 'Não há';
      Localizacao: 'Evolução';
      Descricao: 'Evoluído do Meowth. No level 28 na versão azul. Na vermelha, troque com alguém.';
      Movimentos: 'LVL --- Scratch'#13#10'LVL --- Growl'#13#10'LVL --- Bite'#13#10'LVL --- Pay Day'#13#10'LVL --- Screech'#13#10'LVL 37 Fury Swipes'#13#10'LVL 51 Slash';
      Sprite: '053.gif'; Energia: 4; Ataque: 2; Defesa: 2; Velocidade: 4; Especial: 2),
    ({  53 } Numero: '054'; Nome: 'Psyduck'; Tipo: 'Água'; Versao: 'Azul e Vermelha'; Evolucao: 'Level 33: Golduck';
      Localizacao: 'Rotas 4, 24 e 25';
      Descricao: 'Tem ataques que confusam o inimigo. Baseados na água, os ataques de Psyduck são razoáveis.';
      Movimentos: 'LVL --- Scratch'#13#10'LVL 28 Tail Whip'#13#10'LVL 31 Disable'#13#10'LVL 36 Confusion'#13#10'LVL 43 Fury Swipes'#13#10'LVL 52 Hydro Pump';
      Sprite: '054.gif'; Energia: 3; Ataque: 2; Defesa: 1; Velocidade: 1; Especial: 1),
    ({  54 } Numero: '055'; Nome: 'Golduck'; Tipo: 'Água'; Versao: 'Azul e Vermelha'; Evolucao: 'Não há';
      Localizacao: 'Rotas 4, 24, 25, Cidade de Celadon, Cidade de Fuchsia e Ilhas Seafrom (pescando)';
      Descricao: 'Evoluído do Psyduck no level 33. Seus atributos triplicaram, a não ser, a defesa.';
      Movimentos: 'LVL --- Scratch'#13#10'LVL --- Tail Whip'#13#10'LVL --- Disable'#13#10'LVL 39 Confusion'#13#10'LVL 48 Fury Swipes'#13#10'LVL 59 Hydro Pump';
      Sprite: '055.gif'; Energia: 4; Ataque: 3; Defesa: 3; Velocidade: 2; Especial: 2),
    ({  55 } Numero: '056'; Nome: 'Mankey'; Tipo: 'Lutador'; Versao: 'Vermelha (Somente)'; Evolucao: 'Level 28: Primeape';
      Localizacao: 'Rotas 5, 6, 7 e 8';
      Descricao: 'Um pokémon lutador muito poderoso. Possui bons ataques como o Seismic Toss. Ele evolui no level 28 para Primeape.';
      Movimentos: 'LVL --- Scratch'#13#10'LVL --- Leer'#13#10'LVL 15 Karate Chop'#13#10'LVL 21 Fury Attack'#13#10'LVL 27 Focus Energy'#13#10'LVL 33 Seismic Toss'#13#10'LVL 39 Thrash';
      Sprite: '056.gif'; Energia: 3; Ataque: 2; Defesa: 1; Velocidade: 2; Especial: 1),
    ({  56 } Numero: '057'; Nome: 'Primeape'; Tipo: 'Lutador'; Versao: 'Vermelha somente'; Evolucao: 'Não há';
      Localizacao: 'Evolução';
      Descricao: 'Evoluído do Mankey. Só pode ser achado na versão vermelha. Na azul você deve trocar com alguém.';
      Movimentos: 'LVL --- Scratch'#13#10'LVL --- Leer'#13#10'LVL --- Karate Chop'#13#10'LVL --- Fury Attack'#13#10'LVL --- Focus Energy'#13#10'LVL 37 Seismic Toss'#13#10'LVL 46 Thrash';
      Sprite: '057.gif'; Energia: 4; Ataque: 3; Defesa: 2; Velocidade: 3; Especial: 1),
    ({  57 } Numero: '058'; Nome: 'Growlithe'; Tipo: 'Fogo'; Versao: 'Vermelha (Somente)'; Evolucao: 'Fire Stone: Arcanine';
      Localizacao: 'Rotas 7, 8 e na Pokémon House (Ilha Cinnabar)';
      Descricao: 'Muito difícil de pegar. É uma boa escolha para seu time. Energia muito boa.';
      Movimentos: 'LVL --- Bite'#13#10'LVL --- Roar'#13#10'LVL 18 Ember'#13#10'LVL 23 Leer'#13#10'LVL 30 Take Down'#13#10'LVL 39 Agility'#13#10'LVL 50 Flamethrower';
      Sprite: '058.gif'; Energia: 4; Ataque: 2; Defesa: 1; Velocidade: 2; Especial: 1),
    ({  58 } Numero: '059'; Nome: 'Arcanine'; Tipo: 'Fogo'; Versao: 'Vermelha (Somente)'; Evolucao: 'Não há';
      Localizacao: 'Evolução';
      Descricao: 'Evoluído do Growlithe com a Firestone. Não aprende nenhum ataque. Energia excelente, assim como o ataque.';
      Movimentos: 'LVL --- Bite'#13#10'LVL --- Roar'#13#10'LVL --- Ember'#13#10'LVL --- Leer'#13#10'LVL --- Take Down';
      Sprite: '059.gif'; Energia: 5; Ataque: 4; Defesa: 2; Velocidade: 3; Especial: 3),
    ({  59 } Numero: '060'; Nome: 'Poliwag'; Tipo: 'Água'; Versao: 'Azul e Vermelha'; Evolucao: 'Level 25: Poliwhirl / Water Stone: Poliwrath';
      Localizacao: 'Cidade Viridian e Rota 22 (pescando)';
      Descricao: 'Ataque, defesa e especial muito ruins. Porém, energia e velocidade bons.';
      Movimentos: 'LVL --- Bubble'#13#10'LVL 16 Hypnosis'#13#10'LVL 19 Water Gun'#13#10'LVL 25 Doubleslap'#13#10'LVL 31 Body Slam'#13#10'LVL 38 Amnesia'#13#10'LVL 45 Hydro Pump';
      Sprite: '060.gif'; Energia: 3; Ataque: 1; Defesa: 1; Velocidade: 3; Especial: 1),
    ({  60 } Numero: '061'; Nome: 'Poliwhirl'; Tipo: 'Água'; Versao: 'Azul e Vermelha'; Evolucao: 'Water Stone: Poliwrath';
      Localizacao: 'Cidade de Celadon e Rota 10 (pescando)';
      Descricao: 'Evolução do Poliwag. Poliwhirl tem ataques de mão não muito poderosos, um dos melhores é o Doubleslap. Energia é muito boa.';
      Movimentos: 'LVL --- Bubble'#13#10'LVL --- Hypnosis'#13#10'LVL --- Water Gun'#13#10'LVL 26 Doubleslap'#13#10'LVL 33 Body Slam'#13#10'LVL 41 Amnesia'#13#10'LVL 49 Hydro Pump';
      Sprite: '061.gif'; Energia: 4; Ataque: 2; Defesa: 2; Velocidade: 3; Especial: 1),
    ({  61 } Numero: '062'; Nome: 'Poliwrath'; Tipo: 'Água'; Versao: 'Azul e Vermelha'; Evolucao: 'Não há';
      Localizacao: 'Evolução';
      Descricao: 'Última evolução do Poliwag. Um pokémon poderoso com vários movimentos.';
      Movimentos: 'LVL --- Bubble'#13#10'LVL --- Hypnosis'#13#10'LVL --- Water Gun';
      Sprite: '062.gif'; Energia: 5; Ataque: 3; Defesa: 3; Velocidade: 2; Especial: 2),
    ({  62 } Numero: '063'; Nome: 'Abra'; Tipo: 'Psíquico'; Versao: 'Azul e Vermelha'; Evolucao: 'Level 16: Kadabra / Trocado: Alakazam';
      Localizacao: 'Rotas 24, 25 e Coin Exchange (Cidade de Celadon)';
      Descricao: 'Extremamente difícil de pegar. Seu único movimento Teleport pode até colocar o inimigo para dormir.';
      Movimentos: 'LVL --- Teleport';
      Sprite: '063.gif'; Energia: 1; Ataque: 1; Defesa: 1; Velocidade: 3; Especial: 4),
    ({  63 } Numero: '064'; Nome: 'Kadabra'; Tipo: 'Psíquico'; Versao: 'Azul e Vermelha'; Evolucao: 'Trocado: Alakazam';
      Localizacao: 'Unknown Dungeon';
      Descricao: 'Abra se tranforma em Kadabra no level 16. Seus movimentos são muitos e uns dos melhores são o Psybeam e o Psychic.';
      Movimentos: 'LVL --- Teleport'#13#10'LVL --- Confusion'#13#10'LVL 20 Disable'#13#10'LVL 27 Psybeam'#13#10'LVL 31 Recover'#13#10'LVL 38 Psychic'#13#10'LVL 42 Reflect';
      Sprite: '064.gif'; Energia: 2; Ataque: 1; Defesa: 1; Velocidade: 4; Especial: 4),
    ({  64 } Numero: '065'; Nome: 'Alakazam'; Tipo: 'Psíquico'; Versao: 'Azul e Vermelha'; Evolucao: 'Não há';
      Localizacao: 'Evolução';
      Descricao: 'É conseguido quando o Kadabra é trocado por um Alakazam. Esta evolução aumenta em muito a energia e os ataques.';
      Movimentos: 'LVL --- Teleport'#13#10'LVL --- Confusion'#13#10'LVL 20 Disable'#13#10'LVL 27 Psybeam'#13#10'LVL 31 Recover'#13#10'LVL 38 Psychic'#13#10'LVL 42 Reflect';
      Sprite: '065.gif'; Energia: 4; Ataque: 1; Defesa: 1; Velocidade: 4; Especial: 5),
    ({  65 } Numero: '066'; Nome: 'Machop'; Tipo: 'Lutador'; Versao: 'Azul e Vermelha'; Evolucao: 'Level 28: Machoke / Trocado: Machamp';
      Localizacao: 'Túnel de Pedra e Victory Road';
      Descricao: 'Um dos poucos pokémons-lutadores. Seu ataque faz qualquer inimigo morrer rápidamente.';
      Movimentos: 'LVL --- Karate Chop'#13#10'LVL 20 Low Kick'#13#10'LVL 25 Leer'#13#10'LVL 32 Focus Energy'#13#10'LVL 39 Seismic Toss'#13#10'LVL 46 Submission';
      Sprite: '066.gif'; Energia: 4; Ataque: 3; Defesa: 1; Velocidade: 1; Especial: 1),
    ({  66 } Numero: '067'; Nome: 'Machoke'; Tipo: 'Lutador'; Versao: 'Azul e Vermelha'; Evolucao: 'Trocado: Machamp';
      Localizacao: 'Túnel de Pedra e Victory Road';
      Descricao: 'Primeira evolução do Machop. Machoke é ágil e muito poderoso.';
      Movimentos: 'LVL --- Karate Chop'#13#10'LVL --- Low Kick'#13#10'LVL --- Leer'#13#10'LVL 36 Focus Energy'#13#10'LVL 44 Seismic Toss'#13#10'LVL 52 Submission';
      Sprite: '067.gif'; Energia: 5; Ataque: 3; Defesa: 2; Velocidade: 1; Especial: 1),
    ({  67 } Numero: '068'; Nome: 'Machamp'; Tipo: 'Lutador'; Versao: 'Azul e Vermelha'; Evolucao: 'Não há';
      Localizacao: 'Evolução';
      Descricao: 'Conseguido quando o Machoke é trocado por um destes.';
      Movimentos: 'LVL --- Karate Chop'#13#10'LVL --- Low Kick'#13#10'LVL --- Leer'#13#10'LVL 36 Focus Energy'#13#10'LVL 44 Seismic Toss'#13#10'LVL 52 Submission';
      Sprite: '068.gif'; Energia: 5; Ataque: 4; Defesa: 3; Velocidade: 1; Especial: 2),
    ({  68 } Numero: '069'; Nome: 'Bellsprout'; Tipo: 'Grama / Veneno'; Versao: 'Azul (Somente)'; Evolucao: 'Level 21: Weepinbell / Leaf Stone: Victreebel';
      Localizacao: 'Rotas 5, 6, 7, 12, 13, 14, 15, 24 e 25';
      Descricao: 'Achado somente na versão azul. Este é mais um exemplo dos pokémons de vários tipos combinando grama e veneno.';
      Movimentos: 'LVL --- Vine Whip'#13#10'LVL --- Growth'#13#10'LVL 13 Wrap'#13#10'LVL 15 Poison Powder'#13#10'LVL 18 Sleep Powder'#13#10'LVL 21 Stun Spore'#13#10'LVL 26 Acid'#13#10'LVL 33 Razor Leaf'#13#10'LVL 42 Slam';
      Sprite: '069.gif'; Energia: 3; Ataque: 2; Defesa: 1; Velocidade: 1; Especial: 2),
    ({  69 } Numero: '070'; Nome: 'Weepinbell'; Tipo: 'Grama / Veneno'; Versao: 'Azul (Somente)'; Evolucao: 'Leaf Stone: Victreebel';
      Localizacao: 'Rotas 12, 13, 14 e 15';
      Descricao: 'Achado na parte sudeste do mapa do game. Primeira evolução do Bellsprout. Só evolui com a Leafstone para Victreebell.';
      Movimentos: 'LVL --- Vine Whip'#13#10'LVL --- Growth'#13#10'LVL --- Wrap'#13#10'LVL --- Poison Powder'#13#10'LVL --- Sleep Powder'#13#10'LVL 23 Stun Spore'#13#10'LVL 29 Acid'#13#10'LVL 38 Razor Leaf'#13#10'LVL 49 Slam';
      Sprite: '070.gif'; Energia: 4; Ataque: 3; Defesa: 1; Velocidade: 1; Especial: 3),
    ({  70 } Numero: '071'; Nome: 'Victreebel'; Tipo: 'Grama / Veneno'; Versao: 'Azul (Somente)'; Evolucao: 'Não há';
      Localizacao: 'Evolução';
      Descricao: 'Última evolução do Bellstrout. Seus atributos são iguais aos do Weepinbell. Consiga um destes para se tornar um mestre Pokémon.';
      Movimentos: 'LVL --- Wrap'#13#10'LVL --- Poison Powder'#13#10'LVL --- Sleep Powder';
      Sprite: '071.gif'; Energia: 4; Ataque: 3; Defesa: 1; Velocidade: 1; Especial: 3),
    ({  71 } Numero: '072'; Nome: 'Tentacool'; Tipo: 'Água / Veneno'; Versao: 'Azul e Vermelha'; Evolucao: 'Level 30: Tentacruel';
      Localizacao: 'Rotas 12, 13, 17, 18, 19, 20, 21, Cidade de Pallet e Cidade Viridian';
      Descricao: 'Muito comum nos lagos de Pallet Town e Cinnabar Islands, até mesmo nos riachos de Fuschia City.';
      Movimentos: 'LVL --- Acid'#13#10'LVL 07 Supersonic'#13#10'LVL 13 Wrap'#13#10'LVL 18 Poison Sting'#13#10'LVL 22 Water Gun'#13#10'LVL 27 Constrict'#13#10'LVL 33 Barrier'#13#10'LVL 40 Screech'#13#10'LVL 48 Hydro Pump';
      Sprite: '072.gif'; Energia: 3; Ataque: 1; Defesa: 1; Velocidade: 2; Especial: 3),
    ({  72 } Numero: '073'; Nome: 'Tentacruel'; Tipo: 'Água / Veneno'; Versao: 'Azul e Vermelha'; Evolucao: 'Não há';
      Localizacao: 'Evolução';
      Descricao: 'Quando Tentacool chega ao level 30, ele se tranforma no poderoso Tentacruel. Sua energia foi dobrada.';
      Movimentos: 'LVL --- Acid'#13#10'LVL --- Supersonic'#13#10'LVL --- Wrap'#13#10'LVL --- Poison Sting'#13#10'LVL --- Water Gun'#13#10'LVL --- Constrict'#13#10'LVL 35 Barrier'#13#10'LVL 43 Screech'#13#10'LVL 50 Hydro Pump';
      Sprite: '073.gif'; Energia: 5; Ataque: 3; Defesa: 1; Velocidade: 3; Especial: 4),
    ({  73 } Numero: '074'; Nome: 'Geodude'; Tipo: 'Pedra / Terra'; Versao: 'Azul e Vermelha'; Evolucao: 'Level 25: Graveler / Trocado: Golem';
      Localizacao: 'Montanha da Lua, Túnel de Pedra e Victory Road';
      Descricao: 'Muito comum nas cavernas como Mt. Moon, Rock Cave e Victory Road. Seu elemento é a rocha.';
      Movimentos: 'LVL --- Tackle'#13#10'LVL 07 Defense Curl'#13#10'LVL 13 Rock Throw'#13#10'LVL 18 Self Destruct'#13#10'LVL 22 Harden'#13#10'LVL 27 Earthquake'#13#10'LVL 33 Explosion';
      Sprite: '074.gif'; Energia: 3; Ataque: 2; Defesa: 2; Velocidade: 1; Especial: 1),
    ({  74 } Numero: '075'; Nome: 'Graveler'; Tipo: 'Pedra / Terra'; Versao: 'Azul e Vermelha'; Evolucao: 'Trocado: Golem';
      Localizacao: 'Victory Road';
      Descricao: 'Graveler é bem mais "duro" do que Geodude, mas, Graveler é mais lento.';
      Movimentos: 'LVL --- Tackle'#13#10'LVL --- Defense Curl'#13#10'LVL --- Rock Throw'#13#10'LVL --- Self Destruct'#13#10'LVL 29 Harden'#13#10'LVL 36 Earthquake'#13#10'LVL 43 Explosion';
      Sprite: '075.gif'; Energia: 4; Ataque: 3; Defesa: 4; Velocidade: 1; Especial: 1),
    ({  75 } Numero: '076'; Nome: 'Golem'; Tipo: 'Pedra / Terra'; Versao: 'Azul e Vermelha'; Evolucao: 'Não há';
      Localizacao: 'Evolução';
      Descricao: 'Quando Graveler é trocado você consegue um Golem. É muito difícil de pegá-lo por seu enorme tamanho.';
      Movimentos: 'LVL --- Tackle'#13#10'LVL --- Defense Curl'#13#10'LVL --- Rock Throw'#13#10'LVL --- Self Destruct'#13#10'LVL 29 Harden'#13#10'LVL 36 Earthquake'#13#10'LVL 43 Explosion';
      Sprite: '076.gif'; Energia: 5; Ataque: 3; Defesa: 4; Velocidade: 1; Especial: 1),
    ({  76 } Numero: '077'; Nome: 'Ponyta'; Tipo: 'Fogo'; Versao: 'Azul e Vermelha'; Evolucao: 'Level 40: Rapidash';
      Localizacao: 'Pokémon House (Ilha Cinnabar)';
      Descricao: 'Achado somente na Cinnabar Islands Mansion. Muito efetivo contra pokémons de gelo, grama e pokémons-insetos. Evolui no level 40 para Rapidash.';
      Movimentos: 'LVL --- Ember'#13#10'LVL 30 Tail Whip'#13#10'LVL 32 Stomp'#13#10'LVL 35 Growl'#13#10'LVL 39 Fire Spin'#13#10'LVL 43 Take Down'#13#10'LVL 48 Agility';
      Sprite: '077.gif'; Energia: 3; Ataque: 3; Defesa: 1; Velocidade: 3; Especial: 1),
    ({  77 } Numero: '078'; Nome: 'Rapidash'; Tipo: 'Fogo'; Versao: 'Azul e Vermelha'; Evolucao: 'Não há';
      Localizacao: 'Evolução';
      Descricao: 'Uma ótima escolha de pokémons do fogo para colecionadores de pokémon.';
      Movimentos: 'LVL --- Ember'#13#10'LVL --- Tail Whip'#13#10'LVL --- Stomp'#13#10'LVL --- Growl'#13#10'LVL --- Fire Spin'#13#10'LVL 47 Take Down'#13#10'LVL 55 Agility';
      Sprite: '078.gif'; Energia: 4; Ataque: 3; Defesa: 2; Velocidade: 4; Especial: 2),
    ({  78 } Numero: '079'; Nome: 'Slowpoke'; Tipo: 'Água / Psíquico'; Versao: 'Azul e Vermelha'; Evolucao: 'Level 37: Slowbro';
      Localizacao: 'Cidade de Celadon, Safari Zone, Ilhas Seafrom, Rota 10 (pescando)';
      Descricao: 'Um pokémon muito maluco. Ele é muito lento. Demora 5 segundos para seu cérebro trabalhar.';
      Movimentos: 'LVL --- Confusion'#13#10'LVL 30 Disable'#13#10'LVL 32 Headbutt'#13#10'LVL 35 Growl'#13#10'LVL 39 Water Gun'#13#10'LVL 43 Amnesia'#13#10'LVL 48 Psychic';
      Sprite: '079.gif'; Energia: 5; Ataque: 2; Defesa: 2; Velocidade: 1; Especial: 1),
    ({  79 } Numero: '080'; Nome: 'Slowbro'; Tipo: 'Água / Psíquico'; Versao: 'Azul e Vermelha'; Evolucao: 'Não há';
      Localizacao: 'Ilhas Seafrom, Rota 23 (pescando) e Unknown Dungeon';
      Descricao: 'Mais maluco do que Slowpoke. Ele continua lento.';
      Movimentos: 'LVL --- Confusion'#13#10'LVL --- Disable'#13#10'LVL --- Headbutt'#13#10'LVL --- Growl'#13#10'LVL --- Water Gun'#13#10'LVL 44 Amnesia'#13#10'LVL 55 Psychic';
      Sprite: '080.gif'; Energia: 5; Ataque: 3; Defesa: 3; Velocidade: 1; Especial: 3),
    ({  80 } Numero: '081'; Nome: 'Magnemite'; Tipo: 'Elétrico'; Versao: 'Azul e Vermelha'; Evolucao: 'Level 30: Magneton';
      Localizacao: 'Power Plant';
      Descricao: 'Achado somente na Powerplant e na Unknown Dungeon. Seu ataque é fraco.';
      Movimentos: 'LVL --- Tackle'#13#10'LVL 21 Sonic Boom'#13#10'LVL 25 Thundershock'#13#10'LVL 29 Super Sonic'#13#10'LVL 35 Thunder Wave'#13#10'LVL 41 Swift'#13#10'LVL 47 Screech';
      Sprite: '081.gif'; Energia: 3; Ataque: 1; Defesa: 2; Velocidade: 1; Especial: 3),
    ({  81 } Numero: '082'; Nome: 'Magneton'; Tipo: 'Elétrico'; Versao: 'Azul e Vermelha'; Evolucao: 'Não há';
      Localizacao: 'Power Plant e Unknown Dungeon';
      Descricao: 'Outro do tipo "3 em 1". Seu ataque continua fraco. Sua energia, defesa, velocidade e especial aumentaram.';
      Movimentos: 'LVL --- Tackle'#13#10'LVL --- Sonic Boom'#13#10'LVL --- Thundershock'#13#10'LVL --- Super Sonic'#13#10'LVL 38 Thunder Wave'#13#10'LVL 46 Swift'#13#10'LVL 54 Screech';
      Sprite: '082.gif'; Energia: 4; Ataque: 1; Defesa: 3; Velocidade: 2; Especial: 4),
    ({  82 } Numero: '083'; Nome: 'Farfetch´d'; Tipo: 'Normal / Voador'; Versao: 'Azul e Vermelha'; Evolucao: 'Não há';
      Localizacao: 'Cidade de Vermilion';
      Descricao: 'Um pokémon-pássaro muito raro. Também pode ser achado trocando um Spearow em Viridian City.';
      Movimentos: 'LVL --- Peck'#13#10'LVL -- Sand-Attack'#13#10'LVL 07 Leer'#13#10'LVL 15 Fury Attack'#13#10'LVL 23 Swords Dance'#13#10'LVL 31 Agility'#13#10'LVL 39 Slash';
      Sprite: '083.gif'; Energia: 3; Ataque: 2; Defesa: 1; Velocidade: 2; Especial: 2),
    ({  83 } Numero: '084'; Nome: 'Duduo'; Tipo: 'Normal / Voador'; Versao: 'Azul e Vermelha'; Evolucao: 'Level 31: Dodrio';
      Localizacao: 'Rotas 16, 17, 18 e Safari Zone';
      Descricao: 'Um pokémon voador. Pode ser achado na Safari Zone.';
      Movimentos: 'LVL --- Peck'#13#10'LVL 20 Growl'#13#10'LVL 24 Fury Attack'#13#10'LVL 30 Drill Peck'#13#10'LVL 36 Rage'#13#10'LVL 40 Tri Attack'#13#10'LVL 44 Agility';
      Sprite: '084.gif'; Energia: 3; Ataque: 3; Defesa: 1; Velocidade: 2; Especial: 1),
    ({  84 } Numero: '085'; Nome: 'Dodrio'; Tipo: 'Normal / Voador'; Versao: 'Azul e Vermelha'; Evolucao: 'Não há';
      Localizacao: 'Unknown Dungeon';
      Descricao: 'No level 31, Doduo evolui para Dodrio. Este é outro pokémon do tipo "3 em 1", mas, no caso são três cabeças.';
      Movimentos: 'LVL --- Peck'#13#10'LVL --- Growl'#13#10'LVL --- Fury Attack'#13#10'LVL --- Drill Peck'#13#10'LVL 39 Rage'#13#10'LVL 45 Tri Attack'#13#10'LVL 51 Agility';
      Sprite: '085.gif'; Energia: 4; Ataque: 4; Defesa: 3; Velocidade: 3; Especial: 2),
    ({  85 } Numero: '086'; Nome: 'Seel'; Tipo: 'Água / Gelo'; Versao: 'Azul e Vermelha'; Evolucao: 'Level 34: Dewgong';
      Localizacao: 'Ilhas Seafrom';
      Descricao: 'Achado em poucos lugares como Cinnabar Islands e Seafoam Islands. É um pokémon da água. Mas seus ataques são baseados no gelo.';
      Movimentos: 'LVL --- Headbutt'#13#10'LVL 30 Growl'#13#10'LVL 35 Aurora Beam'#13#10'LVL 40 Rest'#13#10'LVL 45 Take Down'#13#10'LVL 50 Ice Beam';
      Sprite: '086.gif'; Energia: 4; Ataque: 1; Defesa: 1; Velocidade: 1; Especial: 2),
    ({  86 } Numero: '087'; Nome: 'Dewgong'; Tipo: 'Água / Gelo'; Versao: 'Azul e Vermelha'; Evolucao: 'Nào há';
      Localizacao: 'Ilhas Seafrom';
      Descricao: 'Atributos do Seel duplicaram. Um pokémon da água muito poderoso.';
      Movimentos: 'LVL --- Headbutt'#13#10'LVL --- Growl'#13#10'LVL 35 Aurora Beam'#13#10'LVL 44 Rest'#13#10'LVL 50 Take Down'#13#10'LVL 56 Ice Beam';
      Sprite: '087.gif'; Energia: 5; Ataque: 3; Defesa: 4; Velocidade: 2; Especial: 3),
    ({  87 } Numero: '088'; Nome: 'Grimer'; Tipo: 'Veneno'; Versao: 'Azul e Vermelha'; Evolucao: 'Level 38: Muk';
      Localizacao: 'Pokémon House (Ilhas Cinnabar)';
      Descricao: 'Seus atributos são horríveis, porém, sua energia é ótima. É um dos poucos pokémons do veneno.';
      Movimentos: 'LVL --- Pound'#13#10'LVL --- Disable'#13#10'LVL 30 Poison Gas'#13#10'LVL 33 Minimize'#13#10'LVL 37 Sludge'#13#10'LVL 42 Harden'#13#10'LVL 48 Screech'#13#10'LVL 55 Acid Armor';
      Sprite: '088.gif'; Energia: 4; Ataque: 2; Defesa: 1; Velocidade: 1; Especial: 1),
    ({  88 } Numero: '089'; Nome: 'Muk'; Tipo: 'Veneno'; Versao: 'Azul e Vermelha'; Evolucao: 'Não há';
      Localizacao: 'Pokémon House (Ilhas Cinnabar)';
      Descricao: 'Quando Grimer chega no level 38, ele evolui para Muk. Ataques bons como o Acid Armor.';
      Movimentos: 'LVL --- Pound'#13#10'LVL --- Disable'#13#10'LVL --- Poison Gas'#13#10'LVL --- Minimize'#13#10'LVL --- Sludge'#13#10'LVL 45 Harden'#13#10'LVL 53 Screech'#13#10'LVL 60 Acid Armor';
      Sprite: '089.gif'; Energia: 5; Ataque: 4; Defesa: 2; Velocidade: 1; Especial: 1),
    ({  89 } Numero: '090'; Nome: 'Shellder'; Tipo: 'Água'; Versao: 'Azul e Vermelha'; Evolucao: 'Water stone: Cloyster';
      Localizacao: 'Rotas 6, 11, Cidade de Vermilion, Cidade Cerulean e Ilhas Seafrom';
      Descricao: 'Comum em muitas partes do jogo. Seus atributos são fracos.';
      Movimentos: 'LVL --- Tackle'#13#10'LVL --- Withdraw'#13#10'LVL 18 Supersonic'#13#10'LVL 23 Clamp'#13#10'LVL 30 Aurora Beam'#13#10'LVL 39 Leer'#13#10'LVL 50 Ice Beam';
      Sprite: '090.gif'; Energia: 2; Ataque: 1; Defesa: 3; Velocidade: 1; Especial: 1),
    ({  90 } Numero: '091'; Nome: 'Cloyster'; Tipo: 'Água / Gelo'; Versao: 'Azul e Vermelha'; Evolucao: 'Não há';
      Localizacao: 'Evolução';
      Descricao: 'Pokémon forte, muito difícil de derrotar. Sua defesa é excelente.';
      Movimentos: 'LVL --- Withdraw'#13#10'LVL --- Supersonic'#13#10'LVL --- Clamp'#13#10'LVL --- Aurora Beam'#13#10'LVL 50 Spike Cannon';
      Sprite: '091.gif'; Energia: 3; Ataque: 3; Defesa: 5; Velocidade: 2; Especial: 3),
    ({  91 } Numero: '092'; Nome: 'Gastly'; Tipo: 'Fantasma'; Versao: 'Azul e Vermelha'; Evolucao: 'Level 25: Haunter / Trocado: Gengar';
      Localizacao: 'Pokémon Tower (Cidade de Lavender)';
      Descricao: 'Um dos poucos pokémons-fantasmas. Seus ataques normais e de luta são fracos.';
      Movimentos: 'LVL --- Lick'#13#10'LVL --- Confuse Ray'#13#10'LVL --- Night Shade'#13#10'LVL 27 Hypnosis'#13#10'LVL 35 Dream Eater';
      Sprite: '092.gif'; Energia: 3; Ataque: 1; Defesa: 1; Velocidade: 2; Especial: 3),
    ({  92 } Numero: '093'; Nome: 'Haunter'; Tipo: 'Fantasma'; Versao: 'Azul e Vermelha'; Evolucao: 'Trocado: Gengar';
      Localizacao: 'Pokémon Tower (Cidade de Lavender)';
      Descricao: 'Outro do tipo fastasma. Ele aprende o Dream Eater que põe o inimigo para dormir.';
      Movimentos: 'LVL --- Lick'#13#10'LVL --- Confuse Ray'#13#10'LVL --- Night Shade'#13#10'LVL 29 Hypnosis'#13#10'LVL 38 Dream Eater';
      Sprite: '093.gif'; Energia: 3; Ataque: 2; Defesa: 1; Velocidade: 3; Especial: 4),
    ({  93 } Numero: '094'; Nome: 'Gengar'; Tipo: 'Fantasma'; Versao: 'Azul e Vermelha'; Evolucao: 'Não há';
      Localizacao: 'Evolução';
      Descricao: 'Você só consegue este trocando com o uso do Cabo Link com alguém. Outro pokémon do tipo fantasma.';
      Movimentos: 'LVL --- Lick'#13#10'LVL --- Confuse Ray'#13#10'LVL --- Night Shade'#13#10'LVL 29 Hypnosis'#13#10'LVL 38 Dream Eater';
      Sprite: '094.gif'; Energia: 4; Ataque: 2; Defesa: 2; Velocidade: 3; Especial: 4),
    ({  94 } Numero: '095'; Nome: 'Onix'; Tipo: 'Pedra / Terra'; Versao: 'Azul e Vermelha'; Evolucao: 'Não há';
      Localizacao: 'Túnel de Pedra e Victory Road';
      Descricao: 'Um pokém muito alto e forte. Sua defesa é excelente. Vulnerável contra pokémons da água e grama.';
      Movimentos: 'LVL --- Tackle'#13#10'LVL --- Screech'#13#10'LVL 15 Bind'#13#10'LVL 19 Rock Throw'#13#10'LVL 25 Rage'#13#10'LVL 33 Slam'#13#10'LVL 43 Harden';
      Sprite: '095.gif'; Energia: 3; Ataque: 1; Defesa: 5; Velocidade: 3; Especial: 1),
    ({  95 } Numero: '096'; Nome: 'Drowzee'; Tipo: 'Psíquico'; Versao: 'Azul e Vermelha'; Evolucao: 'Level 26: Hypno';
      Localizacao: 'Rota 11';
      Descricao: 'Um pokémon fraco. Porém, seus movimentos psíquicos são bons.';
      Movimentos: 'LVL --- Pound'#13#10'LVL --- Hypnosis'#13#10'LVL 12 Disable'#13#10'LVL 17 Confusion'#13#10'LVL 24 Headbutt'#13#10'LVL 29 Poison Gas'#13#10'LVL 32 Psychic'#13#10'LVL 37 Meditate';
      Sprite: '096.gif'; Energia: 4; Ataque: 1; Defesa: 1; Velocidade: 1; Especial: 3),
    ({  96 } Numero: '097'; Nome: 'Hypno'; Tipo: 'Psíquico'; Versao: 'Azul e Vermelha'; Evolucao: 'Não há';
      Localizacao: 'Unknown Dungeon';
      Descricao: 'Seus movimentos psíquicos fazem o inimigo dormir. Enquanto isso, ele os ataca.';
      Movimentos: 'LVL --- Pound'#13#10'LVL --- Hypnosis'#13#10'LVL --- Disable'#13#10'LVL --- Confusion'#13#10'LVL --- Headbutt'#13#10'LVL 33 Poison Gas'#13#10'LVL 37 Psychic'#13#10'LVL 43 Meditate';
      Sprite: '097.gif'; Energia: 5; Ataque: 2; Defesa: 2; Velocidade: 2; Especial: 4),
    ({  97 } Numero: '098'; Nome: 'Krabby'; Tipo: 'Água'; Versao: 'Azul e Vermelha'; Evolucao: 'Level 28: Kingler';
      Localizacao: 'Rotas 4, 6, 11, 12, 13, 17, 18, 24, 25 e Cidade Fuchsia';
      Descricao: 'É achado em muitos lugares do game. Use a Super Rod para pescá-lo e pegá-lo.';
      Movimentos: 'LVL --- Bubble'#13#10'LVL --- Leer'#13#10'LVL 20 Vice Grip'#13#10'LVL 25 Guillotine'#13#10'LVL 30 Stomp'#13#10'LVL 35 Crab Hammer'#13#10'LVL 40 Harden';
      Sprite: '098.gif'; Energia: 2; Ataque: 3; Defesa: 3; Velocidade: 1; Especial: 1),
    ({  98 } Numero: '099'; Nome: 'Kingler'; Tipo: 'Água'; Versao: 'Azul e Vermelha'; Evolucao: 'Não há';
      Localizacao: 'Rota 23, Unknown Dungeon, Ilhas Seafrom (pescando)';
      Descricao: 'É muito maior e mais poderoso do que Krabby. Pegue ele em outros lugares ou evolua-o do Krabby.';
      Movimentos: 'LVL --- Bubble'#13#10'LVL --- Leer'#13#10'LVL --- Vice Grip'#13#10'LVL --- Guillotine'#13#10'LVL 34 Stomp'#13#10'LVL 42 Crab Hammer'#13#10'LVL 49 Harden';
      Sprite: '099.gif'; Energia: 3; Ataque: 4; Defesa: 3; Velocidade: 2; Especial: 1),
    ({  99 } Numero: '100'; Nome: 'Voltorb'; Tipo: 'Elétrico'; Versao: 'Azul e Vermelha'; Evolucao: 'Level 30: Electrode';
      Localizacao: 'Rota 10 e Power Plant';
      Descricao: 'O pokémon nº 100. Ele tem movimentos bons como o Screech e o Explosion.';
      Movimentos: 'LVL --- Tackle'#13#10'LVL --- Screech'#13#10'LVL 22 Self Destruct'#13#10'LVL 29 Light Screen'#13#10'LVL 36 Swift'#13#10'LVL 43 Explosion';
      Sprite: '100.gif'; Energia: 3; Ataque: 1; Defesa: 1; Velocidade: 3; Especial: 1),
    ({ 100 } Numero: '101'; Nome: 'Electrode'; Tipo: 'Elétrico'; Versao: 'Azul e Vermelha'; Evolucao: 'Não há';
      Localizacao: 'Caverna de Cerulean';
      Descricao: 'Evolução do Voltorb. Ele pode atacar muitas vezes antes de um inimigo tocar nele.';
      Movimentos: 'LVL --- Tackle'#13#10'LVL --- Screech'#13#10'LVL --- Self Destruct'#13#10'LVL --- Light Screen'#13#10'LVL 40 Swift'#13#10'LVL 50 Explosion';
      Sprite: '101.gif'; Energia: 4; Ataque: 1; Defesa: 2; Velocidade: 5; Especial: 2),
    ({ 101 } Numero: '102'; Nome: 'Exeggcute'; Tipo: 'Grama / Psíquico'; Versao: 'Azul e Vermelha'; Evolucao: 'Leaf Stone: Exegguntor';
      Localizacao: 'Safari Zone';
      Descricao: 'Pode ser achado somente na Safari Zone. Quando você pega um, pode evoluí-lo com a Leafstone.';
      Movimentos: 'LVL --- Barrage'#13#10'LVL --- Hypnosis'#13#10'LVL 25 Reflect'#13#10'LVL 28 Leech Seed'#13#10'LVL 32 Stun Spore'#13#10'LVL 37 Poison Powder'#13#10'LVL 42 Solar Beam'#13#10'LVL 48 Sleep Powder';
      Sprite: '102.gif'; Energia: 4; Ataque: 1; Defesa: 3; Velocidade: 1; Especial: 1),
    ({ 102 } Numero: '103'; Nome: 'Exeggcutor'; Tipo: 'Grama / Psíquico'; Versao: 'Azul e Vermelha'; Evolucao: 'Não há';
      Localizacao: 'Evolução';
      Descricao: 'Evolução do Exeggcute. Ele é extremamente poderoso.';
      Movimentos: 'LVL --- Barrage'#13#10'LVL --- Hypnosis'#13#10'LVL 25 Reflect'#13#10'LVL 28 Leech Seed';
      Sprite: '103.gif'; Energia: 5; Ataque: 3; Defesa: 3; Velocidade: 2; Especial: 4),
    ({ 103 } Numero: '104'; Nome: 'Cubone'; Tipo: 'Terra'; Versao: 'Azul e Vermelha'; Evolucao: 'Level 28: Marowak';
      Localizacao: 'Pokémon Tower (Cidade de Lavender)';
      Descricao: 'Muito efetivo contra pokémons normais. Não se sai bem contra pokémons voadores.';
      Movimentos: 'LVL --- Bone Club'#13#10'LVL --- Growl'#13#10'LVL 25 Leer'#13#10'LVL 31 Focus Energy'#13#10'LVL 38 Thrash'#13#10'LVL 43 Bonemerang'#13#10'LVL 46 Rage';
      Sprite: '104.gif'; Energia: 3; Ataque: 1; Defesa: 3; Velocidade: 1; Especial: 1),
    ({ 104 } Numero: '105'; Nome: 'Marowak'; Tipo: 'Terra'; Versao: 'Azul e Vermelha'; Evolucao: 'Não há';
      Localizacao: 'Victory Road e Unknown Dungeon';
      Descricao: 'Evolução do Cubone. Ele pode, literalmente, esmagar um oponente.';
      Movimentos: 'LVL --- Bone Club'#13#10'LVL --- Growl'#13#10'LVL --- Leer'#13#10'LVL 33 Focus Energy'#13#10'LVL 41 Thrash'#13#10'LVL 48 Bonemerang'#13#10'LVL 55 Rage';
      Sprite: '105.gif'; Energia: 5; Ataque: 2; Defesa: 5; Velocidade: 1; Especial: 1),
    ({ 105 } Numero: '106'; Nome: 'Hitmonlee'; Tipo: 'Lutador'; Versao: 'Azul e Vermelha'; Evolucao: 'Não há';
      Localizacao: 'Cidade de Saffron';
      Descricao: 'Um dos poucos pokémons lutadores. Ele é um pokémon-chutador.';
      Movimentos: 'LVL --- Double Kick'#13#10'LVL --- Meditate'#13#10'LVL 33 Rolling Kick'#13#10'LVL 38 Jump Kick'#13#10'LVL 43 Focus Energy'#13#10'LVL 48 Hi Jump Kick'#13#10'LVL 53 Mega Kick';
      Sprite: '106.gif'; Energia: 4; Ataque: 4; Defesa: 2; Velocidade: 3; Especial: 1),
    ({ 106 } Numero: '107'; Nome: 'Hitmonchan'; Tipo: 'Lutador'; Versao: 'Azul e Vermelha'; Evolucao: 'Não há';
      Localizacao: 'Cidade de Saffron';
      Descricao: 'Outro pokémon lutador. Só que esse soqueia os adversários.';
      Movimentos: 'LVL --- Comet Punch'#13#10'LVL --- Agility'#13#10'LVL 33 Fire Punch'#13#10'LVL 38 Ice Punch'#13#10'LVL 43 Thunder Punch'#13#10'LVL 48 Mega Punch'#13#10'LVL 53 Counter';
      Sprite: '107.gif'; Energia: 5; Ataque: 4; Defesa: 3; Velocidade: 2; Especial: 1),
    ({ 107 } Numero: '108'; Nome: 'Lickitung'; Tipo: 'Normal'; Versao: 'Azul e Vermelha'; Evolucao: 'Não há';
      Localizacao: 'Rota 18';
      Descricao: 'Achado trocando pelo Slowbro na Route 18. Não muito poderoso. Não é uma boa escolha para o seu time de 6.';
      Movimentos: 'LVL --- Wrap'#13#10'LVL --- Supersonic'#13#10'LVL 07 Stomp'#13#10'LVL 15 Disable'#13#10'LVL 23 Defense Curl'#13#10'LVL 31 Slam'#13#10'LVL 39 Screech';
      Sprite: '108.gif'; Energia: 5; Ataque: 1; Defesa: 2; Velocidade: 1; Especial: 2),
    ({ 108 } Numero: '109'; Nome: 'Koffing'; Tipo: 'Veneno'; Versao: 'Azul e Vermelha'; Evolucao: 'Level 35: Weezing';
      Localizacao: 'Pokémon House (Ilhas Cinnabar)';
      Descricao: 'Koffing é um pokémon gasoso. Achado somente na Cinnabar Islands Mansion.';
      Movimentos: 'LVL --- Tackle'#13#10'LVL --- Smog'#13#10'LVL 32 Sludge'#13#10'LVL 37 Smoke Screen'#13#10'LVL 40 Self Destruct'#13#10'LVL 45 Haze'#13#10'LVL 48 Explosion';
      Sprite: '109.gif'; Energia: 3; Ataque: 1; Defesa: 3; Velocidade: 1; Especial: 1),
    ({ 109 } Numero: '110'; Nome: 'Weezing'; Tipo: 'Veneno'; Versao: 'Azul e Vermelha'; Evolucao: 'Não há';
      Localizacao: 'Pokémon House (Ilhas Cinnabar)';
      Descricao: 'Evolução do Koffing. Outro do tipo "3 em 1". Ele so pode ser achado na Cinnabar Islands Mansion.';
      Movimentos: 'LVL --- Tackle'#13#10'LVL --- Smog'#13#10'LVL --- Sludge'#13#10'LVL 39 Smoke Screen'#13#10'LVL 43 Self Destruct'#13#10'LVL 49 Haze'#13#10'LVL 53 Explosion';
      Sprite: '110.gif'; Energia: 4; Ataque: 3; Defesa: 4; Velocidade: 2; Especial: 3),
    ({ 110 } Numero: '111'; Nome: 'Rhyhorn'; Tipo: 'Terra / Pedra'; Versao: 'Azul e Vermelha'; Evolucao: 'Level 42: Rhydon';
      Localizacao: 'Safari Zone';
      Descricao: 'Achado somente na Safari Zone. Energia e defesa bons.';
      Movimentos: 'LVL --- Horn Attack'#13#10'LVL 30 Stomp'#13#10'LVL 35 Tail Whip'#13#10'LVL 40 Fury Attack'#13#10'LVL 45 Horn Drill'#13#10'LVL 50 Leer'#13#10'LVL 55 Take Down';
      Sprite: '111.gif'; Energia: 5; Ataque: 3; Defesa: 3; Velocidade: 1; Especial: 1),
    ({ 111 } Numero: '112'; Nome: 'Rhydon'; Tipo: 'Terra / Pedra'; Versao: 'Azul e Vermelha'; Evolucao: 'Não há';
      Localizacao: 'Unknown Dungeon';
      Descricao: 'Evolução do Rhyhorn. Tem vários movimentos como Leer e o Take Down.';
      Movimentos: 'LVL --- Horn Attack'#13#10'LVL --- Stomp'#13#10'LVL --- Tail Whip'#13#10'LVL --- Fury Attack'#13#10'LVL 48 Horn Drill'#13#10'LVL 55 Leer'#13#10'LVL 64 Take Down';
      Sprite: '112.gif'; Energia: 5; Ataque: 4; Defesa: 3; Velocidade: 1; Especial: 1),
    ({ 112 } Numero: '113'; Nome: 'Chansey'; Tipo: 'Normal'; Versao: 'Azul e Vermelha'; Evolucao: 'Não há';
      Localizacao: 'Safari Zone e Unknown Dungeon';
      Descricao: 'Um pokémon muito fraco. Um pokémon horrível >:o/';
      Movimentos: 'LVL --- Pound'#13#10'LVL --- Doubleslap'#13#10'LVL 24 Sing'#13#10'LVL 30 Growl'#13#10'LVL 38 Minimize'#13#10'LVL 44 Defense Curl'#13#10'LVL 48 Light Screen'#13#10'LVL 54 Double Edge';
      Sprite: '113.gif'; Energia: 5; Ataque: 1; Defesa: 1; Velocidade: 1; Especial: 4),
    ({ 113 } Numero: '114'; Nome: 'Tangela'; Tipo: 'Grama'; Versao: 'Azul e Vermelha'; Evolucao: 'Não há';
      Localizacao: 'Rota 21';
      Descricao: 'Muitas pessoas dizem que sua pele parace espaguete. Ele não é forte, mas, sua defesa é excelente.';
      Movimentos: 'LVL --- Constrict'#13#10'LVL --- Bind'#13#10'LVL 29 Absorb'#13#10'LVL 32 Poison Powder'#13#10'LVL 36 Stun Spore'#13#10'LVL 39 Sleep Powder'#13#10'LVL 45 Slam'#13#10'LVL 49 Growth';
      Sprite: '114.gif'; Energia: 4; Ataque: 1; Defesa: 4; Velocidade: 1; Especial: 3),
    ({ 114 } Numero: '115'; Nome: 'Kangaskhan'; Tipo: 'Normal'; Versao: 'Azul e Vermelha'; Evolucao: 'Não há';
      Localizacao: 'Safari Zone';
      Descricao: 'Um favorito para muitos. Achado somente na Safari Zone, difícil de achar e de pegar.';
      Movimentos: 'LVL --- Comet Punch'#13#10'LVL --- Rage'#13#10'LVL 26 Bite'#13#10'LVL 31 Tail Whip'#13#10'LVL 36 Mega Punch'#13#10'LVL 41 Leer'#13#10'LVL 46 Dizzy Punch';
      Sprite: '115.gif'; Energia: 5; Ataque: 3; Defesa: 3; Velocidade: 3; Especial: 1),
    ({ 115 } Numero: '116'; Nome: 'Horsea'; Tipo: 'Água'; Versao: 'Azul e Vermelha'; Evolucao: 'Level 32: Seadra';
      Localizacao: 'Ilha Cinnabar, Rotas 19, 20, 21 e Ilhas Seafrom (pescando)';
      Descricao: 'Um pequeno pokémon da água. Muito comum nos lagos do sul, como o Seafoam Islands e Cinnabar Islands.';
      Movimentos: 'LVL --- Bubble'#13#10'LVL 19 Smoke Screen'#13#10'LVL 24 Leer'#13#10'LVL 30 Water Gun'#13#10'LVL 37 Agility'#13#10'LVL 45 Hydro Pump';
      Sprite: '116.gif'; Energia: 2; Ataque: 1; Defesa: 2; Velocidade: 1; Especial: 3),
    ({ 116 } Numero: '117'; Nome: 'Seadra'; Tipo: 'Água'; Versao: 'Azul e Vermelha'; Evolucao: 'Não há';
      Localizacao: 'Unknown Dungeon, Rota 23 e Ilhas Seafrom (pescando)';
      Descricao: 'Um pokémon muito efetivo para quase todos os tipos de pokémons. Seus atributos são todos bons.';
      Movimentos: 'LVL --- Bubble'#13#10'LVL --- Smoke Screen'#13#10'LVL --- Leer'#13#10'LVL --- Water Gun'#13#10'LVL 41 Agility'#13#10'LVL 52 Hydro Pump';
      Sprite: '117.gif'; Energia: 3; Ataque: 3; Defesa: 3; Velocidade: 3; Especial: 3),
    ({ 117 } Numero: '118'; Nome: 'Goldeen'; Tipo: 'Água'; Versao: 'Azul e Vermelha'; Evolucao: 'Level 33: Seaking';
      Localizacao: 'Rotas 4, 12, 13, 17, 18, 19, 20, 21, 22, 24, 25, Cidade de Cerulean';
      Descricao: 'Use a Super Rod para pescá-lo e achá-lo. Evolui no level 33 para Seaking.';
      Movimentos: 'LVL --- Peck'#13#10'LVL --- Tail Whip'#13#10'LVL 19 Super Sonic'#13#10'LVL 24 Horn Attack'#13#10'LVL 30 Fury Attack'#13#10'LVL 37 Waterfall'#13#10'LVL 45 Horn Drill'#13#10'LVL 54 Agility';
      Sprite: '118.gif'; Energia: 2; Ataque: 2; Defesa: 2; Velocidade: 2; Especial: 1),
    ({ 118 } Numero: '119'; Nome: 'Seaking'; Tipo: 'Água'; Versao: 'Azul e Vermelha'; Evolucao: 'Não há';
      Localizacao: 'Cidade de Fuchsia, Rota 23 e Unknown Dungeon (pescando)';
      Descricao: 'Evolução do Goldeen. Seus muitos ataques são bons.';
      Movimentos: 'LVL --- Peck'#13#10'LVL --- Tail Whip'#13#10'LVL --- Super Sonic'#13#10'LVL --- Horn Attack'#13#10'LVL --- Fury Attack'#13#10'LVL 39 Waterfall'#13#10'LVL 48 Horn Drill'#13#10'LVL 54 Agility';
      Sprite: '119.gif'; Energia: 5; Ataque: 3; Defesa: 2; Velocidade: 2; Especial: 2),
    ({ 119 } Numero: '120'; Nome: 'Staryu'; Tipo: 'Água'; Versao: 'Azul e Vermelha'; Evolucao: 'Water Stone: Starmie';
      Localizacao: 'Rotas 19, 20, 21, Ilhas Seafrom e Ilha Cinnabar (pescando)';
      Descricao: 'Achado nos oceanos do sul. Use a Waterstone para evoluí-lo.';
      Movimentos: 'LVL --- Tackle'#13#10'LVL --- Water Gun'#13#10'LVL --- Harden'#13#10'LVL --- Recover'#13#10'LVL --- Swift'#13#10'LVL 39 Minimize'#13#10'LVL 48 Light Screen'#13#10'LVL 54 Hydro Pump';
      Sprite: '120.gif'; Energia: 2; Ataque: 1; Defesa: 2; Velocidade: 3; Especial: 2),
    ({ 120 } Numero: '121'; Nome: 'Starmie'; Tipo: 'Água / Psíquico'; Versao: 'Azul e Vermelha'; Evolucao: 'Não há';
      Localizacao: 'Evolução';
      Descricao: 'Conseguido somente usando a Waterstone em Staryu. Relativamente poderoso e efetivo.';
      Movimentos: 'LVL --- Tackle'#13#10'LVL --- Water Gun'#13#10'LVL --- Harden';
      Sprite: '121.gif'; Energia: 3; Ataque: 2; Defesa: 3; Velocidade: 4; Especial: 3),
    ({ 121 } Numero: '122'; Nome: 'Mr.Mime'; Tipo: 'Psíquico'; Versao: 'Azul e Vermelha'; Evolucao: 'Não há';
      Localizacao: 'Rota 2';
      Descricao: 'Você pode pegar um Mr. Mime trocando um Abra com outra pessoa no game. Ele é muito amigável.';
      Movimentos: 'LVL --- Confusion'#13#10'LVL --- Barrier'#13#10'LVL 23 Light Screen'#13#10'LVL 31 Doubleslap'#13#10'LVL 39 Meditate'#13#10'LVL 47 Substitute';
      Sprite: '122.gif'; Energia: 3; Ataque: 1; Defesa: 2; Velocidade: 3; Especial: 3),
    ({ 122 } Numero: '123'; Nome: 'Scyther'; Tipo: 'Inseto / Voador'; Versao: 'Azul e Vermelha'; Evolucao: 'Não há';
      Localizacao: 'Safari Zone e Coin Exchange (Cidade de Celadon)';
      Descricao: 'Um pokémon muito poderoso. Dá para notar pelos atributos. Somente na versão vermelha ele é encontrado. Pode ser trocado por moedas na Game Room ou achado na Safari Zone.';
      Movimentos: 'LVL --- Quick Attack'#13#10'LVL 17 Leer'#13#10'LVL 20 Focus Energy'#13#10'LVL 24 Double Team'#13#10'LVL 29 Slash'#13#10'LVL 35 Swords Dance'#13#10'LVL 42 Agility';
      Sprite: '123.gif'; Energia: 4; Ataque: 4; Defesa: 3; Velocidade: 4; Especial: 1),
    ({ 123 } Numero: '124'; Nome: 'Jynx'; Tipo: 'Gelo / Psíquico'; Versao: 'Azul e Vermelha'; Evolucao: 'Não há';
      Localizacao: 'Cidade de Cerulean';
      Descricao: 'Muitas pessoas não gostam desse pokémon por causa de sua feiura. Porém, ele tem vários movimentos como o Blizzard. Ele aprende outros também como o Psychic. Pegue-o na Cerulean City trocando um Poliwh'+'irl.';
      Movimentos: 'LVL --- Pound'#13#10'LVL --- Lovely Kiss'#13#10'LVL 15 Sing'#13#10'LVL 23 Doubleslap'#13#10'LVL 31 Ice Punch'#13#10'LVL 39 Meditate';
      Sprite: '124.gif'; Energia: 4; Ataque: 1; Defesa: 1; Velocidade: 3; Especial: 3),
    ({ 124 } Numero: '125'; Nome: 'Electabuzz'; Tipo: 'Elétrico'; Versao: 'Vermelha (Somente)'; Evolucao: 'Não há';
      Localizacao: 'Power Plant';
      Descricao: 'Um pokémon muito raro e formidável. Achado somente na Powerplant da versão vermelha do game.';
      Movimentos: 'LVL --- Quick Attack'#13#10'LVL 17 Leer'#13#10'LVL 20 Thundershock'#13#10'LVL 24 Screech'#13#10'LVL 29 Thunderpunch'#13#10'LVL 35 Light Screen'#13#10'LVL 42 Thunder';
      Sprite: '125.gif'; Energia: 4; Ataque: 3; Defesa: 1; Velocidade: 3; Especial: 3),
    ({ 125 } Numero: '126'; Nome: 'Magmar'; Tipo: 'Fogo'; Versao: 'Azul (Somente)'; Evolucao: 'Não há';
      Localizacao: 'Pokémon House (Ilha Cinnabar)';
      Descricao: 'Muito difícil de achar e difissílimo de pegar. Ele é muito poderoso.';
      Movimentos: 'LVL --- Ember'#13#10'LVL 36 Leer'#13#10'LVL 39 Confuse Ray'#13#10'LVL 43 Fire Punch'#13#10'LVL 48 Smoke Screen'#13#10'LVL 52 Smog'#13#10'LVL 55 Flamethrower';
      Sprite: '126.gif'; Energia: 3; Ataque: 1; Defesa: 2; Velocidade: 3; Especial: 3),
    ({ 126 } Numero: '127'; Nome: 'Pinsir'; Tipo: 'Inseto'; Versao: 'Azul (Somente)'; Evolucao: 'Não há';
      Localizacao: 'Safari Zone, Coin Exchange (Cidade de Celadon)';
      Descricao: 'Achado somente na Safari Zone da versão azul do game ou trocando moedas na Game Room - Exchange Corner.';
      Movimentos: 'LVL --- Vicegrip'#13#10'LVL 25 Seismic Toss'#13#10'LVL 30 Guillotine'#13#10'LVL 36 Focus Energy'#13#10'LVL 43 Harden'#13#10'LVL 49 Slash'#13#10'LVL 54 Swords Dance';
      Sprite: '127.gif'; Energia: 4; Ataque: 4; Defesa: 3; Velocidade: 3; Especial: 1),
    ({ 127 } Numero: '128'; Nome: 'Tauros'; Tipo: 'Normal'; Versao: 'Azul e Vermelha'; Evolucao: 'Não há';
      Localizacao: 'Safari Zone';
      Descricao: 'Este pokémon-touro é muito difícil de achar na Safari Zone e mais difícil ainda de pegar. Ele é poderoso o bastante para agüentar uma pokébola de ínicio. Pegue um para o seu time.';
      Movimentos: 'LVL --- Tackle'#13#10'LVL 21 Stomp'#13#10'LVL 28 Tail Whip'#13#10'LVL 35 Leer'#13#10'LVL 44 Rage'#13#10'LVL 51 Take Down';
      Sprite: '128.gif'; Energia: 5; Ataque: 3; Defesa: 3; Velocidade: 4; Especial: 2),
    ({ 128 } Numero: '129'; Nome: 'Magikarp'; Tipo: 'Água'; Versao: 'Azul e Vermelha'; Evolucao: 'Level 20: Gyarados';
      Localizacao: 'Rotas 12, 13, 17, 18 e Cidade de Fuchsia (pescando)';
      Descricao: 'Fraquíssimo pokémon. Suas técnicas são horríveis. Porém, no level 20 ele se transformará no temido Gyarados.';
      Movimentos: 'LVL --- Splash'#13#10'LVL 15 Tackle';
      Sprite: '129.gif'; Energia: 2; Ataque: 1; Defesa: 1; Velocidade: 2; Especial: 1),
    ({ 129 } Numero: '130'; Nome: 'Gyarados'; Tipo: 'Água / Voador'; Versao: 'Azul e Vermelha'; Evolucao: 'Não há';
      Localizacao: 'Evolução';
      Descricao: 'Um pokémon muito popular e procurado. Um dos poucos dragões raros do game. Movimentos devastadores com Hydro Pump e Hyper Beam. Ótimo pokémon.';
      Movimentos: 'LVL 20 Bite'#13#10'LVL 25 Dragon Rage'#13#10'LVL 32 Leer'#13#10'LVL 41 Hydro Pump'#13#10'LVL 52 Hyper Beam';
      Sprite: '130.gif'; Energia: 5; Ataque: 4; Defesa: 2; Velocidade: 3; Especial: 4),
    ({ 130 } Numero: '131'; Nome: 'Lapras'; Tipo: 'Água / Gelo'; Versao: 'Azul e Vermelha'; Evolucao: 'Não há';
      Localizacao: 'Cidade de Saffron';
      Descricao: 'Pokémon conhecido como "o cavalo-marinho". Além de muito útil, ele é poderoso e pode atravessar a água com seu movimento Surf. É indispensável ter um destes no time.';
      Movimentos: 'LVL --- Water Gun'#13#10'LVL --- Growl'#13#10'LVL 16 Sing'#13#10'LVL 20 Mist'#13#10'LVL 25 Body Slam'#13#10'LVL 31 Confuse Ray'#13#10'LVL 38 Ice Beam'#13#10'LVL 46 Hydro Pump';
      Sprite: '131.gif'; Energia: 5; Ataque: 3; Defesa: 3; Velocidade: 1; Especial: 3),
    ({ 131 } Numero: '132'; Nome: 'Ditto'; Tipo: 'Normal'; Versao: 'Azul e Vermelha'; Evolucao: 'Não há';
      Localizacao: 'Rotas 13, 14, 15, 23 e Unknown Dungeon';
      Descricao: 'Um pokémon muito especial. Sua única técnica, o Transform, faz ele virar qualquer pokémon (que ele esteja batalhando).';
      Movimentos: 'LVL --- Transform';
      Sprite: '132.gif'; Energia: 3; Ataque: 1; Defesa: 1; Velocidade: 1; Especial: 1),
    ({ 132 } Numero: '133'; Nome: 'Eevee'; Tipo: 'Normal'; Versao: 'Azul e Vermelha'; Evolucao: 'ThunderStone: Jolteon / WaterStone: Vaporeon / FireStone: Flareon';
      Localizacao: 'Mansão Celadon (Cidade de Celadon)';
      Descricao: 'O único pokémon que pode evoluir em três pokémons diferentes. Com a Waterstone ele vira o Vaporeon. Com a Thunderstone, ele virá o Jolteon. E, com a Firestone, ele vira o Flareon.';
      Movimentos: 'LVL --- Tackle'#13#10'LVL --- Sand-Attack'#13#10'LVL 27 Quick Attack'#13#10'LVL 31 Tail Whip'#13#10'LVL 37 Bite'#13#10'LVL 45 Take Down';
      Sprite: '133.gif'; Energia: 4; Ataque: 1; Defesa: 1; Velocidade: 1; Especial: 2),
    ({ 133 } Numero: '134'; Nome: 'Vaporeon'; Tipo: 'Água'; Versao: 'Azul e Vermelha'; Evolucao: 'Não há';
      Localizacao: 'Evolução';
      Descricao: 'Evoluído do Eevee com a Waterstone. É poderoso além de ágil. Seus movimentos incluem Mist e o Hydro Pump.';
      Movimentos: 'LVL --- Tackle'#13#10'LVL --- Sand-Attack'#13#10'LVL 27 Quick Attack'#13#10'LVL 31 Water Gun'#13#10'LVL 37 Tail Whip'#13#10'LVL 40 Bite'#13#10'LVL 42 Acid Armor'#13#10'LVL 44 Haze'#13#10'LVL 48 Mist'#13#10'LVL 54 Hydro Pump';
      Sprite: '134.gif'; Energia: 5; Ataque: 2; Defesa: 2; Velocidade: 3; Especial: 4),
    ({ 134 } Numero: '135'; Nome: 'Jolteon'; Tipo: 'Elétrico'; Versao: 'Azul e Vermelha'; Evolucao: 'Não há';
      Localizacao: 'Evolução';
      Descricao: 'Evoluído do Eevee com a Thunderstone. Ele é muito poderoso além de ágil. Seus movimentos incluem Pin Missile e Thunder.';
      Movimentos: 'LVL --- Tackle'#13#10'LVL --- Sand-Attack'#13#10'LVL 27 Quick Attack'#13#10'LVL 31 Thundershock'#13#10'LVL 37 Tail Whip'#13#10'LVL 40 Thunderwave'#13#10'LVL 42 Double Kick'#13#10'LVL 44 Agility'#13#10'LVL 48 Pin Missile'#13#10'LVL 54 Thunder';
      Sprite: '135.gif'; Energia: 4; Ataque: 2; Defesa: 2; Velocidade: 4; Especial: 3),
    ({ 135 } Numero: '136'; Nome: 'Flareon'; Tipo: 'Fogo'; Versao: 'Azul e Vermelha'; Evolucao: 'Não há';
      Localizacao: 'Evolução';
      Descricao: 'Evoluído do Eevee com a Firestone. Muito poderoso mas, lento. Seus movimentos incluem Fire Spin e Flame Thrower.';
      Movimentos: 'LVL --- Tackle'#13#10'LVL --- Sand-Attack'#13#10'LVL 27 Quick Attack'#13#10'LVL 31 Ember'#13#10'LVL 37 Tail Whip'#13#10'LVL 40 Bite'#13#10'LVL 42 Leer'#13#10'LVL 44 Fire Spin'#13#10'LVL 48 Rage'#13#10'LVL 54 Flame Thrower';
      Sprite: '136.gif'; Energia: 4; Ataque: 3; Defesa: 1; Velocidade: 2; Especial: 3),
    ({ 136 } Numero: '137'; Nome: 'Porygon'; Tipo: 'Normal'; Versao: 'Azul e Vermelha'; Evolucao: 'Não há';
      Localizacao: 'Coin Exchange (Cidade de Celadon)';
      Descricao: 'Extremamente raro. Você pode conseguí-lo trocando por moedas no Game Room no Exchange Corner.';
      Movimentos: 'LVL --- Tackle'#13#10'LVL --- Sharpen'#13#10'LVL --- Conversion'#13#10'LVL 23 Psybeam'#13#10'LVL 28 Harden'#13#10'LVL 35 Agility'#13#10'LVL 42 Tri Attack';
      Sprite: '137.gif'; Energia: 4; Ataque: 2; Defesa: 2; Velocidade: 1; Especial: 3),
    ({ 137 } Numero: '138'; Nome: 'Omanyte'; Tipo: 'Pedra / Água'; Versao: 'Azul e Vermelha'; Evolucao: 'Level 40: Omastar';
      Localizacao: 'Helix Fossil (Montanha da Lua)';
      Descricao: 'Um pokémon extinto ressucitado do Helix Fossil. Evolui no level 40 para Omastar.';
      Movimentos: 'LVL --- Water Gun'#13#10'LVL --- Withdraw'#13#10'LVL 34 Horn Attack'#13#10'LVL 39 Leer'#13#10'LVL 44 Spike Cannon'#13#10'LVL 49 Hydro Pump';
      Sprite: '138.gif'; Energia: 3; Ataque: 1; Defesa: 3; Velocidade: 1; Especial: 3),
    ({ 138 } Numero: '139'; Nome: 'Omastar'; Tipo: 'Pedra / Água'; Versao: 'Azul e Vermelha'; Evolucao: 'Não há';
      Localizacao: 'Evolução';
      Descricao: 'Usa ataques de água poderosos. Ataques como Hydro Pump e Spike Cannon fazem deste pokémon uma boa escolha.';
      Movimentos: 'LVL --- Water Gun'#13#10'LVL --- Withdraw'#13#10'LVL --- Horn Attack'#13#10'LVL --- Leer'#13#10'LVL 46 Spike Cannon'#13#10'LVL 53 Hydro Pump';
      Sprite: '139.gif'; Energia: 4; Ataque: 2; Defesa: 4; Velocidade: 1; Especial: 3),
    ({ 139 } Numero: '140'; Nome: 'Kabuto'; Tipo: 'Pedra / Água'; Versao: 'Azul e Vermelha'; Evolucao: 'Level 40: Kabutops';
      Localizacao: 'Dome Fossil (Montanha da Lua)';
      Descricao: 'Um pokémon extinto ressucitado do Dome Fossil. Evolui no level 40 para Kabutops.';
      Movimentos: 'LVL --- Scratch'#13#10'LVL --- Harden'#13#10'LVL 34 Absorb'#13#10'LVL 39 Slash'#13#10'LVL 46 Leer'#13#10'LVL 53 Hydro Pump';
      Sprite: '140.gif'; Energia: 3; Ataque: 3; Defesa: 3; Velocidade: 2; Especial: 1),
    ({ 140 } Numero: '141'; Nome: 'Kabutops'; Tipo: 'Pedra / Água'; Versao: 'Azul e Vermelha'; Evolucao: 'Não há';
      Localizacao: 'Evolução';
      Descricao: 'Usa ataques da água poderosos. Ataques com o Hydro Pump fazem deste uma ótima escolha para o tipo da rocha ou da água.';
      Movimentos: 'LVL --- Scratch'#13#10'LVL --- Harden'#13#10'LVL --- Absorb'#13#10'LVL --- Slash'#13#10'LVL 46 Leer'#13#10'LVL 53 Hydro Pump';
      Sprite: '141.gif'; Energia: 4; Ataque: 4; Defesa: 4; Velocidade: 3; Especial: 1),
    ({ 141 } Numero: '142'; Nome: 'Aerodactyl'; Tipo: 'Pedra / Água'; Versao: 'Azul e Vermelha'; Evolucao: 'Não há';
      Localizacao: 'Old Lamber (Cidade de Pewter)';
      Descricao: 'O pokémon mais extinto dos três (Kabuto, Omanyte e Aerodactyl) ressucitado do Old Amber. Seus ataques como o Hyper Beam são devastadores.';
      Movimentos: 'LVL --- Wing Attack'#13#10'LVL --- Agility'#13#10'LVL 33 Supersonic'#13#10'LVL 38 Bite'#13#10'LVL 45 Take Down'#13#10'LVL 54 Hyper Beam';
      Sprite: '142.gif'; Energia: 5; Ataque: 4; Defesa: 2; Velocidade: 3; Especial: 2),
    ({ 142 } Numero: '143'; Nome: 'Snorlax'; Tipo: 'Normal'; Versao: 'Azul e Vermelha'; Evolucao: 'Não há';
      Localizacao: 'Rotas 12 e 16';
      Descricao: 'O pokémon mais "gordo" de todos. Ele está sempre dormindo. Só aparece duas vezes no game. É preciso uma Pokéflute para acordá-lo.';
      Movimentos: 'LVL --- Headbutt'#13#10'LVL --- Amnesia'#13#10'LVL --- Rest'#13#10'LVL 35 Body Slam'#13#10'LVL 41 Harden'#13#10'LVL 48 Double-Edge'#13#10'LVL 56 Hyper Beam';
      Sprite: '143.gif'; Energia: 5; Ataque: 3; Defesa: 2; Velocidade: 1; Especial: 1),
    ({ 143 } Numero: '144'; Nome: 'Articuno'; Tipo: 'Gelo / Voador'; Versao: 'Azul e Vermelha'; Evolucao: 'Não há';
      Localizacao: 'Ilhas Seafrom';
      Descricao: 'Um dos três pokémons legendários. Achado na Seafoam Islands. Se quiser pegá-lo, arme-se com uma Ultra-Ball ou uma Master-Ball.';
      Movimentos: 'LVL --- Peck'#13#10'LVL --- Ice Beam'#13#10'LVL 51 Blizzard'#13#10'LVL 55 Agility'#13#10'LVL 60 Mist';
      Sprite: '144.gif'; Energia: 5; Ataque: 2; Defesa: 3; Velocidade: 3; Especial: 4),
    ({ 144 } Numero: '145'; Nome: 'Zapdos'; Tipo: 'Elétrico / Voador'; Versao: 'Azul e Vermelha'; Evolucao: 'Não há';
      Localizacao: 'Power Plant';
      Descricao: 'O segundo dos três pokémons legendários. Achado na Powerplant. Se quiser pegá-lo, arme-se com uma Ultra-Ball ou uma Master-Ball.';
      Movimentos: 'LVL --- Thundershock'#13#10'LVL --- Drill Peck'#13#10'LVL 51 Thunder'#13#10'LVL 55 Agility'#13#10'VL 60 Light Screen';
      Sprite: '145.gif'; Energia: 5; Ataque: 3; Defesa: 3; Velocidade: 3; Especial: 5),
    ({ 145 } Numero: '146'; Nome: 'Moltres'; Tipo: 'Fogo / Voador'; Versao: 'Azul e Vermelha'; Evolucao: 'Não há';
      Localizacao: 'Victory Road';
      Descricao: 'O último dos três pokémons legendários. Achado na Victory Road. Se quiser pegá-lo, arme-se com uma Ultra-Ball ou uma Master-Ball.';
      Movimentos: 'LVL --- Peck'#13#10'LVL --- Fire Spin'#13#10'LVL 51 Leer'#13#10'LVL 55 Agility'#13#10'LVL 60 Sky Attack';
      Sprite: '146.gif'; Energia: 5; Ataque: 4; Defesa: 3; Velocidade: 3; Especial: 5),
    ({ 146 } Numero: '147'; Nome: 'Dratini'; Tipo: 'Dragão'; Versao: 'Azul e Vermelha'; Evolucao: 'Level 30: Dragonaire / Level 55: Dragonite';
      Localizacao: 'Safari Zone (pescando) e Coin Exchange (Cidade de Celadon)';
      Descricao: 'Um pokémon místico muito raro. Pode ser achado na Safari Zone.';
      Movimentos: 'LVL --- Wrap'#13#10'LVL --- Leer'#13#10'LVL 10 Thunder Wave'#13#10'LVL 20 Agility'#13#10'LVL 30 Slam'#13#10'LVL 40 Dragon Rage'#13#10'LVL 50 Hyper Beam';
      Sprite: '147.gif'; Energia: 3; Ataque: 2; Defesa: 1; Velocidade: 1; Especial: 2),
    ({ 147 } Numero: '148'; Nome: 'Dragonair'; Tipo: 'Dragão'; Versao: 'Azul e Vermelha'; Evolucao: 'Level 55: Dragonite';
      Localizacao: 'Evolução';
      Descricao: 'Primeira evolução do Dratini. Místico e muito raro. Ele evolui no level 55 para Dragonite.';
      Movimentos: 'LVL --- Wrap'#13#10'LVL --- Leer'#13#10'LVL --- Thunder Wave'#13#10'LVL --- Agility'#13#10'LVL 35 Slam'#13#10'LVL 45 Dragon Rage'#13#10'LVL 55 Hyper Beam';
      Sprite: '148.gif'; Energia: 4; Ataque: 2; Defesa: 1; Velocidade: 2; Especial: 2),
    ({ 148 } Numero: '149'; Nome: 'Dragonite'; Tipo: 'Dragão'; Versao: 'Azul e Vermelha'; Evolucao: 'Não há';
      Localizacao: 'Evolução';
      Descricao: 'O pokémon mais raro do game. Ele é muito poderoso. Seus ataques deixam o inimigo no chão.';
      Movimentos: 'LVL --- Wrap'#13#10'LVL --- Leer'#13#10'LVL --- Thunder Wave'#13#10'LVL --- Agility'#13#10'LVL --- Slam'#13#10'LVL --- Dragon Rage'#13#10'LVL 60 Hyper Beam';
      Sprite: '149.gif'; Energia: 5; Ataque: 5; Defesa: 3; Velocidade: 3; Especial: 3),
    ({ 149 } Numero: '150'; Nome: 'Mewtwo'; Tipo: 'Psíquico'; Versao: 'Azul e Vermelha'; Evolucao: 'Não há';
      Localizacao: 'Unknown Dungeon';
      Descricao: 'O melhor pokémon do game (com excessão do Mew, mas ele (Mew) não está no game).';
      Movimentos: 'LVL --- Confusion'#13#10'LVL --- Disable'#13#10'LVL --- Swift'#13#10'LVL 63 Barrier'#13#10'LVL 66 Psychic'#13#10'LVL 70 Recover'#13#10'LVL 75 Mist'#13#10'LVL 81 Amnesia';
      Sprite: '150.gif'; Energia: 5; Ataque: 4; Defesa: 4; Velocidade: 5; Especial: 5),
    ({ 150 } Numero: '000'; Nome: 'Missingno'; Tipo: 'Normal / Voador'; Versao: 'Azul e Vermelha'; Evolucao: 'Não há';
      Localizacao: '??????¿¿¿¿¿¿';
      Descricao: 'Missingno é talvez, um pokémon real. É provável que Missingno seja um bug do jogo.'#13#10'Alguns dizem ter pego este pokémon, outros dizem que este pokémon não existe, é uma lenda.';
      Movimentos: 'LVL --- Water Gun'#13#10'LVL --- Sky Attack'#13#10'LVL 30 Metronome'#13#10'LVL 40 Psychic';
      Sprite: '000.gif'; Energia: 3; Ataque: 5; Defesa: 1; Velocidade: 3; Especial: 2),
    ({ 151 } Numero: '151'; Nome: 'Mew'; Tipo: 'Psíquico'; Versao: 'Azul e Vermelha'; Evolucao: 'Não há';
      Localizacao: '??????¿¿¿¿¿¿';
      Descricao: 'O melhor pokémon existente. Ele não está no game mas pode ser conseguido somente com o uso do Gameshark. Coloque o código 0115D8CF e tente lutar no gramado, aparecerá uma imagem retorcida, é o Mew.'#13#10'Pegue-o com a Master-Ball. Pronto, você tem o melhor pokémon do game.';
      Movimentos: 'LVL 10 Transform'#13#10'LVL 20 Mega Punch'#13#10'LVL 30 Metronome'#13#10'LVL 40 Psychic';
      Sprite: '151.gif'; Energia: 5; Ataque: 5; Defesa: 5; Velocidade: 5; Especial: 5),
    ({ 152 } Numero: ''; Nome: 'Ash'; Tipo: ''; Versao: ''; Evolucao: '';
      Localizacao: '';
      Descricao: '';
      Movimentos: '';
      Sprite: 'ash.gif'; Energia: 0; Ataque: 0; Defesa: 0; Velocidade: 0; Especial: 0),
    ({ 153 } Numero: ''; Nome: 'Brock'; Tipo: ''; Versao: ''; Evolucao: '';
      Localizacao: '';
      Descricao: '';
      Movimentos: '';
      Sprite: 'brock.gif'; Energia: 0; Ataque: 0; Defesa: 0; Velocidade: 0; Especial: 0),
    ({ 154 } Numero: ''; Nome: 'Misty'; Tipo: ''; Versao: ''; Evolucao: '';
      Localizacao: '';
      Descricao: '';
      Movimentos: '';
      Sprite: 'Misty.gif'; Energia: 0; Ataque: 0; Defesa: 0; Velocidade: 0; Especial: 0),
    ({ 155 } Numero: ''; Nome: 'Professor Oak'; Tipo: ''; Versao: ''; Evolucao: '';
      Localizacao: '';
      Descricao: '';
      Movimentos: '';
      Sprite: 'oak.gif'; Energia: 0; Ataque: 0; Defesa: 0; Velocidade: 0; Especial: 0),
    ({ 156 } Numero: ''; Nome: 'Team Rocket'; Tipo: ''; Versao: ''; Evolucao: '';
      Localizacao: '';
      Descricao: '';
      Movimentos: '';
      Sprite: 'team.gif'; Energia: 0; Ataque: 0; Defesa: 0; Velocidade: 0; Especial: 0),
    ({ 157 } Numero: ''; Nome: 'Gary'; Tipo: ''; Versao: ''; Evolucao: '';
      Localizacao: '';
      Descricao: '';
      Movimentos: '';
      Sprite: 'gary.gif'; Energia: 0; Ataque: 0; Defesa: 0; Velocidade: 0; Especial: 0)
  );
