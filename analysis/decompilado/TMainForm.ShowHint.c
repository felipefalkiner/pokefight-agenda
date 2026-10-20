// TMainForm.ShowHint @ 004b577c  body=73 bytes

void TMainForm_ShowHint(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00403ce8(*(int *)(*(int *)PTR_DAT_004fd90c + 0x3c));
  if (0 < iVar1) {
    func_0x00461dac(Self->StatusBar,1);
    TStatusBar_SetSimpleText(Self->StatusBar,
                    *(undefined4 *)(*(int *)PTR_DAT_004fd90c + 0x3c));
    return;
  }
  func_0x00461dac(Self->StatusBar,0);
  return;
}

