// TMainForm.RulerItemMouseDown @ 004b60b4  body=169 bytes

void TMainForm_RulerItemMouseDown
               (int param_1,int *param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  HWND hWnd;
  HDC pHVar2;
  COLORREF color;
  HPEN h;
  HGDIOBJ pvVar3;
  HRGN hrgnClip;
  DWORD flags;
  
  iVar1 = param_2[0xe] >> 1;
  if (iVar1 < 0) {
    iVar1 = iVar1 + (uint)((param_2[0xe] & 1U) != 0);
  }
  *(int *)(param_1 + 0x438) = iVar1;
  iVar1 = FUN_00457250(0,(param_2[0xc] + param_5) - *(int *)(param_1 + 0x438));
  FUN_00430c9c(param_2,iVar1);
  flags = 0x412;
  hrgnClip = (HRGN)0x0;
  hWnd = (HWND)FUN_004372c4(Self->Editor);
  pHVar2 = GetDCEx(hWnd,hrgnClip,flags);
  *(HDC *)(param_1 + 0x440) = pHVar2;
  color = FUN_00418554(0x80000008);
  h = CreatePen(2,1,color);
  pvVar3 = SelectObject(*(HDC *)(param_1 + 0x440),h);
  *(HGDIOBJ *)(param_1 + 0x444) = pvVar3;
  SetROP2(*(HDC *)(param_1 + 0x440),7);
  FUN_004b605c(param_1,param_2);
  FUN_004b52fc(param_1);
  *(undefined1 *)(param_1 + 0x449) = 1;
  return;
}

