// TMainForm.FontSizeChange @ 004b5f38  body=54 bytes

void TMainForm_FontSizeChange(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (*(char *)(param_1 + 0x434) == '\0') {
    iVar1 = func_0x004b293c(Self->FontSize);
    if (0 < iVar1) {
      uVar2 = func_0x004b293c(Self->FontSize);
      uVar3 = FUN_004b50e8(param_1);
      func_0x00496d40(uVar3,uVar2);
    }
  }
  return;
}

