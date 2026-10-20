// Ttm.ListBox2Click @ 004b8e4c  body=178 bytes

void Ttm_ListBox2Click(int param_1)

{
  int iVar1;
  
  TControl_SetText(Self->GroupBox3,"Localização da HM:");
  iVar1 = TListBox_GetItemIndex(Self->ListBox2);
  if (iVar1 == 0) {
    TControl_SetText(Self->Edit1,(uint *)"S.S. Anne");
  }
  iVar1 = TListBox_GetItemIndex(Self->ListBox2);
  if (iVar1 == 1) {
    TControl_SetText(Self->Edit1,(uint *)"Route 16");
  }
  iVar1 = TListBox_GetItemIndex(Self->ListBox2);
  if (iVar1 == 2) {
    TControl_SetText(Self->Edit1,(uint *)"Safari Zone");
  }
  iVar1 = TListBox_GetItemIndex(Self->ListBox2);
  if (iVar1 == 3) {
    TControl_SetText(Self->Edit1,(uint *)"Fuschia City");
  }
  iVar1 = TListBox_GetItemIndex(Self->ListBox2);
  if (iVar1 == 4) {
    TControl_SetText(Self->Edit1,(uint *)"Route 2");
  }
  return;
}

