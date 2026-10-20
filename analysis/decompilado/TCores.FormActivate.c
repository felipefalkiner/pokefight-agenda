// TCores.FormActivate @ 004a35b4  body=576 bytes

void TCores_FormActivate(int param_1)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  
  puVar1 = PTR_DAT_004fd700;
  FUN_004a1fe8(Self->pok,
               *(int *)(*(int *)(*(int *)(*(int *)PTR_DAT_004fd700 + 0x394) + 0x58) + 0x14));
  TFont_SetColor(*(int **)(Self->pokemon + 0x58),
                 *(int *)(*(int *)(*(int *)(*(int *)puVar1 + 0x394) + 0x58) + 0x14),extraout_ECX);
  FUN_004a1fe8(Self->Segundo,*(int *)(*(int *)puVar1 + 100));
  TControl_SetColor(Self->seg,*(int *)(*(int *)puVar1 + 100));
  TControl_SetColor(DAT_004fee50,*(int *)(*(int *)puVar1 + 100));
  TControl_SetColor(Self->Edit1,*(int *)(*(int *)(*(int *)puVar1 + 0x2dc) + 100));
  TFont_SetColor(*(int **)(Self->Edit1 + 0x58),
                 *(int *)(*(int *)(*(int *)(*(int *)puVar1 + 0x2dc) + 0x58) + 0x14),extraout_ECX_00)
  ;
  FUN_004a1fe8(Self->fundo,*(int *)(*(int *)(*(int *)puVar1 + 0x2e0) + 100));
  FUN_004a1fe8(Self->fonte,
               *(int *)(*(int *)(*(int *)(*(int *)puVar1 + 0x2e0) + 0x58) + 0x14));
  cVar2 = (**(code **)(*Self->prever + 0xb8))();
  if (cVar2 == '\x01') {
    cVar2 = (**(code **)(*Self->prever + 0xb8))();
    if (cVar2 == '\x01') {
      iVar3 = FUN_004a1f34(Self->fundo);
      TControl_SetColor(Self->Edit1,iVar3);
    }
  }
  cVar2 = (**(code **)(*Self->prever + 0xb8))();
  if (cVar2 == '\x01') {
    iVar3 = FUN_004a1f34(Self->fonte);
    TFont_SetColor(*(int **)(Self->Edit1 + 0x58),iVar3,extraout_ECX_01);
  }
  cVar2 = (**(code **)(*Self->prever + 0xb8))();
  if (cVar2 == '\x01') {
    iVar3 = FUN_004a1f34(Self->fundo);
    TControl_SetColor(Self->ListBox1,iVar3);
  }
  cVar2 = (**(code **)(*Self->prever + 0xb8))();
  if (cVar2 == '\x01') {
    iVar3 = FUN_004a1f34(Self->fonte);
    TFont_SetColor(*(int **)(Self->ListBox1 + 0x58),iVar3,extraout_ECX_02);
  }
  cVar2 = (**(code **)(*Self->prever + 0xb8))();
  if (cVar2 == '\x01') {
    iVar3 = FUN_004a1f34(Self->fundo);
    TControl_SetColor(Self->Edit1,iVar3);
  }
  cVar2 = (**(code **)(*Self->prever + 0xb8))();
  if (cVar2 == '\x01') {
    iVar3 = FUN_004a1f34(Self->fonte);
    TFont_SetColor(*(int **)(Self->Edit1 + 0x58),iVar3,extraout_ECX_03);
  }
  cVar2 = (**(code **)(*Self->prever + 0xb8))();
  if (cVar2 == '\x01') {
    iVar3 = FUN_004a1f34(Self->fundo);
    TControl_SetColor(Self->ListBox1,iVar3);
  }
  cVar2 = (**(code **)(*Self->prever + 0xb8))();
  if (cVar2 == '\x01') {
    iVar3 = FUN_004a1f34(Self->fonte);
    TFont_SetColor(*(int **)(Self->ListBox1 + 0x58),iVar3,extraout_ECX_04);
  }
  return;
}

