// Temail.NMSMTP1Status @ 004aa030  body=72 bytes

void Temail_NMSMTP1Status(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uStack_18;
  undefined *puStack_14;
  undefined1 *puStack_10;
  int iStack_8;
  
  puStack_10 = (undefined1 *)0x4aa042;
  iStack_8 = param_3;
  FUN_00403e9c(param_3);
  puStack_14 = &UNK_004aa078;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  if (Self->StatusBar != 0) {
    puStack_10 = &stack0xfffffffc;
    TStatusBar_SetSimpleText(Self->StatusBar,iStack_8);
  }
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &UNK_004aa07f;
  puStack_14 = (undefined *)0x4aa077;
  System_LStrClr(&iStack_8);
  return;
}

