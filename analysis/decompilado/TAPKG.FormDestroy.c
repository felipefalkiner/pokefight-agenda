// TAPKG.FormDestroy @ 004f9554  body=22 bytes

void TAPKG_FormDestroy(void)

{
  int iVar1;
  
  iVar1 = *(int *)PTR_DAT_004fdab0;
  *(undefined4 *)(iVar1 + 0x84) = 0;
  *(undefined4 *)(iVar1 + 0x88) = 0;
  return;
}

