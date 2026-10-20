// TMainForm.FileSaveAs @ 004b5a70  body=155 bytes

void TMainForm_FileSaveAs(int param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 *local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  puStack_14 = &LAB_004b5b0b;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  cVar2 = (**(code **)(*Self->SaveDialog + 0x3c))();
  if (cVar2 != '\0') {
    FUN_00454640(Self->SaveDialog,(int *)&local_8);
    piVar1 = *(int **)(Self->Editor + 0x234);
    (**(code **)(*piVar1 + 100))(piVar1,local_8);
    FUN_00454640(Self->SaveDialog,(int *)&local_8);
    FUN_004b511c(param_1,local_8);
    FUN_004282fc(Self->Editor,0);
    FUN_004b67d4(param_1,'\0');
    TMainForm_RichEditChange(param_1);
  }
  FUN_004b4df0(param_1);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_004b5b12;
  puStack_14 = (undefined1 *)0x4b5b0a;
  System_LStrClr((int *)&local_8);
  return;
}

