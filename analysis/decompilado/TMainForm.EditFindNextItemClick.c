// TMainForm.EditFindNextItemClick @ 004b6d30  body=32 bytes

void TMainForm_EditFindNextItemClick(int param_1)

{
  char cVar1;
  
  cVar1 = func_0x0049cd38(Self->Editor);
  if (cVar1 == '\0') {
    func_0x0045825c();
  }
  FUN_004b4df0(param_1);
  return;
}

