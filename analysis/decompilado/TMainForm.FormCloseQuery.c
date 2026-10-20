// TMainForm.FormCloseQuery @ 004b601c  body=45 bytes

void TMainForm_FormCloseQuery(int param_1)

{
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = &stack0xfffffffc;
  puStack_1c = &LAB_004b6043;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_004b51f4(param_1);
  *in_FS_OFFSET = uStack_20;
  return;
}

