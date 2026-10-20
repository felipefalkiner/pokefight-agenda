// TAPKG.AppEvents1Minimize @ 004f94d8  body=46 bytes

void TAPKG_AppEvents1Minimize(int param_1)

{
  if (*PTR_DAT_004fd7fc != '\0') {
    ShowWindow(*(HWND *)(*(int *)PTR_DAT_004fd90c + 0x24),0);
  }
  TRxTrayIcon_SetActive(Self->theme,1);
  return;
}

