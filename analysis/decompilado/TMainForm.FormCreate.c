// TMainForm.FormCreate @ 004b5448  body=786 bytes

void TMainForm_FormCreate(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  ushort uVar5;
  undefined1 *puVar6;
  byte bVar7;
  uint **ppuVar8;
  undefined4 uStack_60;
  undefined1 *puStack_5c;
  undefined1 *puStack_58;
  int local_48;
  int local_44;
  int local_40;
  undefined *local_3c;
  undefined1 local_38;
  int local_34;
  undefined1 local_30;
  int local_2c;
  undefined1 local_28;
  int local_24;
  undefined1 local_20;
  undefined4 *local_1c;
  undefined *local_18;
  uint *local_14;
  int *local_10;
  int *local_c;
  int local_8;
  
  puStack_58 = &stack0xfffffffc;
  local_14 = (uint *)0x0;
  local_18 = (undefined *)0x0;
  local_40 = 0;
  local_44 = 0;
  local_48 = 0;
  local_1c = (undefined4 *)0x0;
  puStack_5c = &LAB_004b575a;
  uStack_60 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_60;
  FUN_00402910(0,(int *)&local_18);
  FUN_004088f0(local_18,(int *)&local_14);
  FUN_004546a8(param_1[0xbd],(undefined *)local_14);
  FUN_004546a8(param_1[0xbe],*(undefined **)(param_1[0xbd] + 0x60));
  TControl_GetText(*(int *)(*(int *)PTR_DAT_004fd700 + 0x2f0),(int *)&local_1c);
  System_LStrCat3((int *)&local_14,(undefined4 *)0x0,local_1c);
  FUN_004b511c((int)param_1,local_14);
  FUN_004b5364((int)param_1);
  FUN_004372a0(param_1);
  TMainForm_SelectionChange((int)param_1);
  iVar1 = param_1[0xc6];
  *(int **)(iVar1 + 0x2c0) = param_1;
  *(undefined1 **)(iVar1 + 700) = &LAB_004b6e34;
  iVar1 = FUN_004b2f3c((int *)PTR_PTR_004b2e58,'\x01',param_1);
  param_1[0x114] = iVar1;
  ppuVar8 = &local_14;
  FUN_0041ffb4((int)PTR_PTR_00417b58,(int *)&local_18,extraout_ECX);
  local_3c = local_18;
  local_38 = 0xb;
  FUN_0041ffb4((int)PTR_PTR_00417a1c,&local_40,extraout_ECX_00);
  local_34 = local_40;
  local_30 = 0xb;
  FUN_0041ffb4((int)PTR_LAB_00479580,&local_44,extraout_ECX_01);
  local_2c = local_44;
  local_28 = 0xb;
  FUN_0041ffb4((int)PTR_PTR_00473a78,&local_48,extraout_ECX_02);
  local_24 = local_48;
  local_20 = 0xb;
  FUN_00409174((byte *)"%s|%s|%s|%s",&local_3c,3,(int *)ppuVar8);
  System_LStrAsg((int *)(iVar1 + 0x54),local_14);
  local_c = *(int **)(param_1[0xd3] + 0x28);
  while( true ) {
    iVar1 = FUN_00440acc((int)local_c);
    if (iVar1 < 1) break;
    iVar1 = FUN_00440acc((int)local_c);
    piVar3 = (int *)FUN_00440adc((int)local_c,iVar1 + -1);
    FUN_00402e3c(piVar3);
  }
  local_8 = 0x11;
  piVar3 = &DAT_004fd514;
  do {
    bVar7 = 1;
    puVar6 = &LAB_004b6f30;
    uVar5 = 0;
    uVar4 = 0;
    piVar2 = param_1;
    FUN_004b4bf4(*piVar3,(int *)&local_14);
    piVar2 = FUN_00442b58(local_14,0,0,uVar4,uVar5,(int)puVar6,(int)piVar2,bVar7);
    FUN_004410d4(piVar2,'\x01');
    piVar2[3] = *piVar3;
    FUN_00440e44(local_c,(int)piVar2);
    piVar3 = piVar3 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  local_10 = *(int **)(param_1[0xdb] + 0x28);
  local_8 = 0;
  while( true ) {
    iVar1 = FUN_00440acc((int)local_10);
    if (iVar1 < 1) break;
    iVar1 = FUN_00440acc((int)local_10);
    piVar3 = (int *)FUN_00440adc((int)local_10,iVar1 + -1);
    FUN_00402e3c(piVar3);
  }
  local_8 = 0x11;
  piVar3 = &DAT_004fd558;
  do {
    bVar7 = 1;
    puVar6 = &LAB_004b6f60;
    uVar5 = 0;
    uVar4 = 0;
    piVar2 = param_1;
    FUN_004b4bf4(*piVar3,(int *)&local_14);
    piVar2 = FUN_00442b58(local_14,0,0,uVar4,uVar5,(int)puVar6,(int)piVar2,bVar7);
    FUN_004410d4(piVar2,'\x01');
    piVar2[3] = *piVar3;
    FUN_00440e44(local_10,(int)piVar2);
    piVar3 = piVar3 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  piVar3 = FUN_004b2c5c((int *)PTR_LAB_004b2b54,'\x01',param_1);
  param_1[0x113] = (int)piVar3;
  piVar3[0xd] = (int)param_1;
  piVar3[0xc] = (int)&SUB_004b6830;
  FUN_004ac4fc(param_1[0x102],CONCAT31((int3)((uint)extraout_EDX >> 8),1 < (byte)*PTR_DAT_004fd9d0))
  ;
  FUN_004ac4fc(param_1[0x103],
               CONCAT31((int3)((uint)extraout_EDX_00 >> 8),1 < (byte)*PTR_DAT_004fd9d0));
  FUN_004ac4fc(param_1[0xfe],
               CONCAT31((int3)((uint)extraout_EDX_01 >> 8),1 < (byte)*PTR_DAT_004fd9d0));
  TMenuItem_SetEnabled((int *)param_1[0xde],1 < (byte)*PTR_DAT_004fd9d0);
  TMenuItem_SetEnabled((int *)param_1[0xdf],1 < (byte)*PTR_DAT_004fd9d0);
  *in_FS_OFFSET = uStack_60;
  puStack_58 = &LAB_004b5761;
  puStack_5c = (undefined1 *)0x4b5744;
  FUN_00403a90(&local_48,3);
  puStack_5c = (undefined1 *)0x4b574c;
  System_LStrClr((int *)&local_1c);
  puStack_5c = (undefined1 *)0x4b5759;
  FUN_00403a90((int *)&local_18,2);
  return;
}

