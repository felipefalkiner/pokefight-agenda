// TAPKG.Timer1Timer @ 004fa784  body=112 bytes

void TAPKG_Timer1Timer(int param_1)

{
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  uint *local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = (uint *)0x0;
  puStack_14 = &LAB_004fa7f4;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  SysUtils_Time();
  SysUtils_TimeToStr((int *)&local_8,extraout_EDX,extraout_ECX);
  TControl_SetText(Self->Hora,local_8);
  SysUtils_Date();
  SysUtils_DateToStr((int *)&local_8,extraout_EDX_00,extraout_ECX_00);
  TControl_SetText(Self->Data,local_8);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_004fa7fb;
  puStack_14 = (undefined1 *)0x4fa7f3;
  System_LStrClr((int *)&local_8);
  return;
}

