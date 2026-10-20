// TAPKG.ListBox1Click @ 004b9df4  body=79173 bytes

void TAPKG_ListBox1Click(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  
  if (*(char *)((int)Self->Imprimir1 + 0x2d) == '\0') {
    TMenuItem_SetEnabled(Self->Imprimir1,1);
    param_3 = extraout_ECX;
    param_2 = extraout_EDX;
  }
  if (*(char *)(Self->Ligado + 0x2c) == '\x01') {
    TRxGIFAnimator_SetAnimate
              (Self->i1,CONCAT31((int3)((uint)param_2 >> 8),1),param_3);
    param_3 = extraout_ECX_00;
    param_2 = extraout_EDX_00;
  }
  if (*(char *)(Self->Ligado + 0x2c) == '\x01') {
    TRxGIFAnimator_SetAnimate
              (Self->i2,CONCAT31((int3)((uint)param_2 >> 8),1),param_3);
    param_3 = extraout_ECX_01;
    param_2 = extraout_EDX_01;
  }
  if (*(char *)(Self->Ligado + 0x2c) == '\x01') {
    TRxGIFAnimator_SetAnimate
              (Self->i3,CONCAT31((int3)((uint)param_2 >> 8),1),param_3);
    param_3 = extraout_ECX_02;
    param_2 = extraout_EDX_02;
  }
  if (*(char *)(Self->Ligado + 0x2c) == '\x01') {
    TRxGIFAnimator_SetAnimate
              (Self->i4,CONCAT31((int3)((uint)param_2 >> 8),1),param_3);
    param_3 = extraout_ECX_03;
    param_2 = extraout_EDX_03;
  }
  if (*(char *)(Self->Ligado + 0x2c) == '\x01') {
    TRxGIFAnimator_SetAnimate
              (Self->i5,CONCAT31((int3)((uint)param_2 >> 8),1),param_3);
  }
  piVar1 = *(int **)(Self->animator + 0x13c);
  (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\001.gif");
  piVar1 = *(int **)(Self->Memo1 + 0x204);
  (**(code **)(*piVar1 + 0x2c))(piVar1,0);
  TControl_SetText(Self->Edit2,(uint *)0x0);
  TControl_SetText(Self->Edit3,(uint *)0x0);
  TControl_SetText(Self->Edit4,"Azul e Vermelha");
  TControl_SetText(Self->Edit5,"Level 16: Ivysaur / Level 32: Venusaur");
  TControl_SetText(Self->Edit6,"Laboratório do Professor Carvalho (Cidade de Pallet)");
  piVar1 = *(int **)(Self->movi + 0x204);
  (**(code **)(*piVar1 + 0x2c))(piVar1,0);
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0) {
    TControl_SetText(Self->Edit7,"001");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\001.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"O Bulbasaur é um pokémon forte contra pokémons de rocha e água. Sua evolução final é o Venusaur. É o primeiro dos 150 pokémons.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0) {
    TControl_SetText(Self->Edit2,"Bulbasaur");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0) {
    TControl_SetText(Self->Edit3,"Grama / Veneno");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0) {
    TControl_SetText(Self->Edit5,"Level 16: Ivysaur / Level 32: Venusaur");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0) {
    TControl_SetText(Self->Edit6,"Laboratório do Professor Carvalho (Cidade de Pallet)");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Tackle\rLVL --- Growl\rLVL 07 Leech Seed\rLVL 13 Vine Whip\rLVL 20 Poison Powder\rLVL 27 Razor Leaf\rLVL 34 Growth\rLVL 41 Sleep Powder\rLVL 48 Solar Beam\r");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 1) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 1) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 1) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 1) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 1) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 1) {
    TControl_SetText(Self->Edit7,"002");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 1) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"O Ivysaur é a primeira evolução do Bulbasaur. Evolui para Venusaur no level 32. Forte contra pokémons de rocha e água.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 1) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\002.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 1) {
    TControl_SetText(Self->Edit2,"Ivysaur");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 1) {
    TControl_SetText(Self->Edit3,"Grama / Veneno");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 1) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 1) {
    TControl_SetText(Self->Edit5,"Level 32: Venusaur");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 1) {
    TControl_SetText(Self->Edit6,"Evolução");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 1) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Tackle\rLVL --- Growl\rLVL --- Leech Seed\rLVL --- Vine Whip\rLVL 22 Poison Powder\rLVL 30 Razor Leaf\rLVL 38 Growth\rLVL 46 Sleep Powder\rLVL 54 Solar Beam\r");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 2) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 2) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 2) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 2) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 2) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 2) {
    TControl_SetText(Self->Edit7,"003");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 2) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Última evolução do Bulbasaur. Bom ataque e defesa fazem dele um bom pokémon.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 2) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\003.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 2) {
    TControl_SetText(Self->Edit2,"Venusaur");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 2) {
    TControl_SetText(Self->Edit3,"Grama / Veneno");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 2) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 2) {
    TControl_SetText(Self->Edit5,"não há");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 2) {
    TControl_SetText(Self->Edit6,"Evolução");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 2) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Tackle\rLVL --- Growl\rLVL --- Leech Seed\rLVL --- Vine Whip\rLVL --- Poison Powder\rLVL --- Razor Leaf\rLVL 43 Growth\rLVL 55 Sleep Powder\rLVL 65 Solar Beam\r");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 3) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 3) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 3) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 3) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 3) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 3) {
    TControl_SetText(Self->Edit7,"004");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 3) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\004.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 3) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"O Charmander é um pokémon forte contra os pokémons de gelo e grama. Sua última evolução é o Charizard");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 3) {
    TControl_SetText(Self->Edit2,"Charmander");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 3) {
    TControl_SetText(Self->Edit3,"Fogo");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 3) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 3) {
    TControl_SetText(Self->Edit5,"Level 16: Charmeleon / Level 36: Charizard");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 3) {
    TControl_SetText(Self->Edit6,"Laboratório do Professor Carvalho (Cidade de Pallet)");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 3) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Scratch\rLVL --- Growl\rLVL 09 Ember\rLVL 15 Leer\rLVL 22 Rage\rLVL 30 Slash\rLVL 38 Flamethrower\rLVL 46 Fire spin\r");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 4) {
    TControl_SetText(Self->Edit7,"005");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 4) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 4) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 4) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 4) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 4) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 4) {
    TControl_SetText(Self->Edit2,"Charmeleon");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 4) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Primeira evolução de Charmander. Seu ataque é fraco, porém, ele fica excelente quando evolui.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 4) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\005.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 4) {
    TControl_SetText(Self->Edit3,"Fogo");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 4) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 4) {
    TControl_SetText(Self->Edit5,"Level 36: Charizard");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 4) {
    TControl_SetText(Self->Edit6,"Evolução");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 4) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Scratch\rLVL --- Growl\rLVL --- Ember\rLVL --- Leer\rLVL 24 Rage\rLVL 33 Slash\rLVL 42 Flamethrower\rLVL 56 Fire spin\r");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 5) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\5.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 5) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 5) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 5) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 5) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 5) {
    TControl_SetText(Self->Edit7,"006");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 5) {
    TControl_SetText(Self->Edit2,"Charizard");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 5) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Última evolução do Charmander. Charizard é considerado um pokémon do fogo voador.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 5) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\006.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 5) {
    TControl_SetText(Self->Edit3,"Fogo / Voador");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 5) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 5) {
    TControl_SetText(Self->Edit5,"Não há");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 5) {
    TControl_SetText(Self->Edit6,"Evolução");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 5) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Scratch\rLVL --- Growl\rLVL --- Ember\rLVL --- Leer\rLVL --- Rage\rLVL 36 Slash\rLVL 46 Flamethrower\rLVL 55 Fire spin");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 6) {
    TControl_SetText(Self->Edit7,"007");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 6) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 6) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 6) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 6) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 6) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 6) {
    TControl_SetText(Self->Edit2,"Squirtle");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 6) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Squirtle é forte contra pokémons do fogo e rocha. Sua última evolução é o Blastoise.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 6) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\007.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 6) {
    TControl_SetText(Self->Edit3,"Água");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 6) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 6) {
    TControl_SetText(Self->Edit5,"Level 16: Wartortle / Level 36: Blastoise");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 6) {
    TControl_SetText(Self->Edit6,"Laboratório do Professor Carvalho (Cidade de Pallet)");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 6) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Tackle\rLVL --- Growl\rLVL 08 Bubble\rLVL 15 Water Gun\rLVL 22 Bite\rLVL 28 Withdraw\rLVL 35 Skull Bash\rLVL 42 Hydro Pump");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 7) {
    TControl_SetText(Self->Edit7,"008");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 7) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 7) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 7) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 7) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 7) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 7) {
    TControl_SetText(Self->Edit2,"Wartortle");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 7) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Primeira evolução do Squirtle. Forte contra pokémons do fogo e da rocha. Sua última evolução é o Blastoise.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 7) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\008.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 7) {
    TControl_SetText(Self->Edit3,"Água");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 7) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 7) {
    TControl_SetText(Self->Edit5,"Level 36: Blastoise");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 7) {
    TControl_SetText(Self->Edit6,"Evolução");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 7) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Tackle\rLVL --- Growl\rLVL --- Bubble\rLVL --- Water Gun\rLVL 24 Bite\rLVL 31 Withdraw\rLVL 39 Skull Bash\rLVL 47 Hydro Pump");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 8) {
    TControl_SetText(Self->Edit7,"009");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 8) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\5.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 8) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 8) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 8) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 8) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 8) {
    TControl_SetText(Self->Edit2,"Blastoise");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 8) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Blastoise é a última evolução do Squirtle. Novos e poderosos golpes como Skull Bash e Hydro Pump. É o pokémon que aparece na caixa da versão azul.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 8) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\009.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 8) {
    TControl_SetText(Self->Edit3,"Água");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 8) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 8) {
    TControl_SetText(Self->Edit5,"Não há");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 8) {
    TControl_SetText(Self->Edit6,"Evolução");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 8) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Tackle\rLVL --- Growl\rLVL --- Bubble\rLVL --- Water Gun\rLVL --- Bite\rLVL --- Withdraw\rLVL 42 Skull Bash\rLVL 52 Hydro Pump");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 9) {
    TControl_SetText(Self->Edit7,"010");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 9) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 9) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 9) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 9) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 9) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 9) {
    TControl_SetText(Self->Edit2,"Caterpie");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 9) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Um pokémon fraco, fácil de pegar e de evoluir e muito comum. Caterpie evolui no level 7 para Metapod e no level 10 para Butterfree.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 9) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\010.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 9) {
    TControl_SetText(Self->Edit3,"Inseto");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 9) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 9) {
    TControl_SetText(Self->Edit5,"Level 7: Metapod / Level 10: Bitterfree");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 9) {
    TControl_SetText(Self->Edit6,"Floresta Viridian, Rotas 2, 24 e 25");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 9) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Tackle\rLVL --- String Shot");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 10) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 10) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 10) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 10) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 10) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 10) {
    TControl_SetText(Self->Edit7,"011");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 10) {
    TControl_SetText(Self->Edit2,"Metapod");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 10) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Um pokémon muito fraco, só fica disponível por 3 levels, depois ele se transforma no Butterfree.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 10) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\011.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 10) {
    TControl_SetText(Self->Edit3,"Inseto");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 10) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 10) {
    TControl_SetText(Self->Edit5,"Level 10: Butterfree");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 10) {
    TControl_SetText(Self->Edit6,"Floresta Viridian, Rotas 2, 24 e 25");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 10) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Harden");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0xb) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0xb) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0xb) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0xb) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0xb) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0xb) {
    TControl_SetText(Self->Edit7,"012");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0xb) {
    TControl_SetText(Self->Edit2,"Butterfree");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0xb) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Uma borboleta que deixa os inimigos dormindo e confusos, Butterfree tem a defesa e ataque fraquíssimos. Seu melhor ataque é o Psybeam, conseguido no level 32.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0xb) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\012.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0xb) {
    TControl_SetText(Self->Edit3,"Inseto / Voador");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0xb) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0xb) {
    TControl_SetText(Self->Edit5,"Não há");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0xb) {
    TControl_SetText(Self->Edit6,"Evolução");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0xb) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL 12 Confusion\rLVL 15 Poison Powder\rLVL 16 Stun Spore\rLVL 17 Sleep Powder\rLVL 21 Supersonic\rLVL 26 Whirlwind\rLVL 32 Psybeam");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0xc) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0xc) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0xc) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0xc) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0xc) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0xc) {
    TControl_SetText(Self->Edit7,"013");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0xc) {
    TControl_SetText(Self->Edit2,"Weedle");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0xc) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Weedle é outro pokémon fraco, fácil de pegar e evoluir e muito comum. Ele evolui no level 7 para Kakuna e no 10 para Beedrill.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0xc) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\013.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0xc) {
    TControl_SetText(Self->Edit3,"Veneno");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0xc) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0xc) {
    TControl_SetText(Self->Edit5,"Level 7: Kakuna / Level 10: Beedrill");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0xc) {
    TControl_SetText(Self->Edit6,"Floresta Viridian, Rotas 2, 24 e 25");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0xc) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Tackle\rLVL --- String Shot");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0xd) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0xd) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0xd) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0xd) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0xd) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0xd) {
    TControl_SetText(Self->Edit7,"014");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0xd) {
    TControl_SetText(Self->Edit2,"Kakuna");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0xd) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Fraco, mas, você só terá ele por três levels, depois ele se transforma em Beedrill.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0xd) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\014.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0xd) {
    TControl_SetText(Self->Edit3,"Veneno");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0xd) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0xd) {
    TControl_SetText(Self->Edit5,"Level 10: Beedrill");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0xd) {
    TControl_SetText(Self->Edit6,"Floresta Viridian, Rotas 2, 24 e 25");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0xd) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Harden");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0xe) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0xe) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0xe) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0xe) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0xe) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0xe) {
    TControl_SetText(Self->Edit7,"015");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0xe) {
    TControl_SetText(Self->Edit2,"Beedrill");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0xe) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Beedrill é um pokémon agressivo. Seus ataques são rápidos e ageis.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0xe) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\015.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0xe) {
    TControl_SetText(Self->Edit3,"Veneno");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0xe) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0xe) {
    TControl_SetText(Self->Edit5,"Não há");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0xe) {
    TControl_SetText(Self->Edit6,"Evolução");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0xe) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL 12 Fury Attack\rLVL 16 Focus Energy\rLVL 20 Twineedle\rLVL 25 Rage\rLVL 30 Pin Missile\rLVL 35 Agility");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0xf) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0xf) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0xf) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0xf) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0xf) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0xf) {
    TControl_SetText(Self->Edit7,"016");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0xf) {
    TControl_SetText(Self->Edit2,"Pidgey");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0xf) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Pidgey é o pokémon mais fácil de achar em todo o jogo. Pode ser achado em muitos lugares.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0xf) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\016.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0xf) {
    TControl_SetText(Self->Edit3,"Normal / Voador");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0xf) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0xf) {
    TControl_SetText(Self->Edit5,"Level 18: Pidgeotto / Level 36: Pidgeot");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0xf) {
    TControl_SetText(Self->Edit6,"Rotas 1, 2, 3, 5, 6, 7, 8, 12, 14, 15, 24 e 25");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0xf) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Gust\rLVL 05 Sand Attack\rLVL 12 Quick Attack\rLVL 19 Whirlwind\rLVL 28 Wing Attack\rLVL 36 Agility\rLVL 44 Mirror Move");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x10) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x10) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x10) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x10) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x10) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x10) {
    TControl_SetText(Self->Edit7,"017");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x10) {
    TControl_SetText(Self->Edit2,"Pidgeotto");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x10) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Pidgeotto é a primeira evolução do Pidgey. Seus ataques são rápidos.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x10) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\017.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x10) {
    TControl_SetText(Self->Edit3,"Normal / Voador");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x10) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x10) {
    TControl_SetText(Self->Edit5,"Level 36: Pidgeot");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x10) {
    TControl_SetText(Self->Edit6,"Rotas 14, 15, e 21");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x10) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Gust\rLVL --- Sand Attack\rLVL --- Quick Attack\rLVL 21 Whirlwind\rLVL 31 Wing Attack\rLVL 40 Agility\rLVL 49 Mirror Move");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x11) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\5.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x11) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x11) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x11) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x11) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x11) {
    TControl_SetText(Self->Edit7,"018");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x11) {
    TControl_SetText(Self->Edit2,"Pidgeot");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x11) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Pidgeot é a última evolução do Pidgey. Seus ataques são rápidos e fortes. Ele é ágil.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x11) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\018.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x11) {
    TControl_SetText(Self->Edit3,"Normal / Voador");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x11) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x11) {
    TControl_SetText(Self->Edit5,"Não há");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x11) {
    TControl_SetText(Self->Edit6,"Evolução");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x11) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Gust\rLVL --- Sand Attack\rLVL --- Quick Attack\rLVL --- Whirlwind\rLVL --- Wing Attack\rLVL 44 Agility\rLVL 54 Mirror Move");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x12) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x12) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x12) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x12) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x12) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x12) {
    TControl_SetText(Self->Edit7,"019");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x12) {
    TControl_SetText(Self->Edit2,"Rattata");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x12) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Outro pokémon fácil de achar. Ele tem bons ataques diretos. Ele é achado em vários lugares.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x12) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\019.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x12) {
    TControl_SetText(Self->Edit3,"Normal");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x12) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x12) {
    TControl_SetText(Self->Edit5,"Level 20: Raticate");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x12) {
    TControl_SetText(Self->Edit6,"Rotas 1, 2, 4, 9, 10, 16, 17, 18, 21 e 22");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x12) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Tackle\rLVL --- Tail Whip\rLVL 07 Quick Attack\rLVL 14 Hyper Fang\rLVL 23 Focus Energy\rLVL 36 Super Fang");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x13) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x13) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x13) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x13) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x13) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x13) {
    TControl_SetText(Self->Edit7,"020");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x13) {
    TControl_SetText(Self->Edit2,"Raticate");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x13) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"A evolução do Rattata para Raticate é um ótimo passo. Novos ataques poderosos como o Super Fang são muito úteis.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x13) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\020.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x13) {
    TControl_SetText(Self->Edit3,"Normal");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x13) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x13) {
    TControl_SetText(Self->Edit5,"Não há");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x13) {
    TControl_SetText(Self->Edit6,"Rotas 16, 17, 18, e 21");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x13) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Tackle\rLVL --- Tail Whip\rLVL --- Quick Attack\rLVL 14 Hyper Fang\rLVL 27 Focus Energy\rLVL 41 Super Fang");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x14) {
    TControl_SetText(Self->Edit7,"021");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x14) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x14) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x14) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x14) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x14) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x14) {
    TControl_SetText(Self->Edit2,"Spearow");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x14) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Spearow é outro pokémon voador. Mas este pokémon é mais agressivo em comparação ao Pidgey.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x14) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\021.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x14) {
    TControl_SetText(Self->Edit3,"Normal / Voador");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x14) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x14) {
    TControl_SetText(Self->Edit5,"Level 20: Fearow");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x14) {
    TControl_SetText(Self->Edit6,"Rotas 3, 4, 9, 10, 11, 16, 17, 18, 22 e 23");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x14) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Peck\rLVL --- Growl\rLVL 09 Leer\rLVL 15 Fury Attack\rLVL 22 Mirror Move\rLVL 29 Drill Peck\rLVL 36 Agility");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x15) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x15) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x15) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x15) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x15) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x15) {
    TControl_SetText(Self->Edit7,"022");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x15) {
    TControl_SetText(Self->Edit2,"Fearow");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x15) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Última evolução do Spearow. Ataques poderosos como Drill Peck. Sua energia é boa mas seu especial é horrível.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x15) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\022.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x15) {
    TControl_SetText(Self->Edit3,"Normal / Voador");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x15) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x15) {
    TControl_SetText(Self->Edit5,"Não há");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x15) {
    TControl_SetText(Self->Edit6,"Rotas 17, 18, e 23");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x15) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Peck\rLVL --- Growl\rLVL --- Leer\rLVL --- Fury Attack\rLVL 25 Mirror Move\rLVL 34 Drill Peck\rLVL 43 Agility");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x16) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x16) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x16) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x16) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x16) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x16) {
    TControl_SetText(Self->Edit7,"023");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x16) {
    TControl_SetText(Self->Edit2,"Ekans");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x16) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Achado somente na versão vermelha do jogo. É um dos pokémons venenosos do jogo. Usa o Leer e o Screech para diminuir a defesa do inimigo. Seus ataques de veneno podem até matar os inimigos ou deixá-los no estado Poisoned.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x16) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\023.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x16) {
    TControl_SetText(Self->Edit3,"Veneno");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x16) {
    TControl_SetText(Self->Edit4,"Vermelha (Somente)");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x16) {
    TControl_SetText(Self->Edit5,"Level 22: Arbok");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x16) {
    TControl_SetText(Self->Edit6,"Rotas 4, 8, 9, 10, 11 e 23");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x16) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Wrap\rLVL --- Leer\rLVL 10 Poison Sting\rLVL 17 Bite\rLVL 24 Glare\rLVL 31 Screech\rLVL 38 Acid");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x17) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x17) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x17) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x17) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x17) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x17) {
    TControl_SetText(Self->Edit7,"024");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x17) {
    TControl_SetText(Self->Edit2,"Arbok");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x17) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Arbok é a evolução de Ekans. Só pode ser achado na versão vermelha. Sua velocidade é seu ponto forte.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x17) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\024.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x17) {
    TControl_SetText(Self->Edit3,"Veneno");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x17) {
    TControl_SetText(Self->Edit4,"Vermelha (Somente)");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x17) {
    TControl_SetText(Self->Edit5,"Não há");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x17) {
    TControl_SetText(Self->Edit6,"Rotas 23 e Unknown Dungeon");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x17) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Wrap\rLVL --- Leer\rLVL --- Poison Sting\rLVL 17 Bite\rLVL 27 Glare\rLVL 36 Screech\rLVL 47 Acid");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x18) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x18) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x18) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x18) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x18) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x18) {
    TControl_SetText(Self->Edit7,"025");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x18) {
    TControl_SetText(Self->Edit2,"Pikachu");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x18) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Pikachu é o pokémon mais popular em existência. É um dos poucos pokémons elétricos do jogo.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x18) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\025.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x18) {
    TControl_SetText(Self->Edit3,"Elétrico");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x18) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x18) {
    TControl_SetText(Self->Edit5,"Thunder Stone: Raichu");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x18) {
    TControl_SetText(Self->Edit6,"Floresta Viridian e Power Plant");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x18) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Thundershock\rLVL --- Growl\rLVL 09 Thunderwave\rLVL 16 Quick Attack\rLVL 26 Swift\rLVL 33 Agility\rLVL 43 Thunder");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x19) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x19) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x19) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x19) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x19) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x19) {
    TControl_SetText(Self->Edit7,"026");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x19) {
    TControl_SetText(Self->Edit2,"Raichu");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x19) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Raichu é um dos mais fortes pokémons do jogo. Porém, Raichu não aprende outros movimentos.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x19) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\026.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x19) {
    TControl_SetText(Self->Edit3,"Elétrico");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x19) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x19) {
    TControl_SetText(Self->Edit5,"Não há");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x19) {
    TControl_SetText(Self->Edit6,"Power Plant e Unknown Dungeon");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x19) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Thundershock\rLVL --- Growl\rLVL --- Thunderwave\rLVL 16 Quick Attack\rLVL 26 Swift\rLVL 33 Agility\rLVL 43 Thunder");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x1a) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x1a) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x1a) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x1a) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x1a) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x1a) {
    TControl_SetText(Self->Edit7,"027");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x1a) {
    TControl_SetText(Self->Edit2,"Sandshrew");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x1a) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Achado somente na versão azul do game. Um bom pokémon de terra.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x1a) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\027.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x1a) {
    TControl_SetText(Self->Edit3,"Terra");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x1a) {
    TControl_SetText(Self->Edit4,"Azul (Somente)");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x1a) {
    TControl_SetText(Self->Edit5,"Level 22: Sandslash");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x1a) {
    TControl_SetText(Self->Edit6,"Rotas 4, 8, 9, 10, 11 e 23");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x1a) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Scratch\rLVL 10 Sand Attack\rLVL 17 Slash\rLVL 24 Poison Sting\rLVL 31 Swift\rLVL 38 Fury Swipes");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x1b) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x1b) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x1b) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x1b) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x1b) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x1b) {
    TControl_SetText(Self->Edit7,"028");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x1b) {
    TControl_SetText(Self->Edit2,"Sandslash");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x1b) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"É a evolução do Sandshrew. Só é achado na versão azul.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x1b) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\028.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x1b) {
    TControl_SetText(Self->Edit3,"Terra");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x1b) {
    TControl_SetText(Self->Edit4,"Azul (Somente)");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x1b) {
    TControl_SetText(Self->Edit5,"Não há");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x1b) {
    TControl_SetText(Self->Edit6,"Rotas 23 e Unknown Dungeon");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x1b) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Scratch\rLVL 10 Sand Attack\rLVL 17 Slash\rLVL 24 Poison Sting\rLVL 31 Swift\rLVL 38 Fury Swipes");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x1c) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x1c) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x1c) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x1c) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x1c) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x1c) {
    TControl_SetText(Self->Edit7,"029");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x1c) {
    TControl_SetText(Self->Edit2,"Nidoran(F)");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x1c) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Este pokémon existe em versão feminina e masculina. A versão feminina é muito lenta em Speed. Porém, ela evolui para Nidorina, um bom pokémon.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x1c) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\029.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x1c) {
    TControl_SetText(Self->Edit3,"Veneno");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x1c) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x1c) {
    TControl_SetText(Self->Edit5,"Level 16: Nidorina / Moon Stone: Nidoqueen");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x1c) {
    TControl_SetText(Self->Edit6,"Rota 22 e Safari Zone");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x1c) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Tackle\rLVL --- Growl\rLVL 08 Scratch\rLVL 14 Poison Sting\rLVL 21 Tail Whip\rLVL 29 Bite\rLVL 36 Fury Swipes\rLVL 43 Double Kick");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x1d) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x1d) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x1d) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x1d) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x1d) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x1d) {
    TControl_SetText(Self->Edit7,"030");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x1d) {
    TControl_SetText(Self->Edit2,"Nidorina");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x1d) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Este pokémon aprende muitos movimentos, incluindo Fury Swipes e o Double Kick.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x1d) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\030.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x1d) {
    TControl_SetText(Self->Edit3,"Veneno");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x1d) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x1d) {
    TControl_SetText(Self->Edit5,"Moon Stone: Nidoqueen");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x1d) {
    TControl_SetText(Self->Edit6,"Safari Zone e no Coin Exchange (Cidade de Celadon)");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x1d) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Tackle\rLVL --- Growl\rLVL --- Scratch\rLVL 14 Poison Sting\rLVL 23 Tail Whip\rLVL 32 Bite\rLVL 41 Fury Swipes\rLVL 50 Double Kick");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x1e) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x1e) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x1e) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x1e) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x1e) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x1e) {
    TControl_SetText(Self->Edit7,"031");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x1e) {
    TControl_SetText(Self->Edit2,"Nidoqueen");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x1e) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Nidoqueen é um grande pokémon que evolui com a Moonstone. Ela só aprende o Poison Sting e o Body Slam. Sua energia é excelente.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x1e) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\031.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x1e) {
    TControl_SetText(Self->Edit3,"Veneno");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x1e) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x1e) {
    TControl_SetText(Self->Edit5,"Não há");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x1e) {
    TControl_SetText(Self->Edit6,"Evolução");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x1e) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Tackle\rLVL --- Scratch\rLVL --- Tail Whip\rLVL 14 Poison Sting\rLVL 23 Body Slam");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x1f) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x1f) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x1f) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x1f) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x1f) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x1f) {
    TControl_SetText(Self->Edit7,"032");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x1f) {
    TControl_SetText(Self->Edit2,"Nidoran(M)");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x1f) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"A versão masculina dos Nidorans aprende muitos movimentos. Seu melhor desempenho é a energia.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x1f) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\032.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x1f) {
    TControl_SetText(Self->Edit3,"Veneno");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x1f) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x1f) {
    TControl_SetText(Self->Edit5,"Level 16: Nidorino / Moon Stone: Nidoking");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x1f) {
    TControl_SetText(Self->Edit6,"Rota 22 e Safari Zone");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x1f) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Leer\rLVL --- Tackle\rLVL 08 Horn Attack\rLVL 14 Poison Sting\rLVL 21 Focus Energy\rLVL 29 Fury Attack\rLVL 36 Horn Drill\rLVL 43 Double Kick");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x20) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x20) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x20) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x20) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x20) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x20) {
    TControl_SetText(Self->Edit7,"033");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x20) {
    TControl_SetText(Self->Edit2,"Nidorino");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x20) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Muito maior que o Nidoran(M). Também tem bastante movimentos. Use a Moonstone nele e ele se transformará no poderoso Nidoking.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x20) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\033.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x20) {
    TControl_SetText(Self->Edit3,"Veneno");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x20) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x20) {
    TControl_SetText(Self->Edit5,"Moon Stone: Nidoking");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x20) {
    TControl_SetText(Self->Edit6,"Safari Zone e no Coin Exchange (Cidade de Celadon)");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x20) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Leer\rLVL --- Tackle\rLVL --- Horn Attack\rLVL --- Poison Sting\rLVL 23 Focus Energy\rLVL 32 Fury Attack\rLVL 41 Horn Drill\rLVL 50 Double Kick");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x21) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\5.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x21) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x21) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x21) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x21) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x21) {
    TControl_SetText(Self->Edit7,"034");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x21) {
    TControl_SetText(Self->Edit2,"Nidoking");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x21) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Melhor pokémon de toda a espécie Nidoran. Sua energia e defesa são ótimos. Ataques, velocidade e special são bons.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x21) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\034.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x21) {
    TControl_SetText(Self->Edit3,"Veneno");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x21) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x21) {
    TControl_SetText(Self->Edit5,"Não há");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x21) {
    TControl_SetText(Self->Edit6,"Evolução");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x21) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Tackle\rLVL --- Horn Attack\rLVL --- Poison Sting\rLVL 23 Thrash");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x22) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x22) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x22) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x22) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x22) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x22) {
    TControl_SetText(Self->Edit7,"035");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x22) {
    TControl_SetText(Self->Edit2,"Clefairy");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x22) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Muito raro. Aprende muitos movimentos e pode evoluir com a Moonstone.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x22) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\035.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x22) {
    TControl_SetText(Self->Edit3,"Normal");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x22) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x22) {
    TControl_SetText(Self->Edit5,"Moon Stone: Clefable");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x22) {
    TControl_SetText(Self->Edit6,"Montanha da Lua e no Coin Exchange (Cidade de Celadon)");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x22) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Pound\rLVL --- Growl\rLVL 18 Doubleslap\rLVL 24 Minimize\rLVL 31 Metronome\rLVL 39 Defense Curl\rLVL 48 Light Screen");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x23) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\5.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x23) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x23) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x23) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x23) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x23) {
    TControl_SetText(Self->Edit7,"036");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x23) {
    TControl_SetText(Self->Edit2,"Clefable");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x23) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Com a Moonstone, Clefairy se transforma no poderoso Clefable. Energia excelente. O resto é bom.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x23) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\036.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x23) {
    TControl_SetText(Self->Edit3,"Normal");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x23) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x23) {
    TControl_SetText(Self->Edit5,"Não há");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x23) {
    TControl_SetText(Self->Edit6,"Evolução");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x23) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Sing\rLVL --- Doubleslap\rLVL --- Minimize\rLVL --- Metronome");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x24) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x24) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x24) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x24) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x24) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x24) {
    TControl_SetText(Self->Edit7,"037");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x24) {
    TControl_SetText(Self->Edit2,"Vulpix");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x24) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Um pokémon-raposa. Seu ataque e defesa são ruins. Sua energia é boa.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x24) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\037.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x24) {
    TControl_SetText(Self->Edit3,"Fogo");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x24) {
    TControl_SetText(Self->Edit4,"Azul (Somente)");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x24) {
    TControl_SetText(Self->Edit5,"Fire Stone: Ninetales");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x24) {
    TControl_SetText(Self->Edit6,"Rotas 7, 8 e Pokémon House (na Ilha Cinnabar)");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x24) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Ember\rLVL --- Tail Whip\rLVL 16 Quick Attack\rLVL 21 Roar\rLVL 28 Confuse Ray\rLVL 35 Flame Thrower\rLVL 42 Fire Spin");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x25) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\5.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x25) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x25) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x25) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x25) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x25) {
    TControl_SetText(Self->Edit7,"038");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x25) {
    TControl_SetText(Self->Edit2,"Ninetales");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x25) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Usando a Firestone em Vulpix, ele se transformará em Ninetales. Seus atributos são bons.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x25) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\038.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x25) {
    TControl_SetText(Self->Edit3,"Fogo");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x25) {
    TControl_SetText(Self->Edit4,"Azul (Somente)");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x25) {
    TControl_SetText(Self->Edit5,"Não há");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x25) {
    TControl_SetText(Self->Edit6,"Evolução");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x25) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Ember\rLVL --- Tail Whip\rLVL --- Quick Attack\rLVL --- Roar");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x26) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\5.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x26) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x26) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x26) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x26) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x26) {
    TControl_SetText(Self->Edit7,"039");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x26) {
    TControl_SetText(Self->Edit2,"Jigglypuff");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x26) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Jigglypuff é um pokémon fraco. Porém, sua energia é excelente e seus movimentos de música fazem o oponente dormir.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x26) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\039.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x26) {
    TControl_SetText(Self->Edit3,"Normal");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x26) {
    TControl_SetText(Self->Edit4,"Azul (Somente)");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x26) {
    TControl_SetText(Self->Edit5,"Moon Stone: Wigglytuff");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x26) {
    TControl_SetText(Self->Edit6,"Rota 3");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x26) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Sing\rLVL 09 Pound\rLVL 14 Disable\rLVL 19 Defense Curl\rLVL 24 Doubleslap\rLVL 29 Rest\rLVL 34 Body Slam\rLVL 39 Double-Edge");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x27) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\5.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x27) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x27) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x27) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x27) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x27) {
    TControl_SetText(Self->Edit7,"040");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x27) {
    TControl_SetText(Self->Edit2,"Wigglytuff");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x27) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Use a Moonstone para transformar Jigglypuff em Wigglypuff. Só seu ataque melhora.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x27) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\040.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x27) {
    TControl_SetText(Self->Edit3,"Normal");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x27) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x27) {
    TControl_SetText(Self->Edit5,"Não há");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x27) {
    TControl_SetText(Self->Edit6,"Unknown Dungeon");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x27) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Sing\rLVL --- Disable\rLVL --- Defense Curl\rLVL --- Doubleslap");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x28) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x28) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x28) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x28) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x28) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x28) {
    TControl_SetText(Self->Edit7,"041");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x28) {
    TControl_SetText(Self->Edit2,"Zubat");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x28) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Achado na maioria das cavernas. Zubat evolui no level 22 para Golbat. Energia muito boa. Ataque e defesa médios.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x28) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\041.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x28) {
    TControl_SetText(Self->Edit3,"Veneno / Voador");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x28) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x28) {
    TControl_SetText(Self->Edit5,"Level 22: Golbat");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x28) {
    TControl_SetText(Self->Edit6,"Montanha da Morte, Túnel da Pedra, Ilhas Seafrom e Victory Road");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x28) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Leech Life\rLVL 10 Supersonic\rLVL 15 Bite\rLVL 21 Confuse Ray\rLVL 28 Wing Attack\rLVL 36 Haze");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x29) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x29) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x29) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x29) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x29) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x29) {
    TControl_SetText(Self->Edit7,"042");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x29) {
    TControl_SetText(Self->Edit2,"Golbat");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x29) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Evolução do Zubat. Pokémon com atributos muito bons. Aprende 2 novos movimentos : Wing Attack e Haze.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x29) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\042.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x29) {
    TControl_SetText(Self->Edit3,"Veneno / Voador");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x29) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x29) {
    TControl_SetText(Self->Edit5,"Não há");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x29) {
    TControl_SetText(Self->Edit6,"Ilhas Safrom, Victory Road e Unknown Dungeon");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x29) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Leech Life\rLVL --- Supersonic\rLVL --- Bite\rLVL --- Confuse Ray\rLVL 32 Wing Attack\rLVL 43 Haze");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x2a) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x2a) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x2a) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x2a) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x2a) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x2a) {
    TControl_SetText(Self->Edit7,"043");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x2a) {
    TControl_SetText(Self->Edit2,"Oddish");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x2a) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Achado somente na versão vermelha, em muitos lugares com grama. Muitos movimentos como Solar Beam.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x2a) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\043.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x2a) {
    TControl_SetText(Self->Edit3,"Grama / Veneno");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x2a) {
    TControl_SetText(Self->Edit4,"Vermelha (Somente)");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x2a) {
    TControl_SetText(Self->Edit5,"Level 21: Gloom / Leaf Stone: Vileplume");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x2a) {
    TControl_SetText(Self->Edit6,"Rotas 5, 6, 7, 12, 13, 14, 15, 24 e 25");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x2a) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Absorb\rLVL 15 Poison Powder\rLVL 17 Stun Spore\rLVL 19 Sleep Powder\rLVL 24 Acid\rLVL 33 Petal Dance\rLVL 46 Solar Beam");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x2b) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x2b) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x2b) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x2b) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x2b) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x2b) {
    TControl_SetText(Self->Edit7,"044");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x2b) {
    TControl_SetText(Self->Edit2,"Gloom");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x2b) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Primeira evolução do Oddish. Achado somente na versão vermelha. Vários movimentos.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x2b) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\044.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x2b) {
    TControl_SetText(Self->Edit3,"Grama / Veneno");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x2b) {
    TControl_SetText(Self->Edit4,"Vermelha (Somente)");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x2b) {
    TControl_SetText(Self->Edit5,"Leaf Stone: Vileplume");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x2b) {
    TControl_SetText(Self->Edit6,"Rotas 12, 13, 14 e 15");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x2b) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Absorb\rLVL --- Poison Powder\rLVL --- Stun Spore\rLVL --- Sleep Powder\rLVL 28 Acid\rLVL 38 Petal Dance\rLVL 52 Solar Beam");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x2c) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\5.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x2c) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x2c) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x2c) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x2c) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x2c) {
    TControl_SetText(Self->Edit7,"045");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x2c) {
    TControl_SetText(Self->Edit2,"Vileplume");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x2c) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Evolui com a Leafstone. Não aprende nenhum movimento. Energia excelente, ataque, defesa e especial muito bons.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x2c) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\045.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x2c) {
    TControl_SetText(Self->Edit3,"Grama / Veneno");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x2c) {
    TControl_SetText(Self->Edit4,"Vermelha (Somente)");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x2c) {
    TControl_SetText(Self->Edit5,"Não há");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x2c) {
    TControl_SetText(Self->Edit6,"Evolução");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x2c) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Poison Powder\rLVL --- Stun Spore\rLVL --- Sleep Powder");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x2d) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x2d) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x2d) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x2d) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x2d) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x2d) {
    TControl_SetText(Self->Edit7,"046");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x2d) {
    TControl_SetText(Self->Edit2,"Paras");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x2d) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Achado em lugares escuros, como o Mt. Moon ou a Safari Zone, na Fuschia City. Energia média.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x2d) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\046.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x2d) {
    TControl_SetText(Self->Edit3,"Inseto / Grama");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x2d) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x2d) {
    TControl_SetText(Self->Edit5,"Level 24: Parasect");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x2d) {
    TControl_SetText(Self->Edit6,"Montanha da Lua e Safari Zone");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x2d) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Scratch\rLVL 13 Stun Spore\rLVL 20 Leech Life\rLVL 27 Spore\rLVL 34 Slash\rLVL 41 Growth");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x2e) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x2e) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x2e) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x2e) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x2e) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x2e) {
    TControl_SetText(Self->Edit7,"047");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x2e) {
    TControl_SetText(Self->Edit2,"Parasect");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x2e) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Grande e mais poderoso do que Paras. Sua energia é boa, assim como o ataque.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x2e) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\047.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x2e) {
    TControl_SetText(Self->Edit3,"Inseto / Grama");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x2e) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x2e) {
    TControl_SetText(Self->Edit5,"Não há");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x2e) {
    TControl_SetText(Self->Edit6,"Safari Zone e Unknown Dungeon");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x2e) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Scratch\rLVL --- Stun Spore\rLVL --- Leech Life\rLVL 30 Spore\rLVL 39 Slash\rLVL 48 Growth");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x2f) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x2f) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x2f) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x2f) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x2f) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x2f) {
    TControl_SetText(Self->Edit7,"048");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x2f) {
    TControl_SetText(Self->Edit2,"Venonat");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x2f) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Achado na região sudeste do mapa. Tem muitos movimentos como o Psychic.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x2f) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\048.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x2f) {
    TControl_SetText(Self->Edit3,"Inseto / Grama");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x2f) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x2f) {
    TControl_SetText(Self->Edit5,"Level 31: Venomoth");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x2f) {
    TControl_SetText(Self->Edit6,"Rotas 12, 13, 14, 15 e Safari Zone");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x2f) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Tackle\rLVL --- Disable\rLVL 24 Poison Powder\rLVL 27 Leech Life\rLVL 30 Stun Spore\rLVL 35 Psybeam\rLVL 38 Sleep Powder\rLVL 43 Psychic");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x30) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x30) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x30) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x30) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x30) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x30) {
    TControl_SetText(Self->Edit7,"049");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x30) {
    TControl_SetText(Self->Edit2,"Venomoth");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x30) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Energia muito boa, ataque e defesa bons. Ataques baseados na grama, inseto, veneno e normais.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x30) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\049.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x30) {
    TControl_SetText(Self->Edit3,"Inseto / Veneno");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x30) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x30) {
    TControl_SetText(Self->Edit5,"Não há");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x30) {
    TControl_SetText(Self->Edit6,"Safari Zone, Victory Road e Unknown Dungeon");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x30) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Tackle\rLVL --- Disable\rLVL --- Poison Powder\rLVL --- Leech Life\rLVL --- Stun Spore\rLVL 38 Psybeam\rLVL 43 Sleep Powder\rLVL 50 Psychic");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x31) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x31) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x31) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x31) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x31) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x31) {
    TControl_SetText(Self->Edit7,"050");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x31) {
    TControl_SetText(Self->Edit2,"Diglett");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x31) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Pokémon-toupeira. Pode se esconder embaixo da terra no combate e atacar os inimigos de surpresa. Não é bom contra pokémons voadores.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x31) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\050.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x31) {
    TControl_SetText(Self->Edit3,"Terra");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x31) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x31) {
    TControl_SetText(Self->Edit5,"Level 26: Digtrio");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x31) {
    TControl_SetText(Self->Edit6,"Caverna Diglett");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x31) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Scratch\rLVL 15 Growl\rLVL 19 Dig\rLVL 24 Sand-Attack\rLVL 31 Slash\rLVL 40 Earthquake");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x32) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x32) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x32) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x32) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x32) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x32) {
    TControl_SetText(Self->Edit7,"051");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x32) {
    TControl_SetText(Self->Edit2,"Dugtrio");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x32) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"3 pokémons em 1. Energia triplicada e velocidade boa. Última evolução do Digglet.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x32) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\051.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x32) {
    TControl_SetText(Self->Edit3,"Terra");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x32) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x32) {
    TControl_SetText(Self->Edit5,"Não há");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x32) {
    TControl_SetText(Self->Edit6,"Caverna Diglett");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x32) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Scratch\rLVL --- Growl\rLVL --- Dig\rLVL --- Sand-Attack\rLVL 35 Slash\rLVL 47 Earthquake");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x33) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x33) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x33) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x33) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x33) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x33) {
    TControl_SetText(Self->Edit7,"052");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x33) {
    TControl_SetText(Self->Edit2,"Meowth");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x33) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Ataques variados, como o Pay Day, onde Meowth rouba dinheiro do treinador do pokémon inimigo.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x33) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\052.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x33) {
    TControl_SetText(Self->Edit3,"Normal");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x33) {
    TControl_SetText(Self->Edit4,"Azul (Somente)");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x33) {
    TControl_SetText(Self->Edit5,"Level 28: Persian");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x33) {
    TControl_SetText(Self->Edit6,"Rotas 5, 6, 7 e 8");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x33) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Scratch\rLVL --- Growl\rLVL 12 Bite\rLVL 17 Pay Day\rLVL 24 Screech\rLVL 33 Fury Swipes\rLVL 44 Slash");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x34) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x34) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x34) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x34) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x34) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x34) {
    TControl_SetText(Self->Edit7,"053");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x34) {
    TControl_SetText(Self->Edit2,"Persian");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x34) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Evoluído do Meowth. No level 28 na versão azul. Na vermelha, troque com alguém.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x34) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\053.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x34) {
    TControl_SetText(Self->Edit3,"Normal");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x34) {
    TControl_SetText(Self->Edit4,"Azul (Somente)");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x34) {
    TControl_SetText(Self->Edit5,"Não há");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x34) {
    TControl_SetText(Self->Edit6,"Evolução");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x34) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Scratch\rLVL --- Growl\rLVL --- Bite\rLVL --- Pay Day\rLVL --- Screech\rLVL 37 Fury Swipes\rLVL 51 Slash");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x35) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x35) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x35) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x35) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x35) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x35) {
    TControl_SetText(Self->Edit7,"054");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x35) {
    TControl_SetText(Self->Edit2,"Psyduck");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x35) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Tem ataques que confusam o inimigo. Baseados na água, os ataques de Psyduck são razoáveis.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x35) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\054.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x35) {
    TControl_SetText(Self->Edit3,"Água");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x35) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x35) {
    TControl_SetText(Self->Edit5,"Level 33: Golduck");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x35) {
    TControl_SetText(Self->Edit6,"Rotas 4, 24 e 25");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x35) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Scratch\rLVL 28 Tail Whip\rLVL 31 Disable\rLVL 36 Confusion\rLVL 43 Fury Swipes\rLVL 52 Hydro Pump");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x36) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x36) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x36) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x36) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x36) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x36) {
    TControl_SetText(Self->Edit7,"055");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x36) {
    TControl_SetText(Self->Edit2,"Golduck");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x36) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Evoluído do Psyduck no level 33. Seus atributos triplicaram, a não ser, a defesa.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x36) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\055.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x36) {
    TControl_SetText(Self->Edit3,"Água");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x36) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x36) {
    TControl_SetText(Self->Edit5,"Não há");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x36) {
    TControl_SetText(Self->Edit6,"Rotas 4, 24, 25, Cidade de Celadon, Cidade de Fuchsia e Ilhas Seafrom (pescando)");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x36) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Scratch\rLVL --- Tail Whip\rLVL --- Disable\rLVL 39 Confusion\rLVL 48 Fury Swipes\rLVL 59 Hydro Pump");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x37) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x37) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x37) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x37) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x37) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x37) {
    TControl_SetText(Self->Edit7,"056");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x37) {
    TControl_SetText(Self->Edit2,"Mankey");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x37) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Um pokémon lutador muito poderoso. Possui bons ataques como o Seismic Toss. Ele evolui no level 28 para Primeape.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x37) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\056.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x37) {
    TControl_SetText(Self->Edit3,"Lutador");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x37) {
    TControl_SetText(Self->Edit4,"Vermelha (Somente)");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x37) {
    TControl_SetText(Self->Edit5,"Level 28: Primeape");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x37) {
    TControl_SetText(Self->Edit6,"Rotas 5, 6, 7 e 8");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x37) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Scratch\rLVL --- Leer\rLVL 15 Karate Chop\rLVL 21 Fury Attack\rLVL 27 Focus Energy\rLVL 33 Seismic Toss\rLVL 39 Thrash");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x38) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x38) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x38) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x38) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x38) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x38) {
    TControl_SetText(Self->Edit7,"057");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x38) {
    TControl_SetText(Self->Edit2,"Primeape");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x38) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Evoluído do Mankey. Só pode ser achado na versão vermelha. Na azul você deve trocar com alguém.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x38) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\057.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x38) {
    TControl_SetText(Self->Edit3,"Lutador");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x38) {
    TControl_SetText(Self->Edit4,"Vermelha somente");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x38) {
    TControl_SetText(Self->Edit5,"Não há");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x38) {
    TControl_SetText(Self->Edit6,"Evolução");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x38) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Scratch\rLVL --- Leer\rLVL --- Karate Chop\rLVL --- Fury Attack\rLVL --- Focus Energy\rLVL 37 Seismic Toss\rLVL 46 Thrash");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x39) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x39) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x39) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x39) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x39) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x39) {
    TControl_SetText(Self->Edit7,"058");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x39) {
    TControl_SetText(Self->Edit2,"Growlithe");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x39) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Muito difícil de pegar. É uma boa escolha para seu time. Energia muito boa.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x39) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\058.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x39) {
    TControl_SetText(Self->Edit3,"Fogo");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x39) {
    TControl_SetText(Self->Edit4,"Vermelha (Somente)");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x39) {
    TControl_SetText(Self->Edit5,"Fire Stone: Arcanine");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x39) {
    TControl_SetText(Self->Edit6,"Rotas 7, 8 e na Pokémon House (Ilha Cinnabar)");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x39) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Bite\rLVL --- Roar\rLVL 18 Ember\rLVL 23 Leer\rLVL 30 Take Down\rLVL 39 Agility\rLVL 50 Flamethrower");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x3a) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\5.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x3a) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x3a) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x3a) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x3a) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x3a) {
    TControl_SetText(Self->Edit7,"059");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x3a) {
    TControl_SetText(Self->Edit2,"Arcanine");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x3a) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Evoluído do Growlithe com a Firestone. Não aprende nenhum ataque. Energia excelente, assim como o ataque.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x3a) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\059.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x3a) {
    TControl_SetText(Self->Edit3,"Fogo");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x3a) {
    TControl_SetText(Self->Edit4,"Vermelha (Somente)");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x3a) {
    TControl_SetText(Self->Edit5,"Não há");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x3a) {
    TControl_SetText(Self->Edit6,"Evolução");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x3a) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Bite\rLVL --- Roar\rLVL --- Ember\rLVL --- Leer\rLVL --- Take Down");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x3b) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x3b) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x3b) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x3b) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x3b) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x3b) {
    TControl_SetText(Self->Edit7,"060");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x3b) {
    TControl_SetText(Self->Edit2,"Poliwag");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x3b) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Ataque, defesa e especial muito ruins. Porém, energia e velocidade bons.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x3b) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\060.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x3b) {
    TControl_SetText(Self->Edit3,"Água");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x3b) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x3b) {
    TControl_SetText(Self->Edit5,"Level 25: Poliwhirl / Water Stone: Poliwrath");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x3b) {
    TControl_SetText(Self->Edit6,"Cidade Viridian e Rota 22 (pescando)");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x3b) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Bubble\rLVL 16 Hypnosis\rLVL 19 Water Gun\rLVL 25 Doubleslap\rLVL 31 Body Slam\rLVL 38 Amnesia\rLVL 45 Hydro Pump");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x3c) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x3c) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x3c) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x3c) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x3c) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x3c) {
    TControl_SetText(Self->Edit7,"061");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x3c) {
    TControl_SetText(Self->Edit2,"Poliwhirl");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x3c) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Evolução do Poliwag. Poliwhirl tem ataques de mão não muito poderosos, um dos melhores é o Doubleslap. Energia é muito boa.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x3c) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\061.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x3c) {
    TControl_SetText(Self->Edit3,"Água");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x3c) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x3c) {
    TControl_SetText(Self->Edit5,"Water Stone: Poliwrath");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x3c) {
    TControl_SetText(Self->Edit6,"Cidade de Celadon e Rota 10 (pescando)");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x3c) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Bubble\rLVL --- Hypnosis\rLVL --- Water Gun\rLVL 26 Doubleslap\rLVL 33 Body Slam\rLVL 41 Amnesia\rLVL 49 Hydro Pump");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x3d) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\5.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x3d) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x3d) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x3d) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x3d) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x3d) {
    TControl_SetText(Self->Edit7,"062");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x3d) {
    TControl_SetText(Self->Edit2,"Poliwrath");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x3d) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Última evolução do Poliwag. Um pokémon poderoso com vários movimentos.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x3d) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\062.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x3d) {
    TControl_SetText(Self->Edit3,"Água");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x3d) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x3d) {
    TControl_SetText(Self->Edit5,"Não há");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x3d) {
    TControl_SetText(Self->Edit6,"Evolução");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x3d) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Bubble\rLVL --- Hypnosis\rLVL --- Water Gun");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x3e) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x3e) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x3e) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x3e) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x3e) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x3e) {
    TControl_SetText(Self->Edit7,"063");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x3e) {
    TControl_SetText(Self->Edit2,"Abra");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x3e) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Extremamente difícil de pegar. Seu único movimento Teleport pode até colocar o inimigo para dormir.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x3e) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\063.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x3e) {
    TControl_SetText(Self->Edit3,"Psíquico");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x3e) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x3e) {
    TControl_SetText(Self->Edit5,"Level 16: Kadabra / Trocado: Alakazam");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x3e) {
    TControl_SetText(Self->Edit6,"Rotas 24, 25 e Coin Exchange (Cidade de Celadon)");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x3e) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Teleport");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x3f) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x3f) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x3f) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x3f) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x3f) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x3f) {
    TControl_SetText(Self->Edit7,"064");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x3f) {
    TControl_SetText(Self->Edit2,"Kadabra");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x3f) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Abra se tranforma em Kadabra no level 16. Seus movimentos são muitos e uns dos melhores são o Psybeam e o Psychic.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x3f) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\064.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x3f) {
    TControl_SetText(Self->Edit3,"Psíquico");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x3f) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x3f) {
    TControl_SetText(Self->Edit5,"Trocado: Alakazam");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x3f) {
    TControl_SetText(Self->Edit6,"Unknown Dungeon");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x3f) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Teleport\rLVL --- Confusion\rLVL 20 Disable\rLVL 27 Psybeam\rLVL 31 Recover\rLVL 38 Psychic\rLVL 42 Reflect");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x40) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x40) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x40) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x40) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x40) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\5.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x40) {
    TControl_SetText(Self->Edit7,"065");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x40) {
    TControl_SetText(Self->Edit2,"Alakazam");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x40) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"É conseguido quando o Kadabra é trocado por um Alakazam. Esta evolução aumenta em muito a energia e os ataques.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x40) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\065.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x40) {
    TControl_SetText(Self->Edit3,"Psíquico");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x40) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x40) {
    TControl_SetText(Self->Edit5,"Não há");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x40) {
    TControl_SetText(Self->Edit6,"Evolução");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x40) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Teleport\rLVL --- Confusion\rLVL 20 Disable\rLVL 27 Psybeam\rLVL 31 Recover\rLVL 38 Psychic\rLVL 42 Reflect");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x41) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x41) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x41) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x41) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x41) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x41) {
    TControl_SetText(Self->Edit7,"066");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x41) {
    TControl_SetText(Self->Edit2,"Machop");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x41) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Um dos poucos pokémons-lutadores. Seu ataque faz qualquer inimigo morrer rápidamente.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x41) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\066.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x41) {
    TControl_SetText(Self->Edit3,"Lutador");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x41) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x41) {
    TControl_SetText(Self->Edit5,"Level 28: Machoke / Trocado: Machamp");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x41) {
    TControl_SetText(Self->Edit6,"Túnel de Pedra e Victory Road");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x41) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Karate Chop\rLVL 20 Low Kick\rLVL 25 Leer\rLVL 32 Focus Energy\rLVL 39 Seismic Toss\rLVL 46 Submission");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x42) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\5.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x42) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x42) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x42) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x42) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x42) {
    TControl_SetText(Self->Edit7,"067");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x42) {
    TControl_SetText(Self->Edit2,"Machoke");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x42) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Primeira evolução do Machop. Machoke é ágil e muito poderoso.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x42) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\067.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x42) {
    TControl_SetText(Self->Edit3,"Lutador");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x42) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x42) {
    TControl_SetText(Self->Edit5,"Trocado: Machamp");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x42) {
    TControl_SetText(Self->Edit6,"Túnel de Pedra e Victory Road");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x42) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Karate Chop\rLVL --- Low Kick\rLVL --- Leer\rLVL 36 Focus Energy\rLVL 44 Seismic Toss\rLVL 52 Submission");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x43) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\5.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x43) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x43) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x43) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x43) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x43) {
    TControl_SetText(Self->Edit7,"068");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x43) {
    TControl_SetText(Self->Edit2,"Machamp");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x43) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Conseguido quando o Machoke é trocado por um destes.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x43) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\068.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x43) {
    TControl_SetText(Self->Edit3,"Lutador");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x43) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x43) {
    TControl_SetText(Self->Edit5,"Não há");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x43) {
    TControl_SetText(Self->Edit6,"Evolução");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x43) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Karate Chop\rLVL --- Low Kick\rLVL --- Leer\rLVL 36 Focus Energy\rLVL 44 Seismic Toss\rLVL 52 Submission");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x44) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x44) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x44) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x44) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x44) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x44) {
    TControl_SetText(Self->Edit7,"069");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x44) {
    TControl_SetText(Self->Edit2,"Bellsprout");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x44) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Achado somente na versão azul. Este é mais um exemplo dos pokémons de vários tipos combinando grama e veneno.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x44) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\069.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x44) {
    TControl_SetText(Self->Edit3,"Grama / Veneno");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x44) {
    TControl_SetText(Self->Edit4,"Azul (Somente)");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x44) {
    TControl_SetText(Self->Edit5,"Level 21: Weepinbell / Leaf Stone: Victreebel");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x44) {
    TControl_SetText(Self->Edit6,"Rotas 5, 6, 7, 12, 13, 14, 15, 24 e 25");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x44) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Vine Whip\rLVL --- Growth\rLVL 13 Wrap\rLVL 15 Poison Powder\rLVL 18 Sleep Powder\rLVL 21 Stun Spore\rLVL 26 Acid\rLVL 33 Razor Leaf\rLVL 42 Slam");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x45) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x45) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x45) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x45) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x45) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x45) {
    TControl_SetText(Self->Edit7,"070");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x45) {
    TControl_SetText(Self->Edit2,"Weepinbell");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x45) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Achado na parte sudeste do mapa do game. Primeira evolução do Bellsprout. Só evolui com a Leafstone para Victreebell.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x45) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\070.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x45) {
    TControl_SetText(Self->Edit3,"Grama / Veneno");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x45) {
    TControl_SetText(Self->Edit4,"Azul (Somente)");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x45) {
    TControl_SetText(Self->Edit5,"Leaf Stone: Victreebel");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x45) {
    TControl_SetText(Self->Edit6,"Rotas 12, 13, 14 e 15");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x45) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Vine Whip\rLVL --- Growth\rLVL --- Wrap\rLVL --- Poison Powder\rLVL --- Sleep Powder\rLVL 23 Stun Spore\rLVL 29 Acid\rLVL 38 Razor Leaf\rLVL 49 Slam");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x46) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x46) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x46) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x46) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x46) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x46) {
    TControl_SetText(Self->Edit7,"071");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x46) {
    TControl_SetText(Self->Edit2,"Victreebel");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x46) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Última evolução do Bellstrout. Seus atributos são iguais aos do Weepinbell. Consiga um destes para se tornar um mestre Pokémon.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x46) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\071.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x46) {
    TControl_SetText(Self->Edit3,"Grama / Veneno");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x46) {
    TControl_SetText(Self->Edit4,"Azul (Somente)");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x46) {
    TControl_SetText(Self->Edit5,"Não há");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x46) {
    TControl_SetText(Self->Edit6,"Evolução");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x46) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Wrap\rLVL --- Poison Powder\rLVL --- Sleep Powder");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x47) {
    TControl_SetText(Self->Edit7,"072");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x47) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x47) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x47) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x47) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x47) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x47) {
    TControl_SetText(Self->Edit2,"Tentacool");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x47) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Muito comum nos lagos de Pallet Town e Cinnabar Islands, até mesmo nos riachos de Fuschia City.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x47) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\072.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x47) {
    TControl_SetText(Self->Edit3,"Água / Veneno");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x47) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x47) {
    TControl_SetText(Self->Edit5,"Level 30: Tentacruel");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x47) {
    TControl_SetText(Self->Edit6,"Rotas 12, 13, 17, 18, 19, 20, 21, Cidade de Pallet e Cidade Viridian");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x47) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Acid\rLVL 07 Supersonic\rLVL 13 Wrap\rLVL 18 Poison Sting\rLVL 22 Water Gun\rLVL 27 Constrict\rLVL 33 Barrier\rLVL 40 Screech\rLVL 48 Hydro Pump");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x48) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\5.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x48) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x48) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x48) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x48) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x48) {
    TControl_SetText(Self->Edit7,"073");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x48) {
    TControl_SetText(Self->Edit2,"Tentacruel");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x48) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Quando Tentacool chega ao level 30, ele se tranforma no poderoso Tentacruel. Sua energia foi dobrada.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x48) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\073.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x48) {
    TControl_SetText(Self->Edit3,"Água / Veneno");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x48) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x48) {
    TControl_SetText(Self->Edit5,"Não há");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x48) {
    TControl_SetText(Self->Edit6,"Evolução");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x48) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Acid\rLVL --- Supersonic\rLVL --- Wrap\rLVL --- Poison Sting\rLVL --- Water Gun\rLVL --- Constrict\rLVL 35 Barrier\rLVL 43 Screech\rLVL 50 Hydro Pump");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x49) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x49) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x49) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x49) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x49) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x49) {
    TControl_SetText(Self->Edit7,"074");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x49) {
    TControl_SetText(Self->Edit2,"Geodude");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x49) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Muito comum nas cavernas como Mt. Moon, Rock Cave e Victory Road. Seu elemento é a rocha.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x49) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\074.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x49) {
    TControl_SetText(Self->Edit3,"Pedra / Terra");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x49) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x49) {
    TControl_SetText(Self->Edit5,"Level 25: Graveler / Trocado: Golem");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x49) {
    TControl_SetText(Self->Edit6,"Montanha da Lua, Túnel de Pedra e Victory Road");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x49) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Tackle\rLVL 07 Defense Curl\rLVL 13 Rock Throw\rLVL 18 Self Destruct\rLVL 22 Harden\rLVL 27 Earthquake\rLVL 33 Explosion");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x4a) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x4a) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x4a) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x4a) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x4a) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x4a) {
    TControl_SetText(Self->Edit7,"075");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x4a) {
    TControl_SetText(Self->Edit2,"Graveler");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x4a) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Graveler é bem mais \"duro\" do que Geodude, mas, Graveler é mais lento.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x4a) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\075.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x4a) {
    TControl_SetText(Self->Edit3,"Pedra / Terra");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x4a) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x4a) {
    TControl_SetText(Self->Edit5,"Trocado: Golem");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x4a) {
    TControl_SetText(Self->Edit6,"Victory Road");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x4a) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Tackle\rLVL --- Defense Curl\rLVL --- Rock Throw\rLVL --- Self Destruct\rLVL 29 Harden\rLVL 36 Earthquake\rLVL 43 Explosion");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x4b) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\5.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x4b) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x4b) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x4b) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x4b) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x4b) {
    TControl_SetText(Self->Edit7,"076");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x4b) {
    TControl_SetText(Self->Edit2,"Golem");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x4b) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Quando Graveler é trocado você consegue um Golem. É muito difícil de pegá-lo por seu enorme tamanho.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x4b) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\076.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x4b) {
    TControl_SetText(Self->Edit3,"Pedra / Terra");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x4b) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x4b) {
    TControl_SetText(Self->Edit5,"Não há");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x4b) {
    TControl_SetText(Self->Edit6,"Evolução");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x4b) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Tackle\rLVL --- Defense Curl\rLVL --- Rock Throw\rLVL --- Self Destruct\rLVL 29 Harden\rLVL 36 Earthquake\rLVL 43 Explosion");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x4c) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x4c) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x4c) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x4c) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x4c) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x4c) {
    TControl_SetText(Self->Edit7,"077");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x4c) {
    TControl_SetText(Self->Edit2,"Ponyta");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x4c) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Achado somente na Cinnabar Islands Mansion. Muito efetivo contra pokémons de gelo, grama e pokémons-insetos. Evolui no level 40 para Rapidash.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x4c) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\077.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x4c) {
    TControl_SetText(Self->Edit3,"Fogo");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x4c) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x4c) {
    TControl_SetText(Self->Edit5,"Level 40: Rapidash");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x4c) {
    TControl_SetText(Self->Edit6,"Pokémon House (Ilha Cinnabar)");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x4c) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Ember\rLVL 30 Tail Whip\rLVL 32 Stomp\rLVL 35 Growl\rLVL 39 Fire Spin\rLVL 43 Take Down\rLVL 48 Agility");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x4d) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x4d) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x4d) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x4d) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x4d) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x4d) {
    TControl_SetText(Self->Edit7,"078");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x4d) {
    TControl_SetText(Self->Edit2,"Rapidash");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x4d) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Uma ótima escolha de pokémons do fogo para colecionadores de pokémon.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x4d) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\078.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x4d) {
    TControl_SetText(Self->Edit3,"Fogo");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x4d) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x4d) {
    TControl_SetText(Self->Edit5,"Não há");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x4d) {
    TControl_SetText(Self->Edit6,"Evolução");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x4d) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Ember\rLVL --- Tail Whip\rLVL --- Stomp\rLVL --- Growl\rLVL --- Fire Spin\rLVL 47 Take Down\rLVL 55 Agility");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x4e) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\5.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x4e) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x4e) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x4e) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x4e) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x4e) {
    TControl_SetText(Self->Edit7,"079");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x4e) {
    TControl_SetText(Self->Edit2,"Slowpoke");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x4e) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Um pokémon muito maluco. Ele é muito lento. Demora 5 segundos para seu cérebro trabalhar.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x4e) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\079.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x4e) {
    TControl_SetText(Self->Edit3,"Água / Psíquico");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x4e) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x4e) {
    TControl_SetText(Self->Edit5,"Level 37: Slowbro");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x4e) {
    TControl_SetText(Self->Edit6,"Cidade de Celadon, Safari Zone, Ilhas Seafrom, Rota 10 (pescando)");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x4e) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Confusion\rLVL 30 Disable\rLVL 32 Headbutt\rLVL 35 Growl\rLVL 39 Water Gun\rLVL 43 Amnesia\rLVL 48 Psychic");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x4f) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\5.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x4f) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x4f) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x4f) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x4f) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x4f) {
    TControl_SetText(Self->Edit7,"080");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x4f) {
    TControl_SetText(Self->Edit2,"Slowbro");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x4f) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Mais maluco do que Slowpoke. Ele continua lento.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x4f) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\080.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x4f) {
    TControl_SetText(Self->Edit3,"Água / Psíquico");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x4f) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x4f) {
    TControl_SetText(Self->Edit5,"Não há");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x4f) {
    TControl_SetText(Self->Edit6,"Ilhas Seafrom, Rota 23 (pescando) e Unknown Dungeon");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x4f) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Confusion\rLVL --- Disable\rLVL --- Headbutt\rLVL --- Growl\rLVL --- Water Gun\rLVL 44 Amnesia\rLVL 55 Psychic");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x50) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x50) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x50) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x50) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x50) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x50) {
    TControl_SetText(Self->Edit7,"081");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x50) {
    TControl_SetText(Self->Edit2,"Magnemite");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x50) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Achado somente na Powerplant e na Unknown Dungeon. Seu ataque é fraco.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x50) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\081.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x50) {
    TControl_SetText(Self->Edit3,"Elétrico");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x50) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x50) {
    TControl_SetText(Self->Edit5,"Level 30: Magneton");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x50) {
    TControl_SetText(Self->Edit6,"Power Plant");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x50) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Tackle\rLVL 21 Sonic Boom\rLVL 25 Thundershock\rLVL 29 Super Sonic\rLVL 35 Thunder Wave\rLVL 41 Swift\rLVL 47 Screech");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x51) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x51) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x51) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x51) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x51) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x51) {
    TControl_SetText(Self->Edit7,"082");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x51) {
    TControl_SetText(Self->Edit2,"Magneton");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x51) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Outro do tipo \"3 em 1\". Seu ataque continua fraco. Sua energia, defesa, velocidade e especial aumentaram.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x51) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\082.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x51) {
    TControl_SetText(Self->Edit3,"Elétrico");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x51) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x51) {
    TControl_SetText(Self->Edit5,"Não há");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x51) {
    TControl_SetText(Self->Edit6,"Power Plant e Unknown Dungeon");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x51) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Tackle\rLVL --- Sonic Boom\rLVL --- Thundershock\rLVL --- Super Sonic\rLVL 38 Thunder Wave\rLVL 46 Swift\rLVL 54 Screech");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x52) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x52) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x52) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x52) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x52) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x52) {
    TControl_SetText(Self->Edit7,"083");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x52) {
    TControl_SetText(Self->Edit2,"Farfetch´d");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x52) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Um pokémon-pássaro muito raro. Também pode ser achado trocando um Spearow em Viridian City.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x52) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\083.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x52) {
    TControl_SetText(Self->Edit3,"Normal / Voador");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x52) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x52) {
    TControl_SetText(Self->Edit5,"Não há");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x52) {
    TControl_SetText(Self->Edit6,"Cidade de Vermilion");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x52) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Peck\rLVL -- Sand-Attack\rLVL 07 Leer\rLVL 15 Fury Attack\rLVL 23 Swords Dance\rLVL 31 Agility\rLVL 39 Slash");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x53) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x53) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x53) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x53) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x53) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x53) {
    TControl_SetText(Self->Edit7,"084");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x53) {
    TControl_SetText(Self->Edit2,"Duduo");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x53) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Um pokémon voador. Pode ser achado na Safari Zone.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x53) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\084.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x53) {
    TControl_SetText(Self->Edit3,"Normal / Voador");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x53) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x53) {
    TControl_SetText(Self->Edit5,"Level 31: Dodrio");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x53) {
    TControl_SetText(Self->Edit6,"Rotas 16, 17, 18 e Safari Zone");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x53) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Peck\rLVL 20 Growl\rLVL 24 Fury Attack\rLVL 30 Drill Peck\rLVL 36 Rage\rLVL 40 Tri Attack\rLVL 44 Agility");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x54) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x54) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x54) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x54) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x54) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x54) {
    TControl_SetText(Self->Edit7,"085");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x54) {
    TControl_SetText(Self->Edit2,"Dodrio");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x54) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"No level 31, Doduo evolui para Dodrio. Este é outro pokémon do tipo \"3 em 1\", mas, no caso são três cabeças.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x54) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\085.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x54) {
    TControl_SetText(Self->Edit3,"Normal / Voador");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x54) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x54) {
    TControl_SetText(Self->Edit5,"Não há");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x54) {
    TControl_SetText(Self->Edit6,"Unknown Dungeon");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x54) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Peck\rLVL --- Growl\rLVL --- Fury Attack\rLVL --- Drill Peck\rLVL 39 Rage\rLVL 45 Tri Attack\rLVL 51 Agility");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x55) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x55) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x55) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x55) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x55) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x55) {
    TControl_SetText(Self->Edit7,"086");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x55) {
    TControl_SetText(Self->Edit2,"Seel");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x55) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Achado em poucos lugares como Cinnabar Islands e Seafoam Islands. É um pokémon da água. Mas seus ataques são baseados no gelo.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x55) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\086.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x55) {
    TControl_SetText(Self->Edit3,"Água / Gelo");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x55) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x55) {
    TControl_SetText(Self->Edit5,"Level 34: Dewgong");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x55) {
    TControl_SetText(Self->Edit6,"Ilhas Seafrom");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x55) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Headbutt\rLVL 30 Growl\rLVL 35 Aurora Beam\rLVL 40 Rest\rLVL 45 Take Down\rLVL 50 Ice Beam");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x56) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\5.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x56) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x56) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x56) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x56) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x56) {
    TControl_SetText(Self->Edit7,"087");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x56) {
    TControl_SetText(Self->Edit2,"Dewgong");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x56) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Atributos do Seel duplicaram. Um pokémon da água muito poderoso.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x56) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\087.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x56) {
    TControl_SetText(Self->Edit3,"Água / Gelo");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x56) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x56) {
    TControl_SetText(Self->Edit5,"Nào há");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x56) {
    TControl_SetText(Self->Edit6,"Ilhas Seafrom");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x56) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Headbutt\rLVL --- Growl\rLVL 35 Aurora Beam\rLVL 44 Rest\rLVL 50 Take Down\rLVL 56 Ice Beam");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x57) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x57) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x57) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x57) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x57) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x57) {
    TControl_SetText(Self->Edit7,"088");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x57) {
    TControl_SetText(Self->Edit2,"Grimer");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x57) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Seus atributos são horríveis, porém, sua energia é ótima. É um dos poucos pokémons do veneno.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x57) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\088.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x57) {
    TControl_SetText(Self->Edit3,"Veneno");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x57) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x57) {
    TControl_SetText(Self->Edit5,"Level 38: Muk");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x57) {
    TControl_SetText(Self->Edit6,"Pokémon House (Ilhas Cinnabar)");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x57) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Pound\rLVL --- Disable\rLVL 30 Poison Gas\rLVL 33 Minimize\rLVL 37 Sludge\rLVL 42 Harden\rLVL 48 Screech\rLVL 55 Acid Armor");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x58) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\5.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x58) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x58) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x58) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x58) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x58) {
    TControl_SetText(Self->Edit7,"089");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x58) {
    TControl_SetText(Self->Edit2,"Muk");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x58) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Quando Grimer chega no level 38, ele evolui para Muk. Ataques bons como o Acid Armor.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x58) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\089.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x58) {
    TControl_SetText(Self->Edit3,"Veneno");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x58) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x58) {
    TControl_SetText(Self->Edit5,"Não há");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x58) {
    TControl_SetText(Self->Edit6,"Pokémon House (Ilhas Cinnabar)");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x58) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Pound\rLVL --- Disable\rLVL --- Poison Gas\rLVL --- Minimize\rLVL --- Sludge\rLVL 45 Harden\rLVL 53 Screech\rLVL 60 Acid Armor");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x59) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x59) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x59) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x59) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x59) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x59) {
    TControl_SetText(Self->Edit7,"090");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x59) {
    TControl_SetText(Self->Edit2,"Shellder");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x59) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Comum em muitas partes do jogo. Seus atributos são fracos.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x59) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\090.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x59) {
    TControl_SetText(Self->Edit3,"Água");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x59) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x59) {
    TControl_SetText(Self->Edit5,"Water stone: Cloyster");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x59) {
    TControl_SetText(Self->Edit6,"Rotas 6, 11, Cidade de Vermilion, Cidade Cerulean e Ilhas Seafrom");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x59) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Tackle\rLVL --- Withdraw\rLVL 18 Supersonic\rLVL 23 Clamp\rLVL 30 Aurora Beam\rLVL 39 Leer\rLVL 50 Ice Beam");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x5a) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x5a) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x5a) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\5.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x5a) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x5a) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x5a) {
    TControl_SetText(Self->Edit7,"091");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x5a) {
    TControl_SetText(Self->Edit2,"Cloyster");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x5a) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Pokémon forte, muito difícil de derrotar. Sua defesa é excelente.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x5a) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\091.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x5a) {
    TControl_SetText(Self->Edit3,"Água / Gelo");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x5a) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x5a) {
    TControl_SetText(Self->Edit5,"Não há");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x5a) {
    TControl_SetText(Self->Edit6,"Evolução");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x5a) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Withdraw\rLVL --- Supersonic\rLVL --- Clamp\rLVL --- Aurora Beam\rLVL 50 Spike Cannon");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x5b) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x5b) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x5b) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x5b) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x5b) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x5b) {
    TControl_SetText(Self->Edit7,"092");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x5b) {
    TControl_SetText(Self->Edit2,"Gastly");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x5b) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Um dos poucos pokémons-fantasmas. Seus ataques normais e de luta são fracos.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x5b) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\092.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x5b) {
    TControl_SetText(Self->Edit3,"Fantasma");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x5b) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x5b) {
    TControl_SetText(Self->Edit5,"Level 25: Haunter / Trocado: Gengar");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x5b) {
    TControl_SetText(Self->Edit6,"Pokémon Tower (Cidade de Lavender)");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x5b) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Lick\rLVL --- Confuse Ray\rLVL --- Night Shade\rLVL 27 Hypnosis\rLVL 35 Dream Eater");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x5c) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x5c) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x5c) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x5c) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x5c) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x5c) {
    TControl_SetText(Self->Edit7,"093");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x5c) {
    TControl_SetText(Self->Edit2,"Haunter");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x5c) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Outro do tipo fastasma. Ele aprende o Dream Eater que põe o inimigo para dormir.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x5c) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\093.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x5c) {
    TControl_SetText(Self->Edit3,"Fantasma");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x5c) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x5c) {
    TControl_SetText(Self->Edit5,"Trocado: Gengar");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x5c) {
    TControl_SetText(Self->Edit6,"Pokémon Tower (Cidade de Lavender)");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x5c) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Lick\rLVL --- Confuse Ray\rLVL --- Night Shade\rLVL 29 Hypnosis\rLVL 38 Dream Eater");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x5d) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x5d) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x5d) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x5d) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x5d) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x5d) {
    TControl_SetText(Self->Edit7,"094");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x5d) {
    TControl_SetText(Self->Edit2,"Gengar");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x5d) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Você só consegue este trocando com o uso do Cabo Link com alguém. Outro pokémon do tipo fantasma.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x5d) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\094.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x5d) {
    TControl_SetText(Self->Edit3,"Fantasma");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x5d) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x5d) {
    TControl_SetText(Self->Edit5,"Não há");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x5d) {
    TControl_SetText(Self->Edit6,"Evolução");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x5d) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Lick\rLVL --- Confuse Ray\rLVL --- Night Shade\rLVL 29 Hypnosis\rLVL 38 Dream Eater");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x5e) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x5e) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x5e) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\5.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x5e) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x5e) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x5e) {
    TControl_SetText(Self->Edit7,"095");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x5e) {
    TControl_SetText(Self->Edit2,"Onix");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x5e) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Um pokém muito alto e forte. Sua defesa é excelente. Vulnerável contra pokémons da água e grama.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x5e) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\095.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x5e) {
    TControl_SetText(Self->Edit3,"Pedra / Terra");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x5e) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x5e) {
    TControl_SetText(Self->Edit5,"Não há");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x5e) {
    TControl_SetText(Self->Edit6,"Túnel de Pedra e Victory Road");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x5e) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Tackle\rLVL --- Screech\rLVL 15 Bind\rLVL 19 Rock Throw\rLVL 25 Rage\rLVL 33 Slam\rLVL 43 Harden");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x5f) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x5f) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x5f) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x5f) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x5f) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x5f) {
    TControl_SetText(Self->Edit7,"096");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x5f) {
    TControl_SetText(Self->Edit2,"Drowzee");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x5f) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Um pokémon fraco. Porém, seus movimentos psíquicos são bons.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x5f) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\096.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x5f) {
    TControl_SetText(Self->Edit3,"Psíquico");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x5f) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x5f) {
    TControl_SetText(Self->Edit5,"Level 26: Hypno");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x5f) {
    TControl_SetText(Self->Edit6,"Rota 11");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x5f) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Pound\rLVL --- Hypnosis\rLVL 12 Disable\rLVL 17 Confusion\rLVL 24 Headbutt\rLVL 29 Poison Gas\rLVL 32 Psychic\rLVL 37 Meditate");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x60) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\5.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x60) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x60) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x60) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x60) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x60) {
    TControl_SetText(Self->Edit7,"097");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x60) {
    TControl_SetText(Self->Edit2,"Hypno");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x60) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Seus movimentos psíquicos fazem o inimigo dormir. Enquanto isso, ele os ataca.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x60) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\097.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x60) {
    TControl_SetText(Self->Edit3,"Psíquico");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x60) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x60) {
    TControl_SetText(Self->Edit5,"Não há");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x60) {
    TControl_SetText(Self->Edit6,"Unknown Dungeon");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x60) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Pound\rLVL --- Hypnosis\rLVL --- Disable\rLVL --- Confusion\rLVL --- Headbutt\rLVL 33 Poison Gas\rLVL 37 Psychic\rLVL 43 Meditate");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x61) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x61) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x61) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x61) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x61) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x61) {
    TControl_SetText(Self->Edit7,"098");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x61) {
    TControl_SetText(Self->Edit2,"Krabby");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x61) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"É achado em muitos lugares do game. Use a Super Rod para pescá-lo e pegá-lo.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x61) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\098.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x61) {
    TControl_SetText(Self->Edit3,"Água");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x61) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x61) {
    TControl_SetText(Self->Edit5,"Level 28: Kingler");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x61) {
    TControl_SetText(Self->Edit6,"Rotas 4, 6, 11, 12, 13, 17, 18, 24, 25 e Cidade Fuchsia");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x61) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Bubble\rLVL --- Leer\rLVL 20 Vice Grip\rLVL 25 Guillotine\rLVL 30 Stomp\rLVL 35 Crab Hammer\rLVL 40 Harden");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x62) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x62) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x62) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x62) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x62) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x62) {
    TControl_SetText(Self->Edit7,"099");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x62) {
    TControl_SetText(Self->Edit2,"Kingler");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x62) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"É muito maior e mais poderoso do que Krabby. Pegue ele em outros lugares ou evolua-o do Krabby.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x62) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\099.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x62) {
    TControl_SetText(Self->Edit3,"Água");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x62) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x62) {
    TControl_SetText(Self->Edit5,"Não há");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x62) {
    TControl_SetText(Self->Edit6,"Rota 23, Unknown Dungeon, Ilhas Seafrom (pescando)");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x62) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Bubble\rLVL --- Leer\rLVL --- Vice Grip\rLVL --- Guillotine\rLVL 34 Stomp\rLVL 42 Crab Hammer\rLVL 49 Harden");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 99) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 99) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 99) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 99) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 99) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 99) {
    TControl_SetText(Self->Edit7,"100");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 99) {
    TControl_SetText(Self->Edit2,"Voltorb");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 99) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"O pokémon nº 100. Ele tem movimentos bons como o Screech e o Explosion.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 99) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\100.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 99) {
    TControl_SetText(Self->Edit3,"Elétrico");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 99) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 99) {
    TControl_SetText(Self->Edit5,"Level 30: Electrode");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 99) {
    TControl_SetText(Self->Edit6,"Rota 10 e Power Plant");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 99) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Tackle\rLVL --- Screech\rLVL 22 Self Destruct\rLVL 29 Light Screen\rLVL 36 Swift\rLVL 43 Explosion");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 100) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 100) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 100) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 100) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\5.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 100) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 100) {
    TControl_SetText(Self->Edit7,"101");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 100) {
    TControl_SetText(Self->Edit2,"Electrode");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 100) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Evolução do Voltorb. Ele pode atacar muitas vezes antes de um inimigo tocar nele.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 100) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\101.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 100) {
    TControl_SetText(Self->Edit3,"Elétrico");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 100) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 100) {
    TControl_SetText(Self->Edit5,"Não há");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 100) {
    TControl_SetText(Self->Edit6,"Caverna de Cerulean");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 100) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Tackle\rLVL --- Screech\rLVL --- Self Destruct\rLVL --- Light Screen\rLVL 40 Swift\rLVL 50 Explosion");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x65) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x65) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x65) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x65) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x65) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x65) {
    TControl_SetText(Self->Edit7,"102");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x65) {
    TControl_SetText(Self->Edit2,"Exeggcute");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x65) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Pode ser achado somente na Safari Zone. Quando você pega um, pode evoluí-lo com a Leafstone.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x65) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\102.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x65) {
    TControl_SetText(Self->Edit3,"Grama / Psíquico");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x65) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x65) {
    TControl_SetText(Self->Edit5,"Leaf Stone: Exegguntor");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x65) {
    TControl_SetText(Self->Edit6,"Safari Zone");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x65) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Barrage\rLVL --- Hypnosis\rLVL 25 Reflect\rLVL 28 Leech Seed\rLVL 32 Stun Spore\rLVL 37 Poison Powder\rLVL 42 Solar Beam\rLVL 48 Sleep Powder");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x66) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\5.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x66) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x66) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x66) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x66) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x66) {
    TControl_SetText(Self->Edit7,"103");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x66) {
    TControl_SetText(Self->Edit2,"Exeggcutor");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x66) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Evolução do Exeggcute. Ele é extremamente poderoso.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x66) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\103.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x66) {
    TControl_SetText(Self->Edit3,"Grama / Psíquico");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x66) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x66) {
    TControl_SetText(Self->Edit5,"Não há");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x66) {
    TControl_SetText(Self->Edit6,"Evolução");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x66) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Barrage\rLVL --- Hypnosis\rLVL 25 Reflect\rLVL 28 Leech Seed");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x67) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x67) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x67) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x67) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x67) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x67) {
    TControl_SetText(Self->Edit7,"104");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x67) {
    TControl_SetText(Self->Edit2,"Cubone");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x67) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Muito efetivo contra pokémons normais. Não se sai bem contra pokémons voadores.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x67) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\104.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x67) {
    TControl_SetText(Self->Edit3,"Terra");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x67) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x67) {
    TControl_SetText(Self->Edit5,"Level 28: Marowak");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x67) {
    TControl_SetText(Self->Edit6,"Pokémon Tower (Cidade de Lavender)");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x67) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Bone Club\rLVL --- Growl\rLVL 25 Leer\rLVL 31 Focus Energy\rLVL 38 Thrash\rLVL 43 Bonemerang\rLVL 46 Rage");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x68) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\5.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x68) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x68) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\5.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x68) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x68) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x68) {
    TControl_SetText(Self->Edit7,"105");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x68) {
    TControl_SetText(Self->Edit2,"Marowak");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x68) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Evolução do Cubone. Ele pode, literalmente, esmagar um oponente.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x68) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\105.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x68) {
    TControl_SetText(Self->Edit3,"Terra");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x68) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x68) {
    TControl_SetText(Self->Edit5,"Não há");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x68) {
    TControl_SetText(Self->Edit6,"Victory Road e Unknown Dungeon");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x68) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Bone Club\rLVL --- Growl\rLVL --- Leer\rLVL 33 Focus Energy\rLVL 41 Thrash\rLVL 48 Bonemerang\rLVL 55 Rage");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x69) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x69) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x69) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x69) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x69) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x69) {
    TControl_SetText(Self->Edit7,"106");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x69) {
    TControl_SetText(Self->Edit2,"Hitmonlee");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x69) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Um dos poucos pokémons lutadores. Ele é um pokémon-chutador.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x69) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\106.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x69) {
    TControl_SetText(Self->Edit3,"Lutador");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x69) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x69) {
    TControl_SetText(Self->Edit5,"Não há");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x69) {
    TControl_SetText(Self->Edit6,"Cidade de Saffron");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x69) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Double Kick\rLVL --- Meditate\rLVL 33 Rolling Kick\rLVL 38 Jump Kick\rLVL 43 Focus Energy\rLVL 48 Hi Jump Kick\rLVL 53 Mega Kick");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x6a) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\5.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x6a) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x6a) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x6a) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x6a) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x6a) {
    TControl_SetText(Self->Edit7,"107");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x6a) {
    TControl_SetText(Self->Edit2,"Hitmonchan");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x6a) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Outro pokémon lutador. Só que esse soqueia os adversários.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x6a) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\107.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x6a) {
    TControl_SetText(Self->Edit3,"Lutador");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x6a) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x6a) {
    TControl_SetText(Self->Edit5,"Não há");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x6a) {
    TControl_SetText(Self->Edit6,"Cidade de Saffron");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x6a) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Comet Punch\rLVL --- Agility\rLVL 33 Fire Punch\rLVL 38 Ice Punch\rLVL 43 Thunder Punch\rLVL 48 Mega Punch\rLVL 53 Counter");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x6b) {
    TControl_SetText(Self->Edit7,"108");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x6b) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\5.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x6b) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x6b) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x6b) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x6b) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x6b) {
    TControl_SetText(Self->Edit2,"Lickitung");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x6b) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Achado trocando pelo Slowbro na Route 18. Não muito poderoso. Não é uma boa escolha para o seu time de 6.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x6b) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\108.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x6b) {
    TControl_SetText(Self->Edit3,"Normal");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x6b) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x6b) {
    TControl_SetText(Self->Edit5,"Não há");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x6b) {
    TControl_SetText(Self->Edit6,"Rota 18");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x6b) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Wrap\rLVL --- Supersonic\rLVL 07 Stomp\rLVL 15 Disable\rLVL 23 Defense Curl\rLVL 31 Slam\rLVL 39 Screech");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x6c) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x6c) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x6c) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x6c) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x6c) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x6c) {
    TControl_SetText(Self->Edit7,"109");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x6c) {
    TControl_SetText(Self->Edit2,"Koffing");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x6c) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Koffing é um pokémon gasoso. Achado somente na Cinnabar Islands Mansion.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x6c) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\109.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x6c) {
    TControl_SetText(Self->Edit3,"Veneno");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x6c) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x6c) {
    TControl_SetText(Self->Edit5,"Level 35: Weezing");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x6c) {
    TControl_SetText(Self->Edit6,"Pokémon House (Ilhas Cinnabar)");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x6c) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Tackle\rLVL --- Smog\rLVL 32 Sludge\rLVL 37 Smoke Screen\rLVL 40 Self Destruct\rLVL 45 Haze\rLVL 48 Explosion");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x6d) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x6d) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x6d) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x6d) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x6d) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x6d) {
    TControl_SetText(Self->Edit7,"110");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x6d) {
    TControl_SetText(Self->Edit2,"Weezing");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x6d) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Evolução do Koffing. Outro do tipo \"3 em 1\". Ele so pode ser achado na Cinnabar Islands Mansion.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x6d) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\110.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x6d) {
    TControl_SetText(Self->Edit3,"Veneno");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x6d) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x6d) {
    TControl_SetText(Self->Edit5,"Não há");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x6d) {
    TControl_SetText(Self->Edit6,"Pokémon House (Ilhas Cinnabar)");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x6d) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Tackle\rLVL --- Smog\rLVL --- Sludge\rLVL 39 Smoke Screen\rLVL 43 Self Destruct\rLVL 49 Haze\rLVL 53 Explosion");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x6e) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\5.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x6e) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x6e) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x6e) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x6e) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x6e) {
    TControl_SetText(Self->Edit7,"111");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x6e) {
    TControl_SetText(Self->Edit2,"Rhyhorn");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x6e) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Achado somente na Safari Zone. Energia e defesa bons.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x6e) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\111.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x6e) {
    TControl_SetText(Self->Edit3,"Terra / Pedra");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x6e) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x6e) {
    TControl_SetText(Self->Edit5,"Level 42: Rhydon");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x6e) {
    TControl_SetText(Self->Edit6,"Safari Zone");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x6e) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Horn Attack\rLVL 30 Stomp\rLVL 35 Tail Whip\rLVL 40 Fury Attack\rLVL 45 Horn Drill\rLVL 50 Leer\rLVL 55 Take Down");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x6f) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\5.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x6f) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x6f) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x6f) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x6f) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x6f) {
    TControl_SetText(Self->Edit7,"112");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x6f) {
    TControl_SetText(Self->Edit2,"Rhydon");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x6f) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Evolução do Rhyhorn. Tem vários movimentos como Leer e o Take Down.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x6f) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\112.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x6f) {
    TControl_SetText(Self->Edit3,"Terra / Pedra");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x6f) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x6f) {
    TControl_SetText(Self->Edit5,"Não há");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x6f) {
    TControl_SetText(Self->Edit6,"Unknown Dungeon");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x6f) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Horn Attack\rLVL --- Stomp\rLVL --- Tail Whip\rLVL --- Fury Attack\rLVL 48 Horn Drill\rLVL 55 Leer\rLVL 64 Take Down");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x70) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\5.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x70) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x70) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x70) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x70) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x70) {
    TControl_SetText(Self->Edit7,"113");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x70) {
    TControl_SetText(Self->Edit2,"Chansey");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x70) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Um pokémon muito fraco. Um pokémon horrível >:o/");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x70) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\113.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x70) {
    TControl_SetText(Self->Edit3,"Normal");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x70) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x70) {
    TControl_SetText(Self->Edit5,"Não há");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x70) {
    TControl_SetText(Self->Edit6,"Safari Zone e Unknown Dungeon");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x70) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Pound\rLVL --- Doubleslap\rLVL 24 Sing\rLVL 30 Growl\rLVL 38 Minimize\rLVL 44 Defense Curl\rLVL 48 Light Screen\rLVL 54 Double Edge");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x71) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x71) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x71) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x71) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x71) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x71) {
    TControl_SetText(Self->Edit7,"114");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x71) {
    TControl_SetText(Self->Edit2,"Tangela");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x71) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Muitas pessoas dizem que sua pele parace espaguete. Ele não é forte, mas, sua defesa é excelente.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x71) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\114.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x71) {
    TControl_SetText(Self->Edit3,"Grama");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x71) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x71) {
    TControl_SetText(Self->Edit5,"Não há");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x71) {
    TControl_SetText(Self->Edit6,"Rota 21");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x71) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Constrict\rLVL --- Bind\rLVL 29 Absorb\rLVL 32 Poison Powder\rLVL 36 Stun Spore\rLVL 39 Sleep Powder\rLVL 45 Slam\rLVL 49 Growth");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x72) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\5.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x72) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x72) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x72) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x72) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x72) {
    TControl_SetText(Self->Edit7,"115");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x72) {
    TControl_SetText(Self->Edit2,"Kangaskhan");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x72) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Um favorito para muitos. Achado somente na Safari Zone, difícil de achar e de pegar.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x72) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\115.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x72) {
    TControl_SetText(Self->Edit3,"Normal");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x72) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x72) {
    TControl_SetText(Self->Edit5,"Não há");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x72) {
    TControl_SetText(Self->Edit6,"Safari Zone");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x72) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Comet Punch\rLVL --- Rage\rLVL 26 Bite\rLVL 31 Tail Whip\rLVL 36 Mega Punch\rLVL 41 Leer\rLVL 46 Dizzy Punch");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x73) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x73) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x73) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x73) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x73) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x73) {
    TControl_SetText(Self->Edit7,"116");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x73) {
    TControl_SetText(Self->Edit2,"Horsea");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x73) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Um pequeno pokémon da água. Muito comum nos lagos do sul, como o Seafoam Islands e Cinnabar Islands.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x73) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\116.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x73) {
    TControl_SetText(Self->Edit3,"Água");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x73) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x73) {
    TControl_SetText(Self->Edit5,"Level 32: Seadra");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x73) {
    TControl_SetText(Self->Edit6,"Ilha Cinnabar, Rotas 19, 20, 21 e Ilhas Seafrom (pescando)");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x73) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Bubble\rLVL 19 Smoke Screen\rLVL 24 Leer\rLVL 30 Water Gun\rLVL 37 Agility\rLVL 45 Hydro Pump");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x74) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x74) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x74) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x74) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x74) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x74) {
    TControl_SetText(Self->Edit7,"117");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x74) {
    TControl_SetText(Self->Edit2,"Seadra");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x74) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Um pokémon muito efetivo para quase todos os tipos de pokémons. Seus atributos são todos bons.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x74) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\117.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x74) {
    TControl_SetText(Self->Edit3,"Água");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x74) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x74) {
    TControl_SetText(Self->Edit5,"Não há");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x74) {
    TControl_SetText(Self->Edit6,"Unknown Dungeon, Rota 23 e Ilhas Seafrom (pescando)");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x74) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Bubble\rLVL --- Smoke Screen\rLVL --- Leer\rLVL --- Water Gun\rLVL 41 Agility\rLVL 52 Hydro Pump");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x75) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x75) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x75) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x75) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x75) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x75) {
    TControl_SetText(Self->Edit7,"118");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x75) {
    TControl_SetText(Self->Edit2,"Goldeen");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x75) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Use a Super Rod para pescá-lo e achá-lo. Evolui no level 33 para Seaking.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x75) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\118.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x75) {
    TControl_SetText(Self->Edit3,"Água");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x75) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x75) {
    TControl_SetText(Self->Edit5,"Level 33: Seaking");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x75) {
    TControl_SetText(Self->Edit6,"Rotas 4, 12, 13, 17, 18, 19, 20, 21, 22, 24, 25, Cidade de Cerulean");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x75) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Peck\rLVL --- Tail Whip\rLVL 19 Super Sonic\rLVL 24 Horn Attack\rLVL 30 Fury Attack\rLVL 37 Waterfall\rLVL 45 Horn Drill\rLVL 54 Agility");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x76) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\5.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x76) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x76) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x76) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x76) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x76) {
    TControl_SetText(Self->Edit7,"119");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x76) {
    TControl_SetText(Self->Edit2,"Seaking");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x76) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Evolução do Goldeen. Seus muitos ataques são bons.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x76) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\119.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x76) {
    TControl_SetText(Self->Edit3,"Água");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x76) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x76) {
    TControl_SetText(Self->Edit5,"Não há");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x76) {
    TControl_SetText(Self->Edit6,"Cidade de Fuchsia, Rota 23 e Unknown Dungeon (pescando)");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x76) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Peck\rLVL --- Tail Whip\rLVL --- Super Sonic\rLVL --- Horn Attack\rLVL --- Fury Attack\rLVL 39 Waterfall\rLVL 48 Horn Drill\rLVL 54 Agility");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x77) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x77) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x77) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x77) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x77) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x77) {
    TControl_SetText(Self->Edit7,"120");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x77) {
    TControl_SetText(Self->Edit2,"Staryu");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x77) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Achado nos oceanos do sul. Use a Waterstone para evoluí-lo.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x77) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\120.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x77) {
    TControl_SetText(Self->Edit3,"Água");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x77) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x77) {
    TControl_SetText(Self->Edit5,"Water Stone: Starmie");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x77) {
    TControl_SetText(Self->Edit6,"Rotas 19, 20, 21, Ilhas Seafrom e Ilha Cinnabar (pescando)");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x77) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Tackle\rLVL --- Water Gun\rLVL --- Harden\rLVL --- Recover\rLVL --- Swift\rLVL 39 Minimize\rLVL 48 Light Screen\rLVL 54 Hydro Pump");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x78) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x78) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x78) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x78) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x78) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x78) {
    TControl_SetText(Self->Edit7,"121");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x78) {
    TControl_SetText(Self->Edit2,"Starmie");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x78) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Conseguido somente usando a Waterstone em Staryu. Relativamente poderoso e efetivo.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x78) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\121.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x78) {
    TControl_SetText(Self->Edit3,"Água / Psíquico");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x78) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x78) {
    TControl_SetText(Self->Edit5,"Não há");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x78) {
    TControl_SetText(Self->Edit6,"Evolução");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x78) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Tackle\rLVL --- Water Gun\rLVL --- Harden");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x79) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x79) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x79) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x79) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x79) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x79) {
    TControl_SetText(Self->Edit7,"122");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x79) {
    TControl_SetText(Self->Edit2,"Mr.Mime");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x79) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Você pode pegar um Mr. Mime trocando um Abra com outra pessoa no game. Ele é muito amigável.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x79) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\122.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x79) {
    TControl_SetText(Self->Edit3,"Psíquico");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x79) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x79) {
    TControl_SetText(Self->Edit5,"Não há");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x79) {
    TControl_SetText(Self->Edit6,"Rota 2");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x79) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Confusion\rLVL --- Barrier\rLVL 23 Light Screen\rLVL 31 Doubleslap\rLVL 39 Meditate\rLVL 47 Substitute");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x7a) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x7a) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x7a) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x7a) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x7a) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x7a) {
    TControl_SetText(Self->Edit7,"123");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x7a) {
    TControl_SetText(Self->Edit2,"Scyther");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x7a) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Um pokémon muito poderoso. Dá para notar pelos atributos. Somente na versão vermelha ele é encontrado. Pode ser trocado por moedas na Game Room ou achado na Safari Zone.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x7a) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\123.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x7a) {
    TControl_SetText(Self->Edit3,"Inseto / Voador");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x7a) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x7a) {
    TControl_SetText(Self->Edit5,"Não há");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x7a) {
    TControl_SetText(Self->Edit6,"Safari Zone e Coin Exchange (Cidade de Celadon)");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x7a) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Quick Attack\rLVL 17 Leer\rLVL 20 Focus Energy\rLVL 24 Double Team\rLVL 29 Slash\rLVL 35 Swords Dance\rLVL 42 Agility");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x7b) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x7b) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x7b) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x7b) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x7b) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x7b) {
    TControl_SetText(Self->Edit7,"124");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x7b) {
    TControl_SetText(Self->Edit2,"Jynx");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x7b) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Muitas pessoas não gostam desse pokémon por causa de sua feiura. Porém, ele tem vários movimentos como o Blizzard. Ele aprende outros também como o Psychic. Pegue-o na Cerulean City trocando um Poliwhirl.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x7b) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\124.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x7b) {
    TControl_SetText(Self->Edit3,"Gelo / Psíquico");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x7b) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x7b) {
    TControl_SetText(Self->Edit5,"Não há");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x7b) {
    TControl_SetText(Self->Edit6,"Cidade de Cerulean");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x7b) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Pound\rLVL --- Lovely Kiss\rLVL 15 Sing\rLVL 23 Doubleslap\rLVL 31 Ice Punch\rLVL 39 Meditate");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x7c) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x7c) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x7c) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x7c) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x7c) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x7c) {
    TControl_SetText(Self->Edit7,"125");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x7c) {
    TControl_SetText(Self->Edit2,"Electabuzz");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x7c) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Um pokémon muito raro e formidável. Achado somente na Powerplant da versão vermelha do game.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x7c) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\125.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x7c) {
    TControl_SetText(Self->Edit3,"Elétrico");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x7c) {
    TControl_SetText(Self->Edit4,"Vermelha (Somente)");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x7c) {
    TControl_SetText(Self->Edit5,"Não há");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x7c) {
    TControl_SetText(Self->Edit6,"Power Plant");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x7c) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Quick Attack\rLVL 17 Leer\rLVL 20 Thundershock\rLVL 24 Screech\rLVL 29 Thunderpunch\rLVL 35 Light Screen\rLVL 42 Thunder");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x7d) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x7d) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x7d) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x7d) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x7d) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x7d) {
    TControl_SetText(Self->Edit7,"126");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x7d) {
    TControl_SetText(Self->Edit2,"Magmar");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x7d) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Muito difícil de achar e difissílimo de pegar. Ele é muito poderoso.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x7d) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\126.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x7d) {
    TControl_SetText(Self->Edit3,"Fogo");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x7d) {
    TControl_SetText(Self->Edit4,"Azul (Somente)");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x7d) {
    TControl_SetText(Self->Edit5,"Não há");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x7d) {
    TControl_SetText(Self->Edit6,"Pokémon House (Ilha Cinnabar)");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x7d) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Ember\rLVL 36 Leer\rLVL 39 Confuse Ray\rLVL 43 Fire Punch\rLVL 48 Smoke Screen\rLVL 52 Smog\rLVL 55 Flamethrower");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x7e) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x7e) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x7e) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x7e) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x7e) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x7e) {
    TControl_SetText(Self->Edit7,"127");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x7e) {
    TControl_SetText(Self->Edit2,"Pinsir");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x7e) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Achado somente na Safari Zone da versão azul do game ou trocando moedas na Game Room - Exchange Corner.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x7e) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\127.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x7e) {
    TControl_SetText(Self->Edit3,"Inseto");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x7e) {
    TControl_SetText(Self->Edit4,"Azul (Somente)");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x7e) {
    TControl_SetText(Self->Edit5,"Não há");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x7e) {
    TControl_SetText(Self->Edit6,"Safari Zone, Coin Exchange (Cidade de Celadon)");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x7e) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Vicegrip\rLVL 25 Seismic Toss\rLVL 30 Guillotine\rLVL 36 Focus Energy\rLVL 43 Harden\rLVL 49 Slash\rLVL 54 Swords Dance");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x7f) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\5.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x7f) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x7f) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x7f) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x7f) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x7f) {
    TControl_SetText(Self->Edit7,"128");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x7f) {
    TControl_SetText(Self->Edit2,"Tauros");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x7f) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Este pokémon-touro é muito difícil de achar na Safari Zone e mais difícil ainda de pegar. Ele é poderoso o bastante para agüentar uma pokébola de ínicio. Pegue um para o seu time.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x7f) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\128.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x7f) {
    TControl_SetText(Self->Edit3,"Normal");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x7f) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x7f) {
    TControl_SetText(Self->Edit5,"Não há");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x7f) {
    TControl_SetText(Self->Edit6,"Safari Zone");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x7f) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Tackle\rLVL 21 Stomp\rLVL 28 Tail Whip\rLVL 35 Leer\rLVL 44 Rage\rLVL 51 Take Down");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x80) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x80) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x80) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x80) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x80) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x80) {
    TControl_SetText(Self->Edit7,"129");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x80) {
    TControl_SetText(Self->Edit2,"Magikarp");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x80) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Fraquíssimo pokémon. Suas técnicas são horríveis. Porém, no level 20 ele se transformará no temido Gyarados.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x80) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\129.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x80) {
    TControl_SetText(Self->Edit3,"Água");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x80) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x80) {
    TControl_SetText(Self->Edit5,"Level 20: Gyarados");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x80) {
    TControl_SetText(Self->Edit6,"Rotas 12, 13, 17, 18 e Cidade de Fuchsia (pescando)");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x80) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Splash\rLVL 15 Tackle");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x81) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\5.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x81) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x81) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x81) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x81) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x81) {
    TControl_SetText(Self->Edit7,"130");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x81) {
    TControl_SetText(Self->Edit2,"Gyarados");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x81) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Um pokémon muito popular e procurado. Um dos poucos dragões raros do game. Movimentos devastadores com Hydro Pump e Hyper Beam. Ótimo pokémon.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x81) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\130.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x81) {
    TControl_SetText(Self->Edit3,"Água / Voador");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x81) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x81) {
    TControl_SetText(Self->Edit5,"Não há");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x81) {
    TControl_SetText(Self->Edit6,"Evolução");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x81) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL 20 Bite\rLVL 25 Dragon Rage\rLVL 32 Leer\rLVL 41 Hydro Pump\rLVL 52 Hyper Beam");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x82) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\5.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x82) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x82) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x82) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x82) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x82) {
    TControl_SetText(Self->Edit7,"131");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x82) {
    TControl_SetText(Self->Edit2,"Lapras");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x82) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Pokémon conhecido como \"o cavalo-marinho\". Além de muito útil, ele é poderoso e pode atravessar a água com seu movimento Surf. É indispensável ter um destes no time.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x82) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\131.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x82) {
    TControl_SetText(Self->Edit3,"Água / Gelo");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x82) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x82) {
    TControl_SetText(Self->Edit5,"Não há");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x82) {
    TControl_SetText(Self->Edit6,"Cidade de Saffron");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x82) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Water Gun\rLVL --- Growl\rLVL 16 Sing\rLVL 20 Mist\rLVL 25 Body Slam\rLVL 31 Confuse Ray\rLVL 38 Ice Beam\rLVL 46 Hydro Pump");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x83) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x83) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x83) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x83) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x83) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x83) {
    TControl_SetText(Self->Edit7,"132");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x83) {
    TControl_SetText(Self->Edit2,"Ditto");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x83) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Um pokémon muito especial. Sua única técnica, o Transform, faz ele virar qualquer pokémon (que ele esteja batalhando).");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x83) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\132.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x83) {
    TControl_SetText(Self->Edit3,"Normal");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x83) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x83) {
    TControl_SetText(Self->Edit5,"Não há");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x83) {
    TControl_SetText(Self->Edit6,"Rotas 13, 14, 15, 23 e Unknown Dungeon");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x83) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Transform");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x84) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x84) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x84) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x84) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x84) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x84) {
    TControl_SetText(Self->Edit7,"133");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x84) {
    TControl_SetText(Self->Edit2,"Eevee");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x84) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"O único pokémon que pode evoluir em três pokémons diferentes. Com a Waterstone ele vira o Vaporeon. Com a Thunderstone, ele virá o Jolteon. E, com a Firestone, ele vira o Flareon.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x84) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\133.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x84) {
    TControl_SetText(Self->Edit3,"Normal");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x84) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x84) {
    TControl_SetText(Self->Edit5,"ThunderStone: Jolteon / WaterStone: Vaporeon / FireStone: Flareon");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x84) {
    TControl_SetText(Self->Edit6,"Mansão Celadon (Cidade de Celadon)");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x84) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Tackle\rLVL --- Sand-Attack\rLVL 27 Quick Attack\rLVL 31 Tail Whip\rLVL 37 Bite\rLVL 45 Take Down");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x85) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\5.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x85) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x85) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x85) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x85) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x85) {
    TControl_SetText(Self->Edit7,"134");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x85) {
    TControl_SetText(Self->Edit2,"Vaporeon");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x85) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Evoluído do Eevee com a Waterstone. É poderoso além de ágil. Seus movimentos incluem Mist e o Hydro Pump.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x85) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\134.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x85) {
    TControl_SetText(Self->Edit3,"Água");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x85) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x85) {
    TControl_SetText(Self->Edit5,"Não há");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x85) {
    TControl_SetText(Self->Edit6,"Evolução");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x85) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Tackle\rLVL --- Sand-Attack\rLVL 27 Quick Attack\rLVL 31 Water Gun\rLVL 37 Tail Whip\rLVL 40 Bite\rLVL 42 Acid Armor\rLVL 44 Haze\rLVL 48 Mist\rLVL 54 Hydro Pump");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x86) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x86) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x86) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x86) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x86) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x86) {
    TControl_SetText(Self->Edit7,"135");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x86) {
    TControl_SetText(Self->Edit2,"Jolteon");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x86) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Evoluído do Eevee com a Thunderstone. Ele é muito poderoso além de ágil. Seus movimentos incluem Pin Missile e Thunder.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x86) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\135.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x86) {
    TControl_SetText(Self->Edit3,"Elétrico");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x86) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x86) {
    TControl_SetText(Self->Edit5,"Não há");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x86) {
    TControl_SetText(Self->Edit6,"Evolução");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x86) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Tackle\rLVL --- Sand-Attack\rLVL 27 Quick Attack\rLVL 31 Thundershock\rLVL 37 Tail Whip\rLVL 40 Thunderwave\rLVL 42 Double Kick\rLVL 44 Agility\rLVL 48 Pin Missile\rLVL 54 Thunder");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x87) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x87) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x87) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x87) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x87) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x87) {
    TControl_SetText(Self->Edit7,"136");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x87) {
    TControl_SetText(Self->Edit2,"Flareon");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x87) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Evoluído do Eevee com a Firestone. Muito poderoso mas, lento. Seus movimentos incluem Fire Spin e Flame Thrower.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x87) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\136.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x87) {
    TControl_SetText(Self->Edit3,"Fogo");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x87) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x87) {
    TControl_SetText(Self->Edit5,"Não há");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x87) {
    TControl_SetText(Self->Edit6,"Evolução");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x87) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Tackle\rLVL --- Sand-Attack\rLVL 27 Quick Attack\rLVL 31 Ember\rLVL 37 Tail Whip\rLVL 40 Bite\rLVL 42 Leer\rLVL 44 Fire Spin\rLVL 48 Rage\rLVL 54 Flame Thrower");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x88) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x88) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x88) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x88) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x88) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x88) {
    TControl_SetText(Self->Edit7,"137");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x88) {
    TControl_SetText(Self->Edit2,"Porygon");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x88) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Extremamente raro. Você pode conseguí-lo trocando por moedas no Game Room no Exchange Corner.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x88) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\137.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x88) {
    TControl_SetText(Self->Edit3,"Normal");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x88) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x88) {
    TControl_SetText(Self->Edit5,"Não há");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x88) {
    TControl_SetText(Self->Edit6,"Coin Exchange (Cidade de Celadon)");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x88) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Tackle\rLVL --- Sharpen\rLVL --- Conversion\rLVL 23 Psybeam\rLVL 28 Harden\rLVL 35 Agility\rLVL 42 Tri Attack");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x89) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x89) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x89) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x89) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x89) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x89) {
    TControl_SetText(Self->Edit7,"138");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x89) {
    TControl_SetText(Self->Edit2,"Omanyte");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x89) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Um pokémon extinto ressucitado do Helix Fossil. Evolui no level 40 para Omastar.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x89) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\138.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x89) {
    TControl_SetText(Self->Edit3,"Pedra / Água");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x89) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x89) {
    TControl_SetText(Self->Edit5,"Level 40: Omastar");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x89) {
    TControl_SetText(Self->Edit6,"Helix Fossil (Montanha da Lua)");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x89) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Water Gun\rLVL --- Withdraw\rLVL 34 Horn Attack\rLVL 39 Leer\rLVL 44 Spike Cannon\rLVL 49 Hydro Pump");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x8a) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x8a) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x8a) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x8a) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x8a) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x8a) {
    TControl_SetText(Self->Edit7,"139");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x8a) {
    TControl_SetText(Self->Edit2,"Omastar");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x8a) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Usa ataques de água poderosos. Ataques como Hydro Pump e Spike Cannon fazem deste pokémon uma boa escolha.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x8a) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\139.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x8a) {
    TControl_SetText(Self->Edit3,"Pedra / Água");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x8a) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x8a) {
    TControl_SetText(Self->Edit5,"Não há");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x8a) {
    TControl_SetText(Self->Edit6,"Evolução");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x8a) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Water Gun\rLVL --- Withdraw\rLVL --- Horn Attack\rLVL --- Leer\rLVL 46 Spike Cannon\rLVL 53 Hydro Pump");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x8b) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x8b) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x8b) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x8b) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x8b) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x8b) {
    TControl_SetText(Self->Edit7,"140");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x8b) {
    TControl_SetText(Self->Edit2,"Kabuto");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x8b) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Um pokémon extinto ressucitado do Dome Fossil. Evolui no level 40 para Kabutops.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x8b) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\140.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x8b) {
    TControl_SetText(Self->Edit3,"Pedra / Água");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x8b) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x8b) {
    TControl_SetText(Self->Edit5,"Level 40: Kabutops");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x8b) {
    TControl_SetText(Self->Edit6,"Dome Fossil (Montanha da Lua)");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x8b) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Scratch\rLVL --- Harden\rLVL 34 Absorb\rLVL 39 Slash\rLVL 46 Leer\rLVL 53 Hydro Pump");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x8c) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x8c) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x8c) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x8c) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x8c) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x8c) {
    TControl_SetText(Self->Edit7,"141");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x8c) {
    TControl_SetText(Self->Edit2,"Kabutops");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x8c) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Usa ataques da água poderosos. Ataques com o Hydro Pump fazem deste uma ótima escolha para o tipo da rocha ou da água.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x8c) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\141.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x8c) {
    TControl_SetText(Self->Edit3,"Pedra / Água");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x8c) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x8c) {
    TControl_SetText(Self->Edit5,"Não há");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x8c) {
    TControl_SetText(Self->Edit6,"Evolução");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x8c) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Scratch\rLVL --- Harden\rLVL --- Absorb\rLVL --- Slash\rLVL 46 Leer\rLVL 53 Hydro Pump");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x8d) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\5.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x8d) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x8d) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x8d) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x8d) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x8d) {
    TControl_SetText(Self->Edit7,"142");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x8d) {
    TControl_SetText(Self->Edit2,"Aerodactyl");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x8d) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"O pokémon mais extinto dos três (Kabuto, Omanyte e Aerodactyl) ressucitado do Old Amber. Seus ataques como o Hyper Beam são devastadores.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x8d) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\142.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x8d) {
    TControl_SetText(Self->Edit3,"Pedra / Água");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x8d) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x8d) {
    TControl_SetText(Self->Edit5,"Não há");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x8d) {
    TControl_SetText(Self->Edit6,"Old Lamber (Cidade de Pewter)");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x8d) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Wing Attack\rLVL --- Agility\rLVL 33 Supersonic\rLVL 38 Bite\rLVL 45 Take Down\rLVL 54 Hyper Beam");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x8e) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\5.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x8e) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x8e) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x8e) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x8e) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x8e) {
    TControl_SetText(Self->Edit7,"143");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x8e) {
    TControl_SetText(Self->Edit2,"Snorlax");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x8e) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"O pokémon mais \"gordo\" de todos. Ele está sempre dormindo. Só aparece duas vezes no game. É preciso uma Pokéflute para acordá-lo.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x8e) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\143.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x8e) {
    TControl_SetText(Self->Edit3,"Normal");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x8e) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x8e) {
    TControl_SetText(Self->Edit5,"Não há");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x8e) {
    TControl_SetText(Self->Edit6,"Rotas 12 e 16");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x8e) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Headbutt\rLVL --- Amnesia\rLVL --- Rest\rLVL 35 Body Slam\rLVL 41 Harden\rLVL 48 Double-Edge\rLVL 56 Hyper Beam");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x8f) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\5.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x8f) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x8f) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x8f) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x8f) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x8f) {
    TControl_SetText(Self->Edit7,"144");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x8f) {
    TControl_SetText(Self->Edit2,"Articuno");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x8f) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Um dos três pokémons legendários. Achado na Seafoam Islands. Se quiser pegá-lo, arme-se com uma Ultra-Ball ou uma Master-Ball.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x8f) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\144.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x8f) {
    TControl_SetText(Self->Edit3,"Gelo / Voador");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x8f) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x8f) {
    TControl_SetText(Self->Edit5,"Não há");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x8f) {
    TControl_SetText(Self->Edit6,"Ilhas Seafrom");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x8f) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Peck\rLVL --- Ice Beam\rLVL 51 Blizzard\rLVL 55 Agility\rLVL 60 Mist");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x90) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\5.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x90) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x90) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x90) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x90) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\5.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x90) {
    TControl_SetText(Self->Edit7,"145");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x90) {
    TControl_SetText(Self->Edit2,"Zapdos");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x90) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"O segundo dos três pokémons legendários. Achado na Powerplant. Se quiser pegá-lo, arme-se com uma Ultra-Ball ou uma Master-Ball.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x90) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\145.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x90) {
    TControl_SetText(Self->Edit3,"Elétrico / Voador");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x90) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x90) {
    TControl_SetText(Self->Edit5,"Não há");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x90) {
    TControl_SetText(Self->Edit6,"Power Plant");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x90) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Thundershock\rLVL --- Drill Peck\rLVL 51 Thunder\rLVL 55 Agility\rVL 60 Light Screen");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x91) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\5.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x91) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x91) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x91) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x91) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\5.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x91) {
    TControl_SetText(Self->Edit7,"146");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x91) {
    TControl_SetText(Self->Edit2,"Moltres");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x91) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"O último dos três pokémons legendários. Achado na Victory Road. Se quiser pegá-lo, arme-se com uma Ultra-Ball ou uma Master-Ball.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x91) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\146.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x91) {
    TControl_SetText(Self->Edit3,"Fogo / Voador");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x91) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x91) {
    TControl_SetText(Self->Edit5,"Não há");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x91) {
    TControl_SetText(Self->Edit6,"Victory Road");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x91) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Peck\rLVL --- Fire Spin\rLVL 51 Leer\rLVL 55 Agility\rLVL 60 Sky Attack");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x92) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x92) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x92) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x92) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x92) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x92) {
    TControl_SetText(Self->Edit7,"147");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x92) {
    TControl_SetText(Self->Edit2,"Dratini");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x92) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Um pokémon místico muito raro. Pode ser achado na Safari Zone.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x92) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\147.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x92) {
    TControl_SetText(Self->Edit3,"Dragão");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x92) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x92) {
    TControl_SetText(Self->Edit5,"Level 30: Dragonaire / Level 55: Dragonite");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x92) {
    TControl_SetText(Self->Edit6,"Safari Zone (pescando) e Coin Exchange (Cidade de Celadon)");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x92) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Wrap\rLVL --- Leer\rLVL 10 Thunder Wave\rLVL 20 Agility\rLVL 30 Slam\rLVL 40 Dragon Rage\rLVL 50 Hyper Beam");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x93) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x93) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x93) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x93) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x93) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x93) {
    TControl_SetText(Self->Edit7,"148");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x93) {
    TControl_SetText(Self->Edit2,"Dragonair");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x93) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Primeira evolução do Dratini. Místico e muito raro. Ele evolui no level 55 para Dragonite.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x93) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\148.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x93) {
    TControl_SetText(Self->Edit3,"Dragão");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x93) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x93) {
    TControl_SetText(Self->Edit5,"Level 55: Dragonite");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x93) {
    TControl_SetText(Self->Edit6,"Evolução");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x93) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Wrap\rLVL --- Leer\rLVL --- Thunder Wave\rLVL --- Agility\rLVL 35 Slam\rLVL 45 Dragon Rage\rLVL 55 Hyper Beam");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x94) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\5.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x94) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\5.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x94) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x94) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x94) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x94) {
    TControl_SetText(Self->Edit7,"149");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x94) {
    TControl_SetText(Self->Edit2,"Dragonite");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x94) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"O pokémon mais raro do game. Ele é muito poderoso. Seus ataques deixam o inimigo no chão.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x94) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\149.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x94) {
    TControl_SetText(Self->Edit3,"Dragão");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x94) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x94) {
    TControl_SetText(Self->Edit5,"Não há");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x94) {
    TControl_SetText(Self->Edit6,"Evolução");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x94) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Wrap\rLVL --- Leer\rLVL --- Thunder Wave\rLVL --- Agility\rLVL --- Slam\rLVL --- Dragon Rage\rLVL 60 Hyper Beam");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x95) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\5.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x95) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x95) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\4.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x95) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\5.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x95) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\5.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x95) {
    TControl_SetText(Self->Edit7,"150");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x95) {
    TControl_SetText(Self->Edit2,"Mewtwo");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x95) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"O melhor pokémon do game (com excessão do Mew, mas ele (Mew) não está no game).");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x95) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\150.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x95) {
    TControl_SetText(Self->Edit3,"Psíquico");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x95) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x95) {
    TControl_SetText(Self->Edit5,"Não há");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x95) {
    TControl_SetText(Self->Edit6,"Unknown Dungeon");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x95) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Confusion\rLVL --- Disable\rLVL --- Swift\rLVL 63 Barrier\rLVL 66 Psychic\rLVL 70 Recover\rLVL 75 Mist\rLVL 81 Amnesia");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x96) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x96) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\5.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x96) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\1.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x96) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\3.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x96) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\2.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x96) {
    TControl_SetText(Self->Edit7,"000");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x96) {
    TControl_SetText(Self->Edit2,"Missingno");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x96) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"Missingno é talvez, um pokémon real. É provável que Missingno seja um bug do jogo.\rAlguns dizem ter pego este pokémon, outros dizem que este pokémon não existe, é uma lenda.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x96) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\000.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x96) {
    TControl_SetText(Self->Edit3,"Normal / Voador");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x96) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x96) {
    TControl_SetText(Self->Edit5,"Não há");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x96) {
    TControl_SetText(Self->Edit6,"??????¿¿¿¿¿¿");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x96) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL --- Water Gun\rLVL --- Sky Attack\rLVL 30 Metronome\rLVL 40 Psychic");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x97) {
    piVar1 = *(int **)(Self->i1 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\5.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x97) {
    piVar1 = *(int **)(Self->i2 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\5.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x97) {
    piVar1 = *(int **)(Self->i3 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\5.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x97) {
    piVar1 = *(int **)(Self->i4 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\5.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x97) {
    piVar1 = *(int **)(Self->i5 + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\5.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x97) {
    TControl_SetText(Self->Edit7,"151");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x97) {
    TControl_SetText(Self->Edit2,"Mew");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x97) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"O melhor pokémon existente. Ele não está no game mas pode ser conseguido somente com o uso do Gameshark. Coloque o código 0115D8CF e tente lutar no gramado, aparecerá uma imagem retorcida, é o Mew.\rPegue-o com a Master-Ball. Pronto, você tem o melhor pokémon do game.");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x97) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\151.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x97) {
    TControl_SetText(Self->Edit3,"Psíquico");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x97) {
    TControl_SetText(Self->Edit4,"Azul e Vermelha");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x97) {
    TControl_SetText(Self->Edit5,"Não há");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x97) {
    TControl_SetText(Self->Edit6,"??????¿¿¿¿¿¿");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x97) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,"LVL 10 Transform\rLVL 20 Mega Punch\rLVL 30 Metronome\rLVL 40 Psychic");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x98) {
    TGIFImage_Clear(*(int **)(Self->i1 + 0x13c));
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x98) {
    TGIFImage_Clear(*(int **)(Self->i2 + 0x13c));
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x98) {
    TGIFImage_Clear(*(int **)(Self->i3 + 0x13c));
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x98) {
    TGIFImage_Clear(*(int **)(Self->i4 + 0x13c));
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x98) {
    TGIFImage_Clear(*(int **)(Self->i5 + 0x13c));
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x98) {
    TControl_SetText(Self->Edit7,(uint *)0x0);
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x98) {
    TControl_SetText(Self->Edit2,"Ash");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x98) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,0);
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x98) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\ash.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x98) {
    TControl_SetText(Self->Edit3,(uint *)0x0);
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x98) {
    TControl_SetText(Self->Edit4,(uint *)0x0);
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x98) {
    TControl_SetText(Self->Edit5,(uint *)0x0);
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x98) {
    TControl_SetText(Self->Edit6,(uint *)0x0);
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x98) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,0);
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x99) {
    TGIFImage_Clear(*(int **)(Self->i1 + 0x13c));
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x99) {
    TGIFImage_Clear(*(int **)(Self->i2 + 0x13c));
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x99) {
    TGIFImage_Clear(*(int **)(Self->i3 + 0x13c));
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x99) {
    TGIFImage_Clear(*(int **)(Self->i4 + 0x13c));
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x99) {
    TGIFImage_Clear(*(int **)(Self->i5 + 0x13c));
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x99) {
    TControl_SetText(Self->Edit7,(uint *)0x0);
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x99) {
    TControl_SetText(Self->Edit2,"Brock");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x99) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,0);
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x99) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\brock.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x99) {
    TControl_SetText(Self->Edit3,(uint *)0x0);
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x99) {
    TControl_SetText(Self->Edit4,(uint *)0x0);
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x99) {
    TControl_SetText(Self->Edit5,(uint *)0x0);
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x99) {
    TControl_SetText(Self->Edit6,(uint *)0x0);
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x99) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,0);
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x9a) {
    TGIFImage_Clear(*(int **)(Self->i1 + 0x13c));
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x9a) {
    TGIFImage_Clear(*(int **)(Self->i2 + 0x13c));
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x9a) {
    TGIFImage_Clear(*(int **)(Self->i3 + 0x13c));
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x9a) {
    TGIFImage_Clear(*(int **)(Self->i4 + 0x13c));
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x9a) {
    TGIFImage_Clear(*(int **)(Self->i5 + 0x13c));
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x9a) {
    TControl_SetText(Self->Edit7,(uint *)0x0);
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x9a) {
    TControl_SetText(Self->Edit2,"Misty");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x9a) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,0);
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x9a) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\Misty.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x9a) {
    TControl_SetText(Self->Edit3,(uint *)0x0);
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x9a) {
    TControl_SetText(Self->Edit4,(uint *)0x0);
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x9a) {
    TControl_SetText(Self->Edit5,(uint *)0x0);
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x9a) {
    TControl_SetText(Self->Edit6,(uint *)0x0);
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x9a) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,0);
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x9b) {
    TGIFImage_Clear(*(int **)(Self->i1 + 0x13c));
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x9b) {
    TGIFImage_Clear(*(int **)(Self->i2 + 0x13c));
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x9b) {
    TGIFImage_Clear(*(int **)(Self->i3 + 0x13c));
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x9b) {
    TGIFImage_Clear(*(int **)(Self->i4 + 0x13c));
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x9b) {
    TGIFImage_Clear(*(int **)(Self->i5 + 0x13c));
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x9b) {
    TControl_SetText(Self->Edit7,(uint *)0x0);
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x9b) {
    TControl_SetText(Self->Edit2,"Professor Oak");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x9b) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,0);
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x9b) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\oak.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x9b) {
    TControl_SetText(Self->Edit3,(uint *)0x0);
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x9b) {
    TControl_SetText(Self->Edit4,(uint *)0x0);
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x9b) {
    TControl_SetText(Self->Edit5,(uint *)0x0);
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x9b) {
    TControl_SetText(Self->Edit6,(uint *)0x0);
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x9b) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,0);
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x9c) {
    TGIFImage_Clear(*(int **)(Self->i1 + 0x13c));
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x9c) {
    TGIFImage_Clear(*(int **)(Self->i2 + 0x13c));
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x9c) {
    TGIFImage_Clear(*(int **)(Self->i3 + 0x13c));
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x9c) {
    TGIFImage_Clear(*(int **)(Self->i4 + 0x13c));
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x9c) {
    TGIFImage_Clear(*(int **)(Self->i5 + 0x13c));
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x9c) {
    TControl_SetText(Self->Edit7,(uint *)0x0);
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x9c) {
    TControl_SetText(Self->Edit2,"Team Rocket");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x9c) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,0);
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x9c) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\team.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x9c) {
    TControl_SetText(Self->Edit3,(uint *)0x0);
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x9c) {
    TControl_SetText(Self->Edit4,(uint *)0x0);
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x9c) {
    TControl_SetText(Self->Edit5,(uint *)0x0);
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x9c) {
    TControl_SetText(Self->Edit6,(uint *)0x0);
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x9c) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,0);
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x9d) {
    TGIFImage_Clear(*(int **)(Self->i1 + 0x13c));
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x9d) {
    TGIFImage_Clear(*(int **)(Self->i2 + 0x13c));
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x9d) {
    TGIFImage_Clear(*(int **)(Self->i3 + 0x13c));
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x9d) {
    TGIFImage_Clear(*(int **)(Self->i4 + 0x13c));
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x9d) {
    TGIFImage_Clear(*(int **)(Self->i5 + 0x13c));
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x9d) {
    TControl_SetText(Self->Edit7,(uint *)0x0);
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x9d) {
    TControl_SetText(Self->Edit2,"Gary");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x9d) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,0);
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x9d) {
    piVar1 = *(int **)(Self->animator + 0x13c);
    (**(code **)(*piVar1 + 0x48))(piVar1,"c:\\windows\\data\\gary.gif");
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x9d) {
    TControl_SetText(Self->Edit3,(uint *)0x0);
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x9d) {
    TControl_SetText(Self->Edit4,(uint *)0x0);
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x9d) {
    TControl_SetText(Self->Edit5,(uint *)0x0);
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x9d) {
    TControl_SetText(Self->Edit6,(uint *)0x0);
  }
  iVar2 = TListBox_GetItemIndex(Self->ListBox1);
  if (iVar2 == 0x9d) {
    piVar1 = *(int **)(Self->movi + 0x204);
    (**(code **)(*piVar1 + 0x2c))(piVar1,0);
  }
  return;
}

