// TMainForm.HiddenItemClick @ 004b70f4  body=67 bytes

void TMainForm_HiddenItemClick(int param_1)

{
  bool bVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x434) == '\0') {
    iVar2 = FUN_004b50e8(param_1);
    bVar1 = FUN_00496a28(iVar2);
    iVar2 = FUN_004b50e8(param_1);
    FUN_00496a4c(iVar2,!bVar1);
    iVar2 = FUN_004b50e8(param_1);
    bVar1 = FUN_00496a28(iVar2);
    TMenuItem_SetChecked(Self->HiddenItem,bVar1);
  }
  return;
}

