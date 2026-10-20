// Temail.enviarClick @ 004a9a84  body=152 bytes

void Temail_enviarClick(int param_1)

{
  int *piVar1;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 *puStack_8;
  
  puStack_10 = &stack0xfffffffc;
  puStack_8 = (undefined4 *)0x0;
  puStack_14 = &LAB_004a9b1c;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  (**(code **)(*Self->NMSMTP1 + 0x34))();
  SysUtils_Date();
  SysUtils_DateToStr((int *)&puStack_8,extraout_EDX,extraout_ECX);
  System_LStrAsg((int *)(*(int *)(Self->NMSMTP1 + 0x2ac) + 0x14),puStack_8);
  piVar1 = *(int **)(*(int *)(Self->NMSMTP1 + 0x2ac) + 0x2c);
  (**(code **)(*piVar1 + 8))(piVar1,*(undefined4 *)(Self->editor + 0x234));
  FUN_004a808c(Self->NMSMTP1);
  (**(code **)(*Self->NMSMTP1 + 0x38))();
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_004a9b23;
  puStack_14 = (undefined1 *)0x4a9b1b;
  System_LStrClr((int *)&puStack_8);
  return;
}

