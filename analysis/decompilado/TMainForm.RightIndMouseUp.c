// TMainForm.RightIndMouseUp @ 004b62e8  body=148 bytes

void TMainForm_RightIndMouseUp(int param_1)

{
  HGDIOBJ ho;
  HWND hWnd;
  int iVar1;
  HDC hDC;
  
  *(undefined1 *)(param_1 + 0x449) = 0;
  if (*(char *)(param_1 + 0x448) != '\0') {
    FUN_004b52fc(param_1);
  }
  ho = SelectObject(*(HDC *)(param_1 + 0x440),*(HGDIOBJ *)(param_1 + 0x444));
  DeleteObject(ho);
  hDC = *(HDC *)(param_1 + 0x440);
  hWnd = (HWND)FUN_004372c4(Self->Editor);
  ReleaseDC(hWnd,hDC);
  iVar1 = FUN_004b4d34(param_1,*(int *)(Self->RightInd + 0x30) +
                               *(int *)(param_1 + 0x438),'\x01');
  iVar1 = FUN_00457250(0,iVar1);
  FUN_004974ec(*(int *)(Self->Editor + 0x224),iVar1);
  TMainForm_SelectionChange(param_1);
  return;
}

