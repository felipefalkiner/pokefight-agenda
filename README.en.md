[Português](README.md) · **English**

# Agenda Pokémon — Poké Fight v1.2 (2000) · preservation

A Brazilian fan-made Pokédex written in **Delphi 3** in January 2000. It stopped
working on 64-bit Windows (Windows 7 onward). This repository keeps the original
package untouched, a **patched original that runs on Windows 10/11**, the **complete
reverse engineering**, and a **Lazarus/Free Pascal recompilation** built from it.

> The program itself is in Brazilian Portuguese, and so is the default
> documentation. This English version is provided for convenience.

![The 2000 original (patched) next to the Lazarus recompilation](docs/img/comparacao.png)

## How to use

| I want to... | Use |
|---|---|
| Run the **original 2000 program** | [`legacy/win11/`](legacy/win11): open `PokéFight1.2-win11.exe`. On first launch it extracts the images to `data\` |
| Run the **recompilation** | `.\build.ps1` creates `dist\PokeFight-Lazarus\PokeFight.exe` (or download it from the [Release](https://github.com/felipefalkiner/pokefight-agenda/releases)) |
| See the package **exactly as it was** | [`legacy/original/`](legacy/original) (does not run on 64-bit Windows) |
| Understand **how the program works** | [`analysis/README.en.md`](analysis/README.en.md) |

## Why it stopped working

The program itself (32-bit) still opens on Windows 11. The problem was the "installer":

1. On first launch, the EXE ran `press.com` and `img.com`, two `.BAT` files compiled
   with **BAT2EXEC** (16-bit DOS programs). They used `Gym.com` (PKWARE's **PKUNZJR**,
   renamed) to unpack `DATA.GYM` and `IMG.GYM`, which are renamed ZIP files.
2. 64-bit Windows has no 16-bit subsystem (NTVDM), so Windows showed
   **"Unsupported 16-bit application"** and the images were never extracted.
3. The target folder was `C:\windows\data\`, which now requires administrator rights.

Details and the fix: [`docs/en/LEGACY-WIN11.md`](docs/en/LEGACY-WIN11.md).

## What's here

```
legacy/original/   original package, untouched (EXE, .GYM, .COM, 158 GIFs)
legacy/win11/      patched original EXE + native extractor replacing the 16-bit .COM files
analysis/          reverse engineering: report, 155 decompiled functions, 14 forms (DFM),
                   extracted data (JSON/CSV), REA/Ghidra evidence
src/               Lazarus recompilation (Object Pascal, compatible with the original)
assets/ui/         UI images extracted from the EXE's forms
tools/             scripts that regenerate everything from the original EXE
docs/              guides (docs/en for English) and screenshots
build.ps1          builds and assembles dist/
```

## The recompilation

Built **from the reverse engineering**, not rewritten from scratch. It keeps:

* **the layout**: the 8 forms were converted automatically from the DFMs embedded in the
  EXE (`tools/dfm2lfm.py`), with the same positions, fonts, menus, shortcuts and
  component names;
* **the data**: the 158 entries come from the decompiled `if` chains and were cross-checked
  between the original's two handlers, with 0 differences;
* **the behavior**: each handler cites the original function's address
  (e.g. `// 0x4b9df4`) so it can be checked against `analysis/decompilado/`. The quirks
  were kept too: the PrintScreen "anti-copy" warning, the fake "Update" menu, the search
  that animates the stat bars even with effects turned off…

Changes, all documented in [`docs/en/RECOMPILATION.md`](docs/en/RECOMPILATION.md):
* animated GIFs use a custom decoder (`src/ugifplayer.pas`) instead of the RX Library;
* `data\` sits next to the EXE, nothing is written to the Windows folder; settings go to an `.ini`;
* e-mail (SMTP to the author's server) is disabled, because the server no longer exists;
* the website menu opens the Internet Archive copies;
* the "Editar / Imprimir" editor is plain text only (LCL has no native RichEdit);
* **new:** `Ctrl+Shift+P` shows the **"Personagens"** (Characters) button, which existed
  in the original but was never displayed (Ash, Brock, Misty, Oak, Team Rocket, Gary).

![Characters hidden since 2000](docs/img/lazarus-personagens.png)

### Building

Requirements: Windows 10/11 and [Lazarus 4.x](https://www.lazarus-ide.org/) (tested with
Lazarus 4.8 / FPC 3.2.2, 64-bit).

```powershell
.\build.ps1            # builds and assembles dist\PokeFight-Lazarus and dist\PokeFight-Legado-Win11
.\build.ps1 -Zip       # also creates the .zip files for a GitHub Release
```

You can also open `src\pokefight.lpi` directly in Lazarus. To run from the IDE, copy
`dist\PokeFight-Lazarus\data` into `build\`.

### Regenerating everything from the original EXE

```powershell
python -I tools\dfm2lfm.py "legacy\original\PokéFight1.2.exe" src --text analysis\dfm
python -I tools\extract_extras.py analysis\decompilado analysis\dados\extras.json
python -I tools\gen_pascal_data.py
python -I tools\ui_assets.py "legacy\original\PokéFight1.2.exe" assets\ui
python -I tools\patch_win11.py "legacy\original\PokéFight1.2.exe" "legacy\win11\PokéFight1.2-win11.exe"
```

Decompilation was done with [REA](https://github.com/morluto/rea) + Ghidra 12.1.4. The
step-by-step process is in [`analysis/README.en.md`](analysis/README.en.md).

## Credits and legal notice

* **Original program (2000):** `|Felix|` (programming and design) and `[_KangaskhaN_]`
  (photos, icons and images), website `www.pokefight.cjb.net` (offline). Distributed by
  the authors as *"Programa de Livre Distribuição (Este programa não pode ser vendido)"*,
  i.e. free to distribute, not for sale.
* **Third-party components in the original:** Borland Delphi 3, RX Library, NetMasters
  FastNet, PKWARE PKUNZJR 2.04c, BAT2EXEC 1.5 (PC Magazine).
* **Pokémon** and all related names and images are trademarks and property of Nintendo,
  Creatures Inc. and GAME FREAK inc. This is a non-profit **preservation** project, not
  affiliated with those companies.
* The new code (recompilation, tools, documentation) is under the MIT license
  ([`LICENSE`](LICENSE)). It does **not** cover the original material or the images.
