// TMainForm.ProtectedItemClick @ 004b7028  body=129 bytes

void TMainForm_ProtectedItemClick(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &stack0xfffffffc;
  if (*(char *)(param_1 + 0x434) == '\0') {
    *(undefined1 *)(param_1 + 0x44a) = 1;
    puStack_10 = &LAB_004b70a6;
    uStack_14 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_14;
    local_8 = param_1;
    iVar2 = FUN_004b50e8(param_1);
    bVar1 = FUN_004969d8(iVar2);
    iVar2 = FUN_004b50e8(local_8);
    FUN_004969f0(iVar2,!bVar1);
    iVar2 = FUN_004b50e8(local_8);
    bVar1 = FUN_004969d8(iVar2);
    TMenuItem_SetChecked(*(int *)(local_8 + 0x374),bVar1);
    *in_FS_OFFSET = uStack_14;
    *(undefined1 *)(local_8 + 0x44a) = 0;
    return;
  }
  return;
}

