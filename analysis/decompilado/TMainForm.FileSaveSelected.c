// TMainForm.FileSaveSelected @ 004b5b18  body=178 bytes

void TMainForm_FileSaveSelected(int param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uStack_28;
  undefined *puStack_24;
  undefined1 *puStack_20;
  undefined4 uStack_1c;
  undefined *puStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  puStack_14 = &stack0xfffffffc;
  iStack_10 = 0;
  puStack_18 = &UNK_004b5bdb;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_20 = (undefined1 *)0x4b5b42;
  iStack_8 = param_1;
  cVar2 = (**(code **)(*Self->SaveDialog + 0x3c))();
  if (cVar2 != '\0') {
    iStack_c = *(int *)(iStack_8 + 0x318);
    puStack_24 = &UNK_004b5bac;
    uStack_28 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_28;
    puStack_20 = &stack0xfffffffc;
    func_0x0049b2e4(iStack_c,DAT_004b5be8);
    FUN_00454640(*(int *)(iStack_8 + 0x2f8),&iStack_10);
    (**(code **)(**(int **)(iStack_c + 0x234) + 100))(*(int **)(iStack_c + 0x234),iStack_10);
    puVar1 = puStack_20;
    *in_FS_OFFSET = uStack_28;
    puStack_20 = &UNK_004b5bb3;
    puStack_24 = (undefined *)0x4b5bab;
    func_0x0049b2e4(iStack_c,DAT_004b5bec,puVar1);
    return;
  }
  puStack_20 = (undefined1 *)0x4b5bc5;
  FUN_004b4df0(iStack_8);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &UNK_004b5be2;
  puStack_18 = (undefined *)0x4b5bda;
  System_LStrClr(&iStack_10);
  return;
}

