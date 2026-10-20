// TMainForm.BackgroundMenuPopup @ 004b6eec  body=67 bytes

void TMainForm_BackgroundMenuPopup(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar1 = FUN_004b50e8(param_1);
  iVar1 = FUN_00496b60(iVar1);
  iVar4 = 0;
  piVar3 = &DAT_004fd558;
  do {
    iVar2 = FUN_00440adc(*(int *)(Self->BackgroundMenu + 0x28),iVar4);
    TMenuItem_SetChecked(iVar2,iVar1 == *piVar3);
    iVar4 = iVar4 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar4 != 0x11);
  return;
}

