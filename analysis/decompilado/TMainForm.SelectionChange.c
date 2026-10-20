// TMainForm.SelectionChange @ 004b4e10  body=683 bytes

void TMainForm_SelectionChange(int param_1)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  uint *local_c;
  int local_8;
  
  puStack_18 = &stack0xfffffffc;
  puStack_24 = &stack0xfffffffc;
  local_c = (uint *)0x0;
  puStack_1c = &LAB_004b50d8;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  iVar8 = *(int *)(Self->Editor + 0x224);
  puStack_28 = &LAB_004b50bb;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  *(undefined1 *)(param_1 + 0x434) = 1;
  local_8 = param_1;
  iVar5 = FUN_00497414(iVar8);
  iVar5 = FUN_004b4c70(local_8,iVar5,'\0');
  uVar1 = *(uint *)(*(int *)(local_8 + 0x308) + 0x38);
  iVar6 = (int)uVar1 >> 1;
  if (iVar6 < 0) {
    iVar6 = iVar6 + (uint)((uVar1 & 1) != 0);
  }
  FUN_00430c9c(*(int **)(local_8 + 0x308),iVar5 - iVar6);
  iVar5 = FUN_00497470(iVar8);
  iVar6 = FUN_00497414(iVar8);
  iVar5 = FUN_004b4c70(local_8,iVar5 + iVar6,'\0');
  uVar1 = *(uint *)(*(int *)(local_8 + 0x30c) + 0x38);
  iVar6 = (int)uVar1 >> 1;
  if (iVar6 < 0) {
    iVar6 = iVar6 + (uint)((uVar1 & 1) != 0);
  }
  FUN_00430c9c(*(int **)(local_8 + 0x30c),iVar5 - iVar6);
  iVar5 = FUN_004974cc(iVar8);
  iVar5 = FUN_004b4c70(local_8,iVar5,'\x01');
  uVar1 = *(uint *)(*(int *)(local_8 + 0x314) + 0x38);
  iVar6 = (int)uVar1 >> 1;
  if (iVar6 < 0) {
    iVar6 = iVar6 + (uint)((uVar1 & 1) != 0);
  }
  FUN_00430c9c(*(int **)(local_8 + 0x314),iVar5 - iVar6);
  iVar5 = FUN_004b50e8(local_8);
  bVar2 = FUN_00496c7c(iVar5);
  FUN_004ac79c(*(int *)(local_8 + 1000),(bVar2 & 1) != 0);
  iVar5 = FUN_004b50e8(local_8);
  bVar2 = FUN_00496c7c(iVar5);
  FUN_004ac79c(*(int *)(local_8 + 0x3ec),(bVar2 & 2) != 0);
  iVar5 = FUN_004b50e8(local_8);
  bVar2 = FUN_00496c7c(iVar5);
  FUN_004ac79c(*(int *)(local_8 + 0x3f0),(bVar2 & 4) != 0);
  cVar3 = FUN_0049737c(iVar8);
  FUN_004ac79c(*(int *)(local_8 + 0x410),cVar3);
  iVar5 = FUN_004b50e8(local_8);
  uVar7 = FUN_00496de8(iVar5);
  FUN_004ac79c(*(int *)(local_8 + 0x408),(char)uVar7 == '\x02');
  iVar5 = FUN_004b50e8(local_8);
  uVar7 = FUN_00496de8(iVar5);
  FUN_004ac79c(*(int *)(local_8 + 0x40c),(char)uVar7 == '\x01');
  iVar5 = FUN_004b50e8(local_8);
  FUN_00496d24(iVar5);
  FUN_004b2950(*(int *)(local_8 + 0x3e0));
  iVar5 = FUN_004b50e8(local_8);
  FUN_00496be8(iVar5,(int *)&local_c);
  FUN_004a2774(*(int **)(local_8 + 0x3dc),local_c);
  iVar5 = FUN_004b50e8(local_8);
  bVar4 = FUN_004969d8(iVar5);
  TMenuItem_SetChecked(*(int *)(local_8 + 0x374),bVar4);
  iVar5 = FUN_004b50e8(local_8);
  bVar4 = FUN_00496a8c(iVar5);
  TMenuItem_SetChecked(*(int *)(local_8 + 0x378),bVar4);
  iVar5 = FUN_004b50e8(local_8);
  bVar4 = FUN_00496a28(iVar5);
  TMenuItem_SetChecked(*(int *)(local_8 + 0x37c),bVar4);
  iVar8 = FUN_00497324(iVar8);
  cVar3 = (char)iVar8;
  if (cVar3 == '\0') {
    FUN_004ac79c(*(int *)(local_8 + 0x3fc),'\x01');
  }
  else if (cVar3 == '\x01') {
    FUN_004ac79c(*(int *)(local_8 + 0x404),'\x01');
  }
  else if (cVar3 == '\x02') {
    FUN_004ac79c(*(int *)(local_8 + 0x400),'\x01');
  }
  FUN_004b637c(local_8);
  *in_FS_OFFSET = uStack_2c;
  *(undefined1 *)(local_8 + 0x434) = 0;
  return;
}

