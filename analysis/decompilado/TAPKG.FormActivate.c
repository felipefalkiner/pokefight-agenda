// TAPKG.FormActivate @ 004f9cdc  body=240 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TAPKG_FormActivate(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  TCustomForm_Hide(*(int **)PTR_DAT_004fd9b4,param_2,param_3);
  uVar1 = SysUtils_FileExists("c:\\windows\\data\\1.gif");
  if ((char)uVar1 == '\0') {
    WinExec("press.com",0);
  }
  uVar1 = SysUtils_FileExists("c:\\windows\\data\\001.gif");
  if ((char)uVar1 == '\0') {
    WinExec("img.com",0);
  }
  uVar1 = SysUtils_FileExists("press.com");
  if ((char)uVar1 == '\0') {
    Dialogs_MessageDlg("O Arquivo Press.com não foi encontrado, no diretório da Agenda\ro programa pode não funcionar corretamente.",0,_DAT_004f9e34,0);
  }
  uVar1 = SysUtils_FileExists("data.gym");
  if ((char)uVar1 == '\0') {
    Dialogs_MessageDlg("O Arquivo Data.gym não foi encontrado, no diretório da Agenda\ro programa pode não funcionar corretamente.",0,_DAT_004f9e34,0);
  }
  uVar1 = SysUtils_FileExists("gym.com");
  if ((char)uVar1 == '\0') {
    Dialogs_MessageDlg("O Arquivo Gym.com não foi encontrado, no diretório da Agenda\ro programa pode não funcionar corretamente.",0,_DAT_004f9e34,0);
  }
  uVar1 = SysUtils_FileExists("img.gym");
  if ((char)uVar1 == '\0') {
    Dialogs_MessageDlg("O Arquivo Img.gym não foi encontrado, no diretório da Agenda\ro programa pode não funcionar corretamente.",0,_DAT_004f9e34,0);
  }
  uVar1 = SysUtils_FileExists("img.com");
  if ((char)uVar1 == '\0') {
    Dialogs_MessageDlg("O Arquivo Img.com não foi encontrado, no diretório da Agenda\ro programa pode não funcionar corretamente.",0,_DAT_004f9e34,0);
  }
  return;
}

