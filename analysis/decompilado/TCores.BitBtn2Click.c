// TCores.BitBtn2Click @ 004a343c  body=16 bytes

void TCores_BitBtn2Click(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_1[0xbb];
  *(undefined1 *)(iVar1 + 0x24) = 0;
  TCustomForm_Close(param_1,iVar1,param_3);
  return;
}

