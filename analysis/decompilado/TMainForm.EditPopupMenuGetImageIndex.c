// TMainForm.EditPopupMenuGetImageIndex @ 004b6e80  body=39 bytes

void TMainForm_EditPopupMenuGetImageIndex
               (int param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  if (((param_3 == Self->CutItm) || (param_3 == Self->CopyItm)) ||
     (param_3 == Self->PasteItm)) {
    *param_4 = *(undefined4 *)(param_3 + 0xc);
  }
  return;
}

