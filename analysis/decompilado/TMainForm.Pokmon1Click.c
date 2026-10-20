// TMainForm.Pokmon1Click @ 004b71e8  body=149 bytes

void TMainForm_Pokmon1Click(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uStack_2c;
  undefined *puStack_28;
  undefined1 *puStack_24;
  undefined4 uStack_20;
  undefined *puStack_1c;
  undefined1 *puStack_18;
  undefined4 *puStack_10;
  undefined *puStack_c;
  int *piStack_8;
  
  puStack_18 = &stack0xfffffffc;
  piStack_8 = (int *)0x0;
  puStack_c = (undefined *)0x0;
  puStack_10 = (undefined4 *)0x0;
  puStack_1c = &UNK_004b72a2;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_24 = (undefined1 *)0x4b720e;
  piStack_8 = FUN_0041be14((int *)PTR_PTR_004178b4,'\x01',param_3);
  puStack_24 = (undefined1 *)0x4b7226;
  TControl_GetText(*(int *)(*(int *)PTR_DAT_004fd700 + 0x3dc),(int *)&puStack_10);
  puStack_24 = (undefined1 *)0x4b7236;
  System_LStrCat3((int *)&puStack_c,(undefined4 *)"c:\\windows\\data\\",puStack_10);
  puStack_24 = (undefined1 *)0x4b7241;
  FUN_0041bfe4(piStack_8,puStack_c);
  puStack_28 = &UNK_004b727d;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_24 = &stack0xfffffffc;
  piVar1 = (int *)FUN_0042c6a4(0,extraout_EDX,extraout_ECX);
  (**(code **)(*piVar1 + 8))(piVar1,piStack_8);
  FUN_00428524(Self->Editor);
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &UNK_004b7284;
  puStack_28 = (undefined *)0x4b727c;
  FUN_00402e3c(piStack_8);
  return;
}

