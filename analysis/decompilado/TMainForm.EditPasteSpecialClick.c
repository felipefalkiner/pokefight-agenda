// TMainForm.EditPasteSpecialClick @ 004b5c8c  body=57 bytes

void TMainForm_EditPasteSpecialClick(int param_1)

{
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &stack0xfffffffc;
  puStack_10 = &LAB_004b5cc5;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  local_8 = param_1;
  FUN_0049b6fc(Self->Editor);
  *in_FS_OFFSET = uStack_14;
  puStack_c = &LAB_004b5ccc;
  puStack_10 = (undefined1 *)0x4b5cc4;
  FUN_004b4df0(local_8);
  return;
}

