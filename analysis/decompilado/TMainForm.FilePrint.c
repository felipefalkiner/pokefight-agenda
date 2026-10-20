// TMainForm.FilePrint @ 004b5bf0  body=40 bytes

void TMainForm_FilePrint(int param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*Self->PrintDialog + 0x3c))();
  if (cVar1 != '\0') {
    (**(code **)(*Self->Editor + 0xec))
              (Self->Editor,*(undefined4 *)(param_1 + 0x430));
  }
  return;
}

