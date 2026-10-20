// TAPKG.GoldSilver1Click @ 004fa93c  body=56 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TAPKG_GoldSilver1Click(void)

{
  undefined4 uVar1;
  
  uVar1 = TCustomForm_Create(class_TGold,'\x01',*(undefined4 *)PTR_DAT_004fd90c);
  *(undefined4 *)PTR_DAT_004fd854 = uVar1;
  (**(code **)(**(int **)PTR_DAT_004fd854 + 0xcc))();
  TCustomForm_Release_or_Free(*(int **)PTR_DAT_004fd854);
  return;
}

