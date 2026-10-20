// TMainForm.FontNameChange @ 004b5f90  body=84 bytes

void TMainForm_FontNameChange(int param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uStack_18;
  undefined *puStack_14;
  undefined1 *puStack_10;
  undefined *puStack_8;
  
  puStack_10 = &stack0xfffffffc;
  puStack_8 = (undefined *)0x0;
  puStack_14 = &UNK_004b5fe4;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  if (*(char *)(param_1 + 0x434) == '\0') {
    FUN_004a2874(Self->FontName,(int *)&puStack_8);
    puVar1 = puStack_8;
    iVar2 = FUN_004b50e8(param_1);
    FUN_00496c0c(iVar2,puVar1);
  }
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &UNK_004b5feb;
  puStack_14 = (undefined *)0x4b5fe3;
  System_LStrClr((int *)&puStack_8);
  return;
}

