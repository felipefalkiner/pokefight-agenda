// TMainForm.SelectFont @ 004b5d08  body=74 bytes

void TMainForm_SelectFont(int param_1)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = *(int **)(Self->FontDialog + 0x4c);
  (**(code **)(*piVar2 + 8))(piVar2,*(undefined4 *)(Self->Editor + 0x218));
  cVar1 = (**(code **)(*Self->FontDialog + 0x3c))();
  if (cVar1 != '\0') {
    piVar2 = (int *)FUN_004b50e8(param_1);
    (**(code **)(*piVar2 + 8))(piVar2,*(undefined4 *)(Self->FontDialog + 0x4c));
  }
  FUN_004b4df0(param_1);
  return;
}

