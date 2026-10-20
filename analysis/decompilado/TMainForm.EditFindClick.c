// TMainForm.EditFindClick @ 004b6cdc  body=71 bytes

void TMainForm_EditFindClick(int param_1)

{
  int *piVar1;
  undefined4 uStack_18;
  undefined *puStack_14;
  undefined1 *puStack_10;
  int iStack_8;
  
  puStack_10 = &stack0xfffffffc;
  iStack_8 = 0;
  puStack_14 = &UNK_004b6d23;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  piVar1 = Self->Editor;
  (**(code **)(*piVar1 + 0xc4))(piVar1,&iStack_8);
  func_0x0049cb74(piVar1,iStack_8);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &UNK_004b6d2a;
  puStack_14 = (undefined *)0x4b6d22;
  System_LStrClr(&iStack_8);
  return;
}

