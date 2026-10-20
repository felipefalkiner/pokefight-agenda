// TMainForm.FirstIndMouseUp @ 004b61cc  body=101 bytes

void TMainForm_FirstIndMouseUp(int param_1)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 0x449) = 0;
  iVar1 = FUN_004b4d34(param_1,*(int *)(Self->FirstInd + 0x30) +
                               *(int *)(param_1 + 0x438),'\0');
  iVar1 = FUN_00457250(0,iVar1);
  FUN_00497434(*(int *)(Self->Editor + 0x224),iVar1);
  TMainForm_LeftIndMouseUp(param_1);
  return;
}

