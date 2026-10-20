// TAPKG.t5Click @ 004fa0c8  body=56 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TAPKG_t5Click(void)

{
  undefined4 uVar1;
  
  uVar1 = TCustomForm_Create(class_TCores,'\x01',*(undefined4 *)PTR_DAT_004fd90c);
  *(undefined4 *)PTR_DAT_004fd86c = uVar1;
  (**(code **)(**(int **)PTR_DAT_004fd86c + 0xcc))();
  TCustomForm_Release_or_Free(*(int **)PTR_DAT_004fd86c);
  return;
}

