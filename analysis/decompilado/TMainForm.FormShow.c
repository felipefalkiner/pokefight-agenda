// TMainForm.FormShow @ 004b64f0  body=341 bytes

void TMainForm_FormShow(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *in_FS_OFFSET;
  int iStackY_48;
  int iStack_3c;
  undefined *puStack_38;
  undefined1 *puStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined *puStack_28;
  undefined *puStack_24;
  undefined1 *puStack_20;
  undefined4 *puStack_10;
  undefined4 *puStack_c;
  int *piStack_8;
  
  puStack_20 = &stack0xfffffffc;
  piStack_8 = (int *)0x0;
  puStack_c = (undefined4 *)0x0;
  puStack_10 = (undefined4 *)0x0;
  puStack_24 = &UNK_004b6665;
  puStack_28 = (undefined *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&puStack_28;
  uStack_2c = 0x4b6513;
  FUN_004b637c((int)param_1);
  uStack_2c = 0xffffffff;
  iStack_30 = 0x4b651c;
  iStack_30 = FUN_004372c4(param_1);
  puStack_34 = (undefined1 *)0x4b6522;
  func_0x0045b940();
  puStack_34 = (undefined1 *)0x4b652b;
  TMainForm_RichEditChange((int)param_1);
  puStack_34 = (undefined1 *)0x4b6532;
  FUN_004b4df0((int)param_1);
  puStack_34 = (undefined1 *)0x4b653b;
  func_0x004b6830(param_1,0);
  puStack_34 = (undefined1 *)0x4b6540;
  iVar1 = func_0x004028b0();
  if (0 < iVar1) {
    puStack_34 = (undefined1 *)0x4b6551;
    FUN_00402910(1,(int *)&puStack_c);
    puStack_34 = (undefined1 *)0x4b6559;
    uVar2 = SysUtils_FileExists((undefined *)puStack_c);
    if ((char)uVar2 != '\0') {
      puStack_34 = (undefined1 *)0x4b656a;
      FUN_00402910(1,(int *)&puStack_c);
      puStack_34 = (undefined1 *)0x4b6574;
      FUN_004b58a0((int)param_1,puStack_c);
      *in_FS_OFFSET = iStack_30;
      puStack_28 = &UNK_004b666c;
      uStack_2c = 0x4b665c;
      System_LStrClr((int *)&puStack_10);
      uStack_2c = 0x4b6664;
      System_LStrClr((int *)&puStack_c);
      return;
    }
  }
  puStack_34 = (undefined1 *)0x4b657e;
  func_0x004588bc();
  puStack_38 = &UNK_004b6638;
  iStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_3c;
  iStackY_48 = 0x4b65aa;
  puStack_34 = &stack0xfffffffc;
  piStack_8 = FUN_004132e4((int *)PTR_PTR_0040f668,'\x01',*(HMODULE *)PTR_DAT_004fd898,"RTF",
                           "RX.RTF");
  iStackY_48 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStackY_48;
  (**(code **)(**(int **)(param_1[0xc6] + 0x234) + 0x5c))
            (*(int **)(param_1[0xc6] + 0x234),piStack_8);
  TControl_GetText(*(int *)(*(int *)PTR_DAT_004fd700 + 0x2f0),(int *)&puStack_10);
  System_LStrCat3((int *)&puStack_c,(undefined4 *)0x0,puStack_10);
  FUN_004b511c((int)param_1,puStack_c);
  FUN_004282fc((int *)param_1[0xc6],0);
  FUN_004b67d4((int)param_1,'\0');
  *in_FS_OFFSET = iStackY_48;
  FUN_00402e3c(piStack_8);
  return;
}

