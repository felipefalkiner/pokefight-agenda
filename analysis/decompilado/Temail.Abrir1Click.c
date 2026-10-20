// Temail.Abrir1Click @ 004a9b40  body=107 bytes

void Temail_Abrir1Click(int param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  int local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = 0;
  puStack_14 = &LAB_004a9bab;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  cVar2 = (**(code **)(*Self->OpenDialog1 + 0x3c))();
  if (cVar2 != '\0') {
    FUN_00454640(Self->OpenDialog1,&local_8);
    piVar1 = *(int **)(Self->editor + 0x234);
    (**(code **)(*piVar1 + 0x58))(piVar1,local_8);
  }
  (**(code **)(*Self->editor + 0xb4))();
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_004a9bb2;
  puStack_14 = (undefined1 *)0x4a9baa;
  System_LStrClr(&local_8);
  return;
}

