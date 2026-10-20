// Temail.Fonte1Click @ 004a9c58  body=40 bytes

void Temail_Fonte1Click(int param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*Self->FontDialog1 + 0x3c))();
  if (cVar1 != '\0') {
    FUN_004315cc(Self->editor);
  }
  return;
}

