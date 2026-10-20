// TCores.fonteClick @ 004a3500  body=179 bytes

void TCores_fonteClick(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = (**(code **)(*Self->prever + 0xb8))();
  if (cVar1 == '\x01') {
    iVar2 = FUN_004a1f34(Self->fundo);
    TControl_SetColor(Self->Edit1,iVar2);
  }
  cVar1 = (**(code **)(*Self->prever + 0xb8))();
  if (cVar1 == '\x01') {
    iVar2 = FUN_004a1f34(Self->fonte);
    TFont_SetColor(*(int **)(Self->Edit1 + 0x58),iVar2,extraout_ECX);
  }
  cVar1 = (**(code **)(*Self->prever + 0xb8))();
  if (cVar1 == '\x01') {
    iVar2 = FUN_004a1f34(Self->fundo);
    TControl_SetColor(Self->ListBox1,iVar2);
  }
  cVar1 = (**(code **)(*Self->prever + 0xb8))();
  if (cVar1 == '\x01') {
    iVar2 = FUN_004a1f34(Self->fonte);
    TFont_SetColor(*(int **)(Self->ListBox1 + 0x58),iVar2,extraout_ECX_00);
  }
  return;
}

