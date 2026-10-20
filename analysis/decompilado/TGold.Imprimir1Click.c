// TGold.Imprimir1Click @ 004b9220  body=86 bytes

void TGold_Imprimir1Click(int param_1)

{
  char cVar1;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  int iStack_8;
  
  puStack_10 = &stack0xfffffffc;
  iStack_8 = 0;
  puStack_14 = &LAB_004b9276;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  cVar1 = (**(code **)(*Self->PrintDialog1 + 0x3c))();
  if (cVar1 != '\0') {
    TControl_GetText(param_1,&iStack_8);
    (**(code **)(*Self->RichEdit1 + 0xe0))(Self->RichEdit1,iStack_8);
  }
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_004b927d;
  puStack_14 = (undefined1 *)0x4b9275;
  System_LStrClr(&iStack_8);
  return;
}

