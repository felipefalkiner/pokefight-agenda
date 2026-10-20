// TAPKG.FormCreate @ 004f8f00  body=134 bytes

void TAPKG_FormCreate(int param_1)

{
  int *piVar1;
  undefined4 uStack_18;
  undefined *puStack_14;
  undefined1 *puStack_10;
  uint *puStack_8;
  
  puStack_10 = &stack0xfffffffc;
  puStack_8 = (uint *)0x0;
  puStack_14 = &UNK_004f8f86;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  piVar1 = *(int **)(Self->ListBox1 + 0x1ec);
  (**(code **)(*piVar1 + 0x6c))(piVar1,"Bulbasaur\rIvysaur\rVenusaur\rCharmander\rCharmeleon\rCharizard\rSquirtle\rWartortle\rBlastoise\rCartepie\rMetapod\rButterfree\rWeedle\rKakuna\rBeedrill\rPidgey\rPidgeotto\rPidgeot\rRattata\rRaticate\rSpearow\rFearow\rEkans\rArbok\rPikachu\rRaichu\rSandshrew\rSandslash\rNidoran(F)\rNidorina\rNidoqueen\rNidoran(M)\rNidorino\rNidoking\rClefairy\rClefable\rVulpix\rNinetales\rJigglypuff\rWigglytuff\rZubat\rGolbat\rOddish\rGloom\rVileplume\rParas\rParasect\rVenonat\rVenomoth\rDiglett\rDugtrio\rMeowth\rPersian\rPsyduck\rGolduck\rMankey\rPrimeape\rGrowlithe\rArcannine\rPoliwag\rPoliwhirl\rPoliwrath\rAbra\rKadabra\rAlakazam\rMachop\rMachoke\rMachamp\rBellsprout\rWeepinbell\rVictreebel\rTentacool\rTentacruel\rGeodude\rGraveler\rGolem\rPonyta\rRapidash\rSlowpoke\rSlowbro\rMagnemite\rMagneton\rFarfetch´d\rDoduo\rDodrio\rSeell\rDewgong\rGrimer\rMuk\rShellder\rCloyster\rGastly\rHaunter\rGengar\rOnix\rDrowzee\rHypno\rKrabby\rKingler\rVoltorb\rElectrode\rExeggcute\rExeggcutor\rCubone\rMarowak\rHitmonlee\rHitmonchan\rLickitung\rKoffing\rWeezing\rRhyhorn\rRhydon\rChansey\rTangela\rKangaskhan\rHorsea\rSeadra\rGoldeen\rSeaking\rStaryu\rStarmie\rMr.Mime\rScyther\rJynx\rElectabuzz\rMagmar\rPinsir\rTauros\rMagikarp\rGyarados\rLapras\rDitto\rEevee\rVaporeon\rJolteon\rFlareon\rPorygon\rOmanyte\rOmastar\rKabuto\rKabutops\rAerodactyl\rSnorlax\rArticuno\rZapdos\rMoltres\rDratini\rDragonair\rDragonite\rMewtwo\rMissingno\rMew");
  SysUtils_Time();
  SysUtils_TimeToStr((int *)&puStack_8,extraout_EDX,extraout_ECX);
  TControl_SetText(Self->Hora,puStack_8);
  SysUtils_Date();
  SysUtils_DateToStr((int *)&puStack_8,extraout_EDX_00,extraout_ECX_00);
  TControl_SetText(Self->Data,puStack_8);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &UNK_004f8f8d;
  puStack_14 = (undefined *)0x4f8f85;
  System_LStrClr((int *)&puStack_8);
  return;
}

