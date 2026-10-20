// TAPKG.t1Click @ 004f96f4  body=390 bytes

void TAPKG_t1Click(int param_1)

{
  
  TMenuItem_SetChecked(Self->t1,1);
  TMenuItem_SetChecked(Self->t2,0);
  TMenuItem_SetChecked(Self->t3,0);
  TMenuItem_SetChecked(Self->t4,0);
  TMenuItem_SetChecked(Self->t5,0);
  TControl_SetColor(Self->ListBox1,-0x7ffffffb);
  TFont_SetColor(*(int **)(Self->ListBox1 + 0x58),0,extraout_ECX);
  TControl_SetColor(Self->Memo1,-0x7ffffffb);
  TFont_SetColor(*(int **)(Self->Memo1 + 0x58),0,extraout_ECX_00);
  TControl_SetColor(Self->Edit1,-0x7ffffffb);
  TFont_SetColor(*(int **)(Self->Edit1 + 0x58),0,extraout_ECX_01);
  TControl_SetColor(Self->Edit2,-0x7ffffffb);
  TFont_SetColor(*(int **)(Self->Edit2 + 0x58),0,extraout_ECX_02);
  TControl_SetColor(Self->Edit3,-0x7ffffffb);
  TFont_SetColor(*(int **)(Self->Edit3 + 0x58),0,extraout_ECX_03);
  TControl_SetColor(Self->Edit4,-0x7ffffffb);
  TFont_SetColor(*(int **)(Self->Edit4 + 0x58),0,extraout_ECX_04);
  TControl_SetColor(Self->Edit5,-0x7ffffffb);
  TFont_SetColor(*(int **)(Self->Edit5 + 0x58),0,extraout_ECX_05);
  TControl_SetColor(Self->Edit6,-0x7ffffffb);
  TFont_SetColor(*(int **)(Self->Edit6 + 0x58),0,extraout_ECX_06);
  TControl_SetColor(Self->Edit7,-0x7ffffffb);
  TFont_SetColor(*(int **)(Self->Edit7 + 0x58),0,extraout_ECX_07);
  TControl_SetColor(Self->movi,-0x7ffffffb);
  TFont_SetColor(*(int **)(Self->movi + 0x58),0,extraout_ECX_08);
  return;
}

