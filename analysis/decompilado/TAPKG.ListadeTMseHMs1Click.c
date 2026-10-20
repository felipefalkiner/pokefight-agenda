// TAPKG.ListadeTMseHMs1Click @ 004fa904  body=56 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TAPKG_ListadeTMseHMs1Click(void)

{
  undefined4 uVar1;
  
  uVar1 = TCustomForm_Create(class_Ttm,'\x01',*(undefined4 *)PTR_DAT_004fd90c);
  *_DAT_004fd808 = uVar1;
  (**(code **)(*(int *)*_DAT_004fd808 + 0xcc))();
  TCustomForm_Release_or_Free((int *)*_DAT_004fd808);
  return;
}

