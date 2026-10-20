// Temail.NMSMTP1InvalidHost @ 004a9e8c  body=91 bytes

void Temail_NMSMTP1InvalidHost(int param_1,undefined1 *param_2)

{
  char cVar1;
  undefined4 uStack_1c;
  undefined *puStack_18;
  undefined1 *puStack_14;
  undefined4 *puStack_8;
  
  puStack_14 = &stack0xfffffffc;
  puStack_8 = (undefined4 *)0x0;
  puStack_18 = &UNK_004a9ee7;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  cVar1 = func_0x0045600c("Host inválido!","Especifique um novo host:",&puStack_8);
  if (cVar1 != '\0') {
    System_LStrAsg((int *)(Self->NMSMTP1 + 0x278),puStack_8);
    *param_2 = 1;
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &UNK_004a9eee;
  puStack_18 = (undefined *)0x4a9ee6;
  System_LStrClr((int *)&puStack_8);
  return;
}

