// TCores.SegundoClick @ 004a37f4  body=47 bytes

void TCores_SegundoClick(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = (**(code **)(*Self->prever + 0xb8))();
  if (cVar1 == '\x01') {
    iVar2 = FUN_004a1f34(Self->Segundo);
    TControl_SetColor(Self->seg,iVar2);
  }
  return;
}

