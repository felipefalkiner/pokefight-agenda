// TMainForm.FileSave @ 004b59b4  body=172 bytes

void TMainForm_FileSave(int param_1)

{
  int *piVar1;
  undefined1 uVar2;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 *local_c;
  uint *local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = (uint *)0x0;
  local_c = (undefined4 *)0x0;
  puStack_1c = &LAB_004b5a60;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  TControl_GetText(*(int *)(*(int *)PTR_DAT_004fd700 + 0x2f0),(int *)&local_c);
  uVar2 = 1;
  System_LStrCat3((int *)&local_8,(undefined4 *)0x0,local_c);
  FUN_00403df8(*(uint **)(param_1 + 0x430),local_8);
  if ((bool)uVar2) {
    TMainForm_FileSaveAs(param_1);
  }
  else {
    piVar1 = *(int **)(Self->Editor + 0x234);
    (**(code **)(*piVar1 + 100))(piVar1,*(undefined4 *)(param_1 + 0x430));
    FUN_004282fc(Self->Editor,0);
    FUN_004b67d4(param_1,'\0');
    TMainForm_RichEditChange(param_1);
  }
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_004b5a67;
  puStack_1c = (undefined1 *)0x4b5a57;
  System_LStrClr((int *)&local_c);
  puStack_1c = (undefined1 *)0x4b5a5f;
  System_LStrClr((int *)&local_8);
  return;
}

