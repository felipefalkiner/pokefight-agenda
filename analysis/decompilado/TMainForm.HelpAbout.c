// TMainForm.HelpAbout @ 004b5cd0  body=56 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TMainForm_HelpAbout(void)

{
  undefined4 uVar1;
  
  uVar1 = TCustomForm_Create(class_Tabout,'\x01',*(undefined4 *)PTR_DAT_004fd90c);
  *(undefined4 *)PTR_DAT_004fda50 = uVar1;
  (**(code **)(**(int **)PTR_DAT_004fda50 + 0xcc))();
  TCustomForm_Release_or_Free(*(int **)PTR_DAT_004fda50);
  return;
}

