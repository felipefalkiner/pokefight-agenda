// Temail.Salvar1Click @ 004a9bb8  body=93 bytes

void Temail_Salvar1Click(int param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 uStack_18;
  undefined *puStack_14;
  undefined1 *puStack_10;
  int iStack_8;
  
  puStack_10 = &stack0xfffffffc;
  iStack_8 = 0;
  puStack_14 = &UNK_004a9c15;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  cVar2 = (**(code **)(*Self->SaveDialog1 + 0x3c))();
  if (cVar2 != '\0') {
    FUN_00454640(Self->SaveDialog1,&iStack_8);
    piVar1 = *(int **)(Self->editor + 0x234);
    (**(code **)(*piVar1 + 100))(piVar1,iStack_8);
  }
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &UNK_004a9c1c;
  puStack_14 = (undefined *)0x4a9c14;
  System_LStrClr(&iStack_8);
  return;
}

