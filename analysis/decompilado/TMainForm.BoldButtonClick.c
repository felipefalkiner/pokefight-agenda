// TMainForm.BoldButtonClick @ 004b5da4  body=99 bytes

void TMainForm_BoldButtonClick(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  byte bVar4;
  
  if (*(char *)(param_1 + 0x434) == '\0') {
    uVar2 = FUN_004ac790(Self->BoldBtn);
    if ((char)uVar2 == '\0') {
      iVar3 = FUN_004b50e8(param_1);
      bVar1 = FUN_00496c7c(iVar3);
      bVar4 = ~DAT_004b5e08;
      iVar3 = FUN_004b50e8(param_1);
      FUN_00496ccc(iVar3,bVar4 & bVar1);
    }
    else {
      iVar3 = FUN_004b50e8(param_1);
      bVar1 = FUN_00496c7c(iVar3);
      bVar1 = bVar1 | DAT_004b5e08;
      iVar3 = FUN_004b50e8(param_1);
      FUN_00496ccc(iVar3,bVar1);
    }
  }
  return;
}

