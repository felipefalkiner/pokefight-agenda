// TMainForm.RulerResize @ 004b5d54  body=42 bytes

void TMainForm_RulerResize(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00430ef0(Self->Ruler);
  FUN_00430ce8(Self->RulerLine,iVar1 + *(int *)(Self->RulerLine + 0x30) * -2);
  return;
}

