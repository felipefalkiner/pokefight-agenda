// TMainForm.FileOpen @ 004b5934  body=114 bytes

void TMainForm_FileOpen(int param_1)

{
  char cVar1;
  undefined4 uStack_18;
  undefined *puStack_14;
  undefined1 *puStack_10;
  int iStack_8;
  
  puStack_10 = &stack0xfffffffc;
  iStack_8 = 0;
  puStack_14 = &UNK_004b59a6;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  FUN_004b51f4(param_1);
  cVar1 = (**(code **)(*Self->OpenDialog + 0x3c))();
  if (cVar1 != '\0') {
    FUN_00454640(Self->OpenDialog,&iStack_8);
    FUN_004b58a0(param_1,iStack_8);
    func_0x004283bc(Self->Editor,
                    (*(byte *)(Self->OpenDialog + 0x50) & 1) != 0);
  }
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &UNK_004b59ad;
  puStack_14 = (undefined *)0x4b59a5;
  System_LStrClr(&iStack_8);
  return;
}

