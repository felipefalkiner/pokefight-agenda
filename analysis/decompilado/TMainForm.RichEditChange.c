// TMainForm.RichEditChange @ 004b6760  body=113 bytes

void TMainForm_RichEditChange(int param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = FUN_00428290(Self->Editor);
  FUN_004b67d4(param_1,cVar1);
  bVar2 = FUN_004282c8(Self->Editor);
  FUN_004ac4fc(Self->UndoBtn,CONCAT31(extraout_var,bVar2));
  TMenuItem_SetEnabled(Self->EditUndoItem,*(byte *)(Self->UndoBtn + 0x29));
  bVar2 = FUN_0049afd4(Self->Editor);
  TMenuItem_SetEnabled(Self->EditRedoItem,bVar2);
  FUN_004ac4fc(Self->RedoBtn,
               CONCAT31((int3)((uint)extraout_EDX >> 8),
                        *(undefined1 *)(Self->EditRedoItem + 0x2d)));
  return;
}

