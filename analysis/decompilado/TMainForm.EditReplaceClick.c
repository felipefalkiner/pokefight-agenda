// TMainForm.EditReplaceClick @ 004b6d50  body=73 bytes

void TMainForm_EditReplaceClick(int param_1)

{
  int *piVar1;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined *local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = (undefined *)0x0;
  puStack_14 = &LAB_004b6d99;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  piVar1 = Self->Editor;
  (**(code **)(*piVar1 + 0xc4))(piVar1,&local_8);
  FUN_0049cc1c(piVar1,local_8,(undefined *)0x0);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_004b6da0;
  puStack_14 = (undefined1 *)0x4b6d98;
  System_LStrClr((int *)&local_8);
  return;
}

