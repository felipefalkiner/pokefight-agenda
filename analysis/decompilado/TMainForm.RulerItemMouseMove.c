// TMainForm.RulerItemMouseMove @ 004b6160  body=107 bytes

void TMainForm_RulerItemMouseMove
               (int param_1,int *param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x449) != '\0') {
    FUN_004b52fc(param_1);
    iVar1 = FUN_00430ef0(Self->Ruler);
    iVar3 = *(int *)(param_1 + 0x438);
    iVar2 = FUN_00457250(0,(param_2[0xc] + param_5) - *(int *)(param_1 + 0x438));
    iVar3 = FUN_00457258(iVar2,iVar1 + iVar3 * -2);
    FUN_00430c9c(param_2,iVar3);
    FUN_004b605c(param_1,param_2);
    FUN_004b52fc(param_1);
  }
  return;
}

