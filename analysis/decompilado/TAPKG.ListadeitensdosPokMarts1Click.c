// TAPKG.ListadeitensdosPokMarts1Click @ 004fa8cc  body=56 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TAPKG_ListadeitensdosPokMarts1Click(void)

{
  undefined4 uVar1;
  
  uVar1 = TCustomForm_Create(class_TMarts,'\x01',*(undefined4 *)PTR_DAT_004fd90c);
  *(undefined4 *)PTR_DAT_004fd744 = uVar1;
  (**(code **)(**(int **)PTR_DAT_004fd744 + 0xcc))();
  TCustomForm_Release_or_Free(*(int **)PTR_DAT_004fd744);
  return;
}

