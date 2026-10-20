// TAPKG.AppEvents1Restore @ 004f9508  body=46 bytes

void TAPKG_AppEvents1Restore(int param_1)

{
  if (*PTR_DAT_004fd7fc != '\0') {
    ShowWindow(*(HWND *)(*(int *)PTR_DAT_004fd90c + 0x24),5);
  }
  TRxTrayIcon_SetActive(Self->theme,0);
  return;
}

