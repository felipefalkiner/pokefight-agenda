// TGold.Fonte1Click @ 004b9284  body=40 bytes

void TGold_Fonte1Click(int param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*Self->FontDialog1 + 0x3c))();
  if (cVar1 != '\0') {
    FUN_004315cc(Self->RichEdit1);
  }
  return;
}

