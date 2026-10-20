// TAPKG.Imprimir1Click @ 004f9bfc  body=197 bytes

void TAPKG_Imprimir1Click(void)

{
  undefined4 uVar1;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 *local_c;
  undefined *local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = (undefined *)0x0;
  local_c = (undefined4 *)0x0;
  puStack_14 = &LAB_004f9cc1;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  (**(code **)(**(int **)(DAT_004feedc + 0x3dc) + 0xd0))();
  TControl_GetText(*(int *)(DAT_004feedc + 0x388),(int *)&local_c);
  System_LStrCat3((int *)&local_8,(undefined4 *)0x0,local_c);
  TCustomEdit_SetSelText(*(int **)(DAT_004feedc + 0x3dc),local_8);
  TCustomEdit_SetSelText(*(int **)(DAT_004feedc + 0x3dc),".gif");
  uVar1 = TCustomForm_Create((int *)PTR_PTR_004b3e8c,'\x01',*(undefined4 *)PTR_DAT_004fd90c);
  *(undefined4 *)PTR_DAT_004fd6e8 = uVar1;
  (**(code **)(**(int **)PTR_DAT_004fd6e8 + 0xcc))();
  TCustomForm_Release_or_Free(*(int **)PTR_DAT_004fd6e8);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_004f9cc8;
  puStack_14 = (undefined1 *)0x4f9cb8;
  System_LStrClr((int *)&local_c);
  puStack_14 = (undefined1 *)0x4f9cc0;
  System_LStrClr((int *)&local_8);
  return;
}

