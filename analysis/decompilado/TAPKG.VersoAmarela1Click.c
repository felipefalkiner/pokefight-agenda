// TAPKG.VersoAmarela1Click @ 004f9bc4  body=56 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TAPKG_VersoAmarela1Click(void)

{
  undefined4 uVar1;
  
  uVar1 = TCustomForm_Create(class_Tyellow,'\x01',*(undefined4 *)PTR_DAT_004fd90c);
  *(undefined4 *)PTR_DAT_004fd6b4 = uVar1;
  (**(code **)(**(int **)PTR_DAT_004fd6b4 + 0xcc))();
  TCustomForm_Release_or_Free(*(int **)PTR_DAT_004fd6b4);
  return;
}

