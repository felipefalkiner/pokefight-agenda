// TCores.pokClick @ 004a3824  body=50 bytes

void TCores_pokClick(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = (**(code **)(*Self->prever + 0xb8))();
  if (cVar1 == '\x01') {
    iVar2 = FUN_004a1f34(Self->pok);
    TFont_SetColor(*(int **)(Self->pokemon + 0x58),iVar2,extraout_ECX);
  }
  return;
}

