{ gymextract - substituto nativo (Win32/64) dos instaladores 16 bits da Agenda.

  O PokéFight1.2.exe original chama WinExec('press.com') e WinExec('img.com').
  Esses arquivos eram .BAT compilados com BAT2EXEC 1.5 que faziam:

      RENAME data.gym data.zip
      MD c:\windows\data
      GYM data.zip c:\windows\data\        (GYM = PKUNZJR 2.04c renomeado)
      RENAME data.zip data.gym

  No Windows de 64 bits não há subsistema de 16 bits, então nada era extraído.
  Este programa faz a mesma coisa, mas para .\data\ (caminho que a versão
  legacy/win11 usa depois do patch). Ele é copiado como PRESS.COM e IMG.COM: o
  Windows executa um PE mesmo com extensão .com, então o EXE original continua
  chamando os mesmos nomes. O nome com que foi chamado escolhe o arquivo:
      press.com -> DATA.GYM      img.com -> IMG.GYM
  Também aceita o .gym como parâmetro: gymextract IMG.GYM }
program gymextract;

{$mode objfpc}{$H+}
{$APPTYPE CONSOLE}

uses
  SysUtils, Zipper;

function Localizar(const Nome: string): string;
begin
  // o original usava o diretório atual (o EXE é aberto a partir da própria pasta)
  Result := IncludeTrailingPathDelimiter(GetCurrentDir) + Nome;
  if not FileExists(Result) then
    Result := ExtractFilePath(ParamStr(0)) + Nome;
end;

var
  Gym, Destino, Chamado: string;
  Z: TUnZipper;
begin
  Chamado := LowerCase(ChangeFileExt(ExtractFileName(ParamStr(0)), ''));
  if ParamCount >= 1 then Gym := ParamStr(1)
  else if Chamado = 'press' then Gym := 'DATA.GYM'
  else if Chamado = 'img' then Gym := 'IMG.GYM'
  else
  begin
    WriteLn('uso: gymextract <arquivo.gym>   (ou renomeie para press.com / img.com)');
    Halt(2);
  end;
  Gym := Localizar(Gym);
  if not FileExists(Gym) then
  begin
    WriteLn('não encontrado: ', Gym);
    Halt(1);
  end;
  Destino := IncludeTrailingPathDelimiter(ExtractFilePath(Gym) + 'data');
  ForceDirectories(Destino);
  Z := TUnZipper.Create;
  try
    Z.FileName := Gym;
    Z.OutputPath := Destino;
    Z.UnZipAllFiles;
  finally
    Z.Free;
  end;
  WriteLn(ExtractFileName(Gym), ' -> ', Destino);
end.
