{ Reconstrução do arquivo de projeto a partir do entry point (0x4fad..)
  decompilado pelo Ghidra via REA (evidencias/rea_entry_pseudocode.json):

    Application.Initialize                       ; FUN_0044dcc4
    Application.Title := 'Agenda Pokémon - Poké Fight v1.2'   ; DAT_004fadf4
    Application.CreateForm(Tinicial, inicial)    ; VMT 0x4b9338 -> var 0x4fd9b4
    Application.CreateForm(TAPKG, APKG)          ; VMT 0x4b9584 -> var 0x4fd700
    Application.Run                              ; FUN_0044dd5c

  O primeiro form criado (Tinicial, a tela de abertura) vira o MainForm.
  As demais janelas (TMainForm, Temail, TGold, Ttm, TMarts, Tyellow, Tabout,
  TCores) são criadas sob demanda com Create(Application)+ShowModal+Free. }
program PokeFight;

uses
  Forms,
  Inicial in 'Inicial.pas' {inicial},
  APKG in 'APKG.pas' {APKG};

{$R *.RES}

begin
  Application.Initialize;
  Application.Title := 'Agenda Pokémon - Poké Fight v1.2';
  Application.CreateForm(Tinicial, inicial);
  Application.CreateForm(TAPKG, APKG);
  Application.Run;
end.
