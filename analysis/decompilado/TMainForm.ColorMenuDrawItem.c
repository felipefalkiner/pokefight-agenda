// TMainForm.ColorMenuDrawItem @ 004b6f90  body=151 bytes

void TMainForm_ColorMenuDrawItem
               (undefined4 param_1,int *param_2,int param_3,byte param_4,LONG *param_5)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  tagRECT *ptVar4;
  tagRECT local_14;
  
  ptVar4 = &local_14;
  for (iVar3 = 4; iVar3 != 0; iVar3 = iVar3 + -1) {
    ptVar4->left = *param_5;
    param_5 = param_5 + 1;
    ptVar4 = (tagRECT *)&ptVar4->top;
  }
  FUN_004a0264(param_2,param_3,&local_14.left,param_4);
  uVar2 = GetMenuCheckMarkDimensions();
  local_14.left = local_14.left + (uVar2 & 0xffff) + 6;
  local_14.right = local_14.left + 0x14;
  InflateRect(&local_14,0,-3);
  piVar1 = (int *)param_2[0x1a];
  FUN_00419230((int *)piVar1[5],0x80000007);
  FUN_004198d0(piVar1,&local_14);
  InflateRect(&local_14,-1,-1);
  FUN_00419230((int *)piVar1[5],*(undefined4 *)(param_3 + 0xc));
  FUN_00419894(piVar1,&local_14);
  return;
}

