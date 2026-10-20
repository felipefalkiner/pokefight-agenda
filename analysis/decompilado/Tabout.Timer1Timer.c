// Tabout.Timer1Timer @ 004a3aec  body=47 bytes

void Tabout_Timer1Timer(int param_1)

{
  ushort uVar1;
  
  uVar1 = GetKeyState(0x91);
  if ((uVar1 & 1) != 0) {
    (**(code **)(*Self->code1 + 0x60))(Self->code1,1);
    return;
  }
  (**(code **)(*Self->code1 + 0x60))(Self->code1,0);
  return;
}

