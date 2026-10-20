// TMainForm.TextodoPokmon1Click @ 004b72cc  body=477 bytes

void TMainForm_TextodoPokmon1Click(int param_1)

{
  int *piVar1;
  undefined *puVar2;
  undefined4 uStack_20;
  undefined *puStack_1c;
  undefined1 *puStack_18;
  undefined4 *puStack_c;
  int iStack_8;
  
  puVar2 = PTR_DAT_004fd700;
  puStack_18 = &stack0xfffffffc;
  iStack_8 = 0;
  puStack_c = (undefined4 *)0x0;
  puStack_1c = &UNK_004b74a9;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  (**(code **)(*Self->Editor + 0xd0))();
  TControl_GetText(*(int *)(*(int *)puVar2 + 0x2f0),(int *)&puStack_c);
  System_LStrCat3(&iStack_8,(undefined4 *)"Pokémon: ",puStack_c);
  piVar1 = *(int **)(Self->Editor + 0x234);
  (**(code **)(*piVar1 + 0x34))(piVar1,iStack_8);
  TControl_GetText(*(int *)(*(int *)puVar2 + 0x2f4),(int *)&puStack_c);
  System_LStrCat3(&iStack_8,(undefined4 *)"Tipo: ",puStack_c);
  piVar1 = *(int **)(Self->Editor + 0x234);
  (**(code **)(*piVar1 + 0x34))(piVar1,iStack_8);
  TControl_GetText(*(int *)(*(int *)puVar2 + 0x2f8),(int *)&puStack_c);
  System_LStrCat3(&iStack_8,(undefined4 *)"Versão: ",puStack_c);
  piVar1 = *(int **)(Self->Editor + 0x234);
  (**(code **)(*piVar1 + 0x34))(piVar1,iStack_8);
  TControl_GetText(*(int *)(*(int *)puVar2 + 0x2fc),(int *)&puStack_c);
  System_LStrCat3(&iStack_8,(undefined4 *)"Evolução: ",puStack_c);
  piVar1 = *(int **)(Self->Editor + 0x234);
  (**(code **)(*piVar1 + 0x34))(piVar1,iStack_8);
  TControl_GetText(*(int *)(*(int *)puVar2 + 0x300),(int *)&puStack_c);
  System_LStrCat3(&iStack_8,(undefined4 *)"Localização: ",puStack_c);
  piVar1 = *(int **)(Self->Editor + 0x234);
  (**(code **)(*piVar1 + 0x34))(piVar1,iStack_8);
  piVar1 = *(int **)(Self->Editor + 0x234);
  (**(code **)(*piVar1 + 0x34))(piVar1,0);
  TControl_GetText(*(int *)(*(int *)puVar2 + 0x2e4),(int *)&puStack_c);
  System_LStrCat3(&iStack_8,(undefined4 *)"Sobre o pokémon: ",puStack_c);
  piVar1 = *(int **)(Self->Editor + 0x234);
  (**(code **)(*piVar1 + 0x34))(piVar1,iStack_8);
  piVar1 = *(int **)(Self->Editor + 0x234);
  (**(code **)(*piVar1 + 0x34))(piVar1,0);
  TControl_GetText(*(int *)(*(int *)puVar2 + 0x2ec),(int *)&puStack_c);
  System_LStrCat3(&iStack_8,(undefined4 *)"Movimentos: ",puStack_c);
  piVar1 = *(int **)(Self->Editor + 0x234);
  (**(code **)(*piVar1 + 0x34))(piVar1,iStack_8);
  *in_FS_OFFSET = uStack_20;
  puStack_18 = "^[YY]Ã";
  puStack_1c = (undefined *)0x4b74a0;
  System_LStrClr((int *)&puStack_c);
  puStack_1c = (undefined *)0x4b74a8;
  System_LStrClr(&iStack_8);
  return;
}

