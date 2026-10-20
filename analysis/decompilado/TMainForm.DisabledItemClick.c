// TMainForm.DisabledItemClick @ 004b70b0  body=67 bytes

void TMainForm_DisabledItemClick(int param_1)

{
  bool bVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x434) == '\0') {
    iVar2 = FUN_004b50e8(param_1);
    bVar1 = FUN_00496a8c(iVar2);
    iVar2 = FUN_004b50e8(param_1);
    FUN_00496ab0(iVar2,!bVar1);
    iVar2 = FUN_004b50e8(param_1);
    bVar1 = FUN_00496a8c(iVar2);
    TMenuItem_SetChecked(Self->DisabledItem,bVar1);
  }
  return;
}

