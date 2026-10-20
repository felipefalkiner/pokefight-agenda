// TMainForm.LeftIndMouseUp @ 004b6234  body=180 bytes

void TMainForm_LeftIndMouseUp(int param_1)

{
  HGDIOBJ ho;
  HWND hWnd;
  int iVar1;
  int iVar2;
  int iVar3;
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
  iVar1 = FUN_004b4d34(param_1,*(int *)(Self->LeftInd + 0x30) +
                               *(int *)(param_1 + 0x438),'\0');
  iVar2 = FUN_00497414(*(int *)(Self->Editor + 0x224));
  iVar1 = iVar1 - iVar2;
  iVar2 = *(int *)(Self->Editor + 0x224);
  iVar3 = FUN_00497414(iVar2);
  iVar1 = FUN_00457250(-iVar3,iVar1);
  FUN_00497490(iVar2,iVar1);
  TMainForm_SelectionChange(param_1);
  return;
}

