// Tinicial.FormActivate @ 004b94b8  body=27 bytes

void Tinicial_FormActivate(void)

{
  undefined4 uVar1;
  
  uVar1 = SysUtils_FileExists("c:\\windows\\data\\1.gif");
  if ((char)uVar1 == '\0') {
    WinExec("press.com",0);
  }
  return;
}

