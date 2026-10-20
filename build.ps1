<#
  build.ps1 - compila a recompilação e monta as pastas prontas para usar.

  Requisitos: Lazarus 4.x (lazbuild + fpc), Windows 10/11.
  Uso:
    .\build.ps1                       # usa C:\lazarus
    .\build.ps1 -Lazarus D:\lazarus   # outra instalação
    .\build.ps1 -Zip                  # também gera os .zip para uma Release

  Saídas (ignoradas pelo git):
    dist\PokeFight-Lazarus\   PokeFight.exe + data\ (sprites, barras, imagens da interface)
    dist\PokeFight-Legado-Win11\   cópia de legacy\win11 (EXE original com patch)
  Também atualiza legacy\win11\PRESS.COM e IMG.COM (gymextract).
#>
param(
  [string]$Lazarus = 'C:\lazarus',
  [switch]$Zip
)
$ErrorActionPreference = 'Stop'
$root = $PSScriptRoot
$lazbuild = Join-Path $Lazarus 'lazbuild.exe'
$fpc = Get-ChildItem (Join-Path $Lazarus 'fpc') -Recurse -Filter fpc.exe |
  Where-Object { $_.DirectoryName -like '*x86_64-win64*' } | Select-Object -First 1
if (-not (Test-Path $lazbuild) -or -not $fpc) { throw "Lazarus não encontrado em $Lazarus" }

Write-Host '==> compilando a recompilação (src\pokefight.lpi)'
& $lazbuild --build-all (Join-Path $root 'src\pokefight.lpi')
if ($LASTEXITCODE -ne 0) { throw 'lazbuild falhou' }

Write-Host '==> compilando gymextract (substituto dos instaladores 16 bits)'
$gx = Join-Path $root 'build\gymextract'
New-Item -ItemType Directory -Force $gx | Out-Null
& $fpc.FullName -O2 -XX -CX -Xs "-FE$gx" "-FU$gx" (Join-Path $root 'tools\gymextract\gymextract.lpr')
if ($LASTEXITCODE -ne 0) { throw 'fpc falhou (gymextract)' }
Copy-Item "$gx\gymextract.exe" (Join-Path $root 'legacy\win11\PRESS.COM') -Force
Copy-Item "$gx\gymextract.exe" (Join-Path $root 'legacy\win11\IMG.COM') -Force

Write-Host '==> montando dist\PokeFight-Lazarus'
$dist = Join-Path $root 'dist\PokeFight-Lazarus'
if (Test-Path $dist) { Remove-Item -Recurse -Force $dist }
New-Item -ItemType Directory -Force "$dist\data\ui" | Out-Null
Copy-Item (Join-Path $root 'build\PokeFight.exe') $dist
# os mesmos ZIPs disfarçados de .GYM que o original extraía para c:\windows\data
tar -xf (Join-Path $root 'legacy\original\DATA.GYM') -C "$dist\data"
tar -xf (Join-Path $root 'legacy\original\IMG.GYM') -C "$dist\data"
Copy-Item (Join-Path $root 'assets\ui\*') "$dist\data\ui"
Copy-Item (Join-Path $root 'docs\LEIA-ME-dist.txt') "$dist\LEIA-ME.txt"
Copy-Item (Join-Path $root 'docs\README-dist.en.txt') "$dist\README.txt"

Write-Host '==> montando dist\PokeFight-Legado-Win11'
$leg = Join-Path $root 'dist\PokeFight-Legado-Win11'
if (Test-Path $leg) { Remove-Item -Recurse -Force $leg }
Copy-Item -Recurse (Join-Path $root 'legacy\win11') $leg

if ($Zip) {
  Write-Host '==> gerando zips'
  Compress-Archive -Force -Path "$dist\*" -DestinationPath (Join-Path $root 'dist\PokeFight-Lazarus-win64.zip')
  Compress-Archive -Force -Path "$leg\*" -DestinationPath (Join-Path $root 'dist\PokeFight-Legado-Win11.zip')
}
Write-Host "pronto: $dist"
