// TMainForm.InsertBitmap @ 004b689c  body=164 bytes

void TMainForm_InsertBitmap(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined *local_c;
  int *local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_c = (undefined *)0x0;
  puStack_1c = &LAB_004b6947;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  piVar3 = *(int **)(param_1 + 0x450);
  puStack_24 = (undefined1 *)0x4b68c6;
  cVar1 = (**(code **)(*piVar3 + 0x3c))();
  if (cVar1 != '\0') {
    puStack_24 = (undefined1 *)0x4b68d6;
    local_8 = FUN_0041be14((int *)PTR_PTR_004178b4,'\x01',extraout_ECX);
    puStack_28 = &LAB_004b692a;
    uStack_2c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_2c;
    puStack_24 = &stack0xfffffffc;
    FUN_00454640((int)piVar3,(int *)&local_c);
    uVar2 = FUN_0041bfe4(local_8,local_c);
    piVar3 = (int *)FUN_0042c6a4(uVar2,extraout_EDX,extraout_ECX_00);
    (**(code **)(*piVar3 + 8))(piVar3,local_8);
    FUN_00428524(Self->Editor);
    *in_FS_OFFSET = uStack_2c;
    puStack_24 = (undefined1 *)0x4b6931;
    puStack_28 = (undefined1 *)0x4b6929;
    FUN_00402e3c(local_8);
    return;
  }
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_004b694e;
  puStack_1c = (undefined1 *)0x4b6946;
  System_LStrClr((int *)&local_c);
  return;
}

