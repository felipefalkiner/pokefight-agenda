// TAPKG.FormClose @ 004fa100  body=26 bytes

void TAPKG_FormClose(int param_1,undefined4 param_2,undefined4 param_3)

{
  TRxGIFAnimator_SetAnimate(Self->sair,0,param_3);
  Application_Terminate();
  return;
}

