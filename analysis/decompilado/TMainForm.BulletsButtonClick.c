// TMainForm.BulletsButtonClick @ 004b5ff0  body=44 bytes

void TMainForm_BulletsButtonClick(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x434) == '\0') {
    uVar1 = FUN_004ac790(Self->BulletsBtn);
    FUN_004973a4(*(int *)(Self->Editor + 0x224),(byte)uVar1);
  }
  return;
}

