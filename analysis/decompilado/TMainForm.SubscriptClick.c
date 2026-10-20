// TMainForm.SubscriptClick @ 004b5edc  body=90 bytes

void TMainForm_SubscriptClick(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x434) == '\0') {
    uVar1 = FUN_004ac790(Self->SuperscriptBtn);
    if ((char)uVar1 == '\0') {
      uVar1 = FUN_004ac790(Self->SubscriptBtn);
      if ((char)uVar1 == '\0') {
        uVar1 = FUN_004b50e8(param_1);
        func_0x00496e20(uVar1,0);
      }
      else {
        uVar1 = FUN_004b50e8(param_1);
        func_0x00496e20(uVar1,1);
      }
    }
    else {
      uVar1 = FUN_004b50e8(param_1);
      func_0x00496e20(uVar1,2);
    }
  }
  return;
}

