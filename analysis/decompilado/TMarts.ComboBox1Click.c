// TMarts.ComboBox1Click @ 004b7790  body=46 bytes

void TMarts_ComboBox1Click(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = TComboBox_GetItemIndex(Self->ComboBox1);
  if (iVar2 == 0) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))
              (piVar1,
               "Poke Ball       $200\rAntidote        $100\rParalyz Heal    $200\rBurn Heal       $250"
              );
  }
  iVar2 = TComboBox_GetItemIndex(Self->ComboBox1);
  if (iVar2 == 1) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))
              (piVar1,
               "Poke Ball       $200\rPotion          $300\rEscape Rope     $550\rAnditode        $100\rBurn Heal       $250\rAwakening       $200\rParalyz Heal    $200"
              );
  }
  iVar2 = TComboBox_GetItemIndex(Self->ComboBox1);
  if (iVar2 == 2) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))
              (piVar1,
               "Poke Ball       $200\rPotion          $300\rRepel           $350\rAnditode        $100\rEscape Rope     $550\rBurn Heal       $250\rAwakening       $200\rParalyz Heal    $200"
              );
  }
  iVar2 = TComboBox_GetItemIndex(Self->ComboBox1);
  if (iVar2 == 3) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))
              (piVar1,
               "Poke Ball       $200\rSuper Potion    $700\rRepel           $350\rIce Heal        $250\rAwakening       $200\rParalyz Heal    $200"
              );
  }
  iVar2 = TComboBox_GetItemIndex(Self->ComboBox1);
  if (iVar2 == 4) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))
              (piVar1,
               "Great Ball      $600\rSuper Potion    $700\rSuper Repel     $500\rRevive        $1,500\rSuper Repel     $500\rEscape Rope     $550\rAntidote        $100\rBurn Heal       $250\rIce Heal        $250\rParalyz Heal    $200"
              );
  }
  iVar2 = TComboBox_GetItemIndex(Self->ComboBox1);
  if (iVar2 == 5) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))
              (piVar1,
               "Great Ball      $600\rHyper Potion  $1,500\rMax Repel       $700\rEscape Rope     $550\rFull Heal       $600\rRevive        $1,500"
              );
  }
  iVar2 = TComboBox_GetItemIndex(Self->ComboBox1);
  if (iVar2 == 6) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))
              (piVar1,
               "Great Ball      $600\rSuper Potion    $700\rRevive        $1,500\rSuper Repel     $500\rAntidote        $100\rBurn Heal       $250\rIce Heal        $250\rAwakening       $200\rParalyz Heal    $200\rTM 32         $1,000\rTM 33         $1,000\rTM 02         $2,000\rTM 07         $2,000\rTM 37         $2,000\rTM 01         $3,000\rTM 05         $3,000\rTM 09         $3,000\rTM 17         $3,000"
              );
  }
  iVar2 = TComboBox_GetItemIndex(Self->ComboBox1);
  if (iVar2 == 7) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))
              (piVar1,
               "Poke Doll     $1,000\rFire Stone    $2,100\rThunder Stone $2,100\rWater Stone   $2,100\rLeaf Stone    $2,100"
              );
  }
  iVar2 = TComboBox_GetItemIndex(Self->ComboBox1);
  if (iVar2 == 8) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))
              (piVar1,
               "Accuracy       $950\rGuard Spec     $700\rDire Hit       $650\rAttack         $500\rDefend         $550\rSpeed          $350\rSpecial        $350\rHP Up        $9,800\rProtein      $9,800\rIron         $9,800\rCarbos       $9,800\rCalcium      $9,800"
              );
  }
  iVar2 = TComboBox_GetItemIndex(Self->ComboBox1);
  if (iVar2 == 9) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))
              (piVar1,"Fresh Water     $200\rSoda Pop        $300\rLemonade        $350");
  }
  iVar2 = TComboBox_GetItemIndex(Self->ComboBox1);
  if (iVar2 == 10) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))
              (piVar1,
               "Ultra Ball     $1,200\rGreat Ball       $600\rSuper Potion     $700\rRevive         $1,500\rFull Heal        $600\rSuper Repel      $500"
              );
  }
  iVar2 = TComboBox_GetItemIndex(Self->ComboBox1);
  if (iVar2 == 0xb) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))
              (piVar1,
               "Ultra Ball     $1,200\rGreat Ball       $600\rHyper Potion   $1,500\rMax Repel        $700\rEscape Rope      $550\rFull Heal        $600\rRevive         $1,500"
              );
  }
  iVar2 = TComboBox_GetItemIndex(Self->ComboBox1);
  if (iVar2 == 0xc) {
    piVar1 = *(int **)(Self->Memo1 + 0x204);
    (**(code **)(*piVar1 + 0x2c))
              (piVar1,
               "Ultra Ball     $1,200\rGreat Ball       $600\rFull Restore   $3,000\rMax Potion     $2,500\rFull Heal        $600\rRevive         $1,500\rMax Repel        $700"
              );
  }
  return;
}

