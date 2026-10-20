// TMainForm.AlignButtonClick @ 004b5f70  body=30 bytes

void TMainForm_AlignButtonClick(int param_1,int param_2)

{
  if (*(char *)(param_1 + 0x434) == '\0') {
    FUN_00497340(*(int *)(Self->Editor + 0x224),*(byte *)(param_2 + 0xc));
  }
  return;
}

