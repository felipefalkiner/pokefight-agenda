// TMainForm.EditorTextNotFound @ 004b6da4  body=95 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TMainForm_EditorTextNotFound(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uStack_20;
  undefined *puStack_1c;
  undefined1 *puStack_18;
  undefined4 uStack_10;
  undefined1 uStack_c;
  uint *puStack_8;
  
  puStack_18 = &stack0xfffffffc;
  puStack_8 = (uint *)0x0;
  puStack_1c = &UNK_004b6e03;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  iVar1 = 0;
  uStack_c = 0xb;
  uStack_10 = param_3;
  FUN_00409174((byte *)"Text \"%s\" not found.",&uStack_10,0,(int *)&puStack_8);
  Dialogs_MessageDlg(puStack_8,0,_DAT_004b6e30,iVar1);
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &UNK_004b6e0a;
  puStack_1c = (undefined *)0x4b6e02;
  System_LStrClr((int *)&puStack_8);
  return;
}

