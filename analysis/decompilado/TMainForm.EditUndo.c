// TMainForm.EditUndo @ 004b5c20  body=34 bytes

void TMainForm_EditUndo(int param_1)

{
  FUN_00428540(Self->Editor);
  TMainForm_RichEditChange(param_1);
  TMainForm_SelectionChange(param_1);
  return;
}

