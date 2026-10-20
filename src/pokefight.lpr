{ Agenda Pokémon - Poké Fight v1.2 — recompilação em Lazarus/Free Pascal.

  Original (entry point em 0x4fad.., ver analysis/evidencias):
    Application.Title := 'Agenda Pokémon - Poké Fight v1.2';
    Application.CreateForm(Tinicial, inicial);   // a abertura era o MainForm
    Application.CreateForm(TAPKG, APKG);         // e chamava APKG.ShowModal
    Application.Run;

  Aqui a Pokédex é o form principal e a abertura é mostrada antes, de forma
  modal. O resultado para o usuário é o mesmo, e a minimização para a bandeja
  funciona sem esconder um form modal. }
program pokefight;

{$mode objfpc}{$H+}

uses
  Interfaces, SysUtils, Forms, Controls, printer4lazarus,
  ucomum, ugifplayer, upokedados, uextras,
  uinicial, uapkg, usobre, utms, umarts, ugold, uyellow, ucores, ueditor;

{$R *.res}

begin
  RequireDerivedFormResource := True;
  Application.Title := 'Agenda Pokémon - Poké Fight v1.2';
  Application.Scaled := True;
  Application.Initialize;
  Application.CreateForm(TAPKG, APKG);
  inicial := Tinicial.Create(nil);
  try
    if inicial.ShowModal <> mrOK then
      Exit;
  finally
    FreeAndNil(inicial);
  end;
  Application.Run;
end.
