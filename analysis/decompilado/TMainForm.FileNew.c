// TMainForm.FileNew @ 004b57c8  body=186 bytes

void TMainForm_FileNew(int param_1)

{
  int iVar1;
  undefined4 uStack_18;
  undefined *puStack_14;
  undefined1 *puStack_10;
  
  puStack_10 = (undefined1 *)0x4b57d8;
  FUN_004b51f4(param_1);
  puStack_10 = (undefined1 *)0x4b57e5;
  FUN_004b511c(param_1,(undefined4 *)"Pokémon");
  *(undefined1 *)(param_1 + 0x44a) = 1;
  puStack_14 = &UNK_004b5882;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  (**(code **)(**(int **)(Self->Editor + 0x234) + 0x40))();
  FUN_004282fc(Self->Editor,0);
  func_0x004283bc(Self->Editor,0);
  FUN_004b67d4(param_1,'\0');
  iVar1 = Self->Editor;
  (**(code **)(**(int **)(iVar1 + 0x21c) + 8))
            (*(int **)(iVar1 + 0x21c),*(undefined4 *)(iVar1 + 0x58));
  (**(code **)(**(int **)(iVar1 + 0x218) + 8))
            (*(int **)(iVar1 + 0x218),*(undefined4 *)(iVar1 + 0x58));
  TMainForm_SelectionChange(param_1);
  *in_FS_OFFSET = uStack_18;
  *(undefined1 *)(param_1 + 0x44a) = 0;
  return;
}

