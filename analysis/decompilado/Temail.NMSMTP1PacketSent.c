// Temail.NMSMTP1PacketSent @ 004a9f30  body=136 bytes

void Temail_NMSMTP1PacketSent(int param_1)

{
  undefined4 uStack_20;
  undefined *puStack_1c;
  undefined1 *puStack_18;
  int aiStack_10 [3];
  
  puStack_18 = &stack0xfffffffc;
  aiStack_10[2] = 0;
  aiStack_10[1] = 0;
  aiStack_10[0] = 0;
  puStack_1c = &UNK_004a9fb8;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_00408470(*(undefined4 *)(Self->NMSMTP1 + 0x80),aiStack_10 + 1);
  FUN_00408470(*(undefined4 *)(Self->NMSMTP1 + 0xbc),aiStack_10);
  FUN_00403da8(aiStack_10 + 2,4);
  TStatusBar_SetSimpleText(Self->StatusBar,aiStack_10[2]);
  *in_FS_OFFSET = " para terminar!";
  FUN_00403a90(aiStack_10,3);
  return;
}

