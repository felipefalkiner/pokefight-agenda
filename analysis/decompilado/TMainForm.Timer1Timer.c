// TMainForm.Timer1Timer @ 004b7190  body=86 bytes

void TMainForm_Timer1Timer(int param_1)

{
  ushort uVar1;
  
  uVar1 = GetKeyState(0x14);
  if ((uVar1 & 1) == 0) {
    TControl_SetVisible(Self->caps,0,extraout_ECX);
  }
  else {
    TControl_SetVisible(Self->caps,CONCAT31((int3)((uint)extraout_EDX >> 8),1),extraout_ECX
                );
  }
  uVar1 = GetKeyState(0x90);
  if ((uVar1 & 1) != 0) {
    TControl_SetVisible(Self->num,CONCAT31((int3)((uint)extraout_EDX_00 >> 8),1),
                 extraout_ECX_00);
    return;
  }
  TControl_SetVisible(Self->num,0,extraout_ECX_00);
  return;
}

