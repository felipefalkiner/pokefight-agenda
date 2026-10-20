[Português](README.md) · **English**

# Reverse engineering — "PokeDex (Raro)" / Agenda Pokémon - Poké Fight v1.2

> Report of the static analysis this repository grew out of. Paths are relative to
> `analysis/`; folder names are in Portuguese (`dados` = data, `decompilado` = decompiled,
> `evidencias` = evidence, `ferramentas` = tools, `reconstrucao` = reconstruction).
> The Windows 11 version and the recompilation are documented in [`../docs/en`](../docs/en).
> The analyzed package is in `../legacy/original`.

> Target: `PokeDex (Raro)/` · main executable `PokéFight1.2.exe`
> (SHA-256 `ff860b60a0b18a625a0b2cebb54bf961b8cefb09b3b2542bc474d7d545aab295`, 1,376,256 bytes, PE32 i386 GUI, file date 2000-01-20)
> Tools: REA 6.5.0 (CLI and MCP) · Ghidra 12.1.4 headless · JDK 21.0.12 · custom scripts in `ferramentas/`

## 1. Summary

It's a **Generation 1 Pokédex written in Delphi 3 by Brazilian fans in 1999/2000**
("Agenda Pokémon da Poké Fight"; credits: `|Felix|` for programming and design,
`[_KangaskhaN_]` for images). The program was originally called **"KillerGym"**, a name that
still shows up in menus, the e-mail subject, the `.GYM` extension and `Gym.com`.

- **There is no database.** The 158 records (151 Pokémon + Missingno + 6 characters) are
  **hardcoded**: `TAPKG.ListBox1Click` (0x4b9df4) and `TAPKG.Edit1Change` (0x4d9668) are
  79 KB each, chains of about 2,200 `if ListBox1.ItemIndex = N then Component.Text := '...'`.
  The two handlers are the same code, copied.
- **The images live outside the EXE**, in ZIP files renamed to `.GYM`. On first launch the
  program extracts them to `C:\windows\data\` using two compiled `.BAT` files (`IMG.COM`,
  `PRESS.COM`) and a renamed PKUNZJR (`Gym.com`).
- The whole Pokédex was extracted to `dados/pokedex.json` and `dados/pokedex.csv`. The
  extraction was cross-checked by comparing the two independent handlers: **0 differences**.
- The protections are for show (an "anti-copy" warning, a fake "Update" button, a "Copy"
  that doesn't copy), and there is dead code: the secret "Personagens" (Characters) button,
  which unlocks Ash, Brock, Misty, Oak, Team Rocket and Gary, is never displayed.

## 2. File inventory

| File | What it is (verified) |
|---|---|
| `PokéFight1.2.exe` | Delphi 3 application + RX Library + NetMasters FastNet (TNMSMTP). 14 DFMs in RCDATA. |
| `IMG.GYM` (1.4 MB) | ZIP (deflate) with 158 GIFs: `000–151.gif` (195×195 sprites) + `ash/brock/gary/misty/Oak/team.gif`. |
| `DATA.GYM` (26 KB) | ZIP with `1.gif`…`6.gif`: animated **stat bars**, from level 1 (red, short) to 6 (green, full). |
| `Gym.com` (2,750 B) | **PKUNZJR 2.04c (PKWARE, 1992), renamed.** Usage: `pkunzjr [-o] file[.zip] [target]`. |
| `IMG.COM` / `PRESS.COM` | `.BAT` files compiled with **BAT2EXEC 1.5** (PC Magazine). Recovered script below. |
| `poke agenda.rar` | Identical backup of the folder (166 files; the EXE has the same MD5 `329f1e80…`). |
| `000.gif`…`151.gif`, `ash.gif`… | The same images as `IMG.GYM`, already unpacked. |
| `Gym.PIF`, `Desktop.ini`, `Thumbs.db` | Leftovers from the folder owner's Windows XP (2003–2006). Not part of the program. |

Script recovered from `IMG.COM` (`PRESS.COM` is the same, with `data.gym`/`data.zip`):

```bat
RENAME img.gym img.zip
MD c:\windows\data
GYM img.zip c:\windows\data\
RENAME img.zip img.gym
```

## 3. Methodology

1. **Triage**: `file`, strings, ZIP/RAR listings. This identified BAT2EXEC, PKUNZJR and Delphi.
2. **REA**: `rea doctor` (Ghidra provider healthy with the local Ghidra and JDK), `rea inspect`
   (overview: 9 segments, 4,410 procedures, 3,543 strings), `rea inspect-pe-resources`
   (90 resources, 14 DFM forms) and a custom MCP client (`ferramentas/mcp.mjs`) that keeps
   **one persistent Ghidra session** for `open_binary` and `procedure_pseudo_code`,
   including `entry`.
3. **Delphi metadata** (`ferramentas/vmt.py`): VMT scan (self-pointer at −76). Reads the
   *method table* (handler name → address) and the *field table* (offset → component) of
   284 classes.
4. **Ghidra headless + JDK** (`ferramentas/ExportDelphi.java`): on Windows, REA is read-only
   ("Windows P0"), and Ghidra's auto-analysis doesn't create functions for the Delphi
   handlers because they are only referenced from the VMT. The script creates functions at
   the VMT addresses, fixes misaligned disassembly, names the identified RTL/VCL routines
   and decompiles **155 functions**.
5. **Post-processing** (`ferramentas/clean.py`): resolves `UNK_xxxx` to literals
   (AnsiString with refcount −1, or PChar), `param_1 + 0xNNN` to `Self->Component`, and VMT
   pointers to `class_TForm`.
6. **DFM → text** (`ferramentas/dfm.py`, later `../tools/dfm2lfm.py`): custom decoder for
   the binary `TPF0` format.
7. **Data extraction** (`ferramentas/extract.py`): parses the decompiled `if` chains and
   validates `ListBox1Click` against `Edit1Change`.

## 4. Program architecture

```
entry (0x4fad..)
 ├─ Application.Title := 'Agenda Pokémon - Poké Fight v1.2'
 ├─ CreateForm(Tinicial)  → splash (becomes the MainForm)   "Versão: 1.2 / http://www.pokefight.cjb.net"
 ├─ CreateForm(TAPKG)     → the Pokédex
 └─ Application.Run
Tinicial.FormActivate : if c:\windows\data\1.gif doesn't exist → WinExec('press.com')
Tinicial.enterClick   : APKG.ShowModal
TAPKG.FormActivate    : inicial.Hide; extracts DATA/IMG if missing; warns if press.com, data.gym, gym.com, img.gym or img.com is missing
```

| Form | Purpose | Handlers |
|---|---|---|
| `TAPKG` | Pokédex: list, search, sprite, name, number, type, version, evolution, location, description, moves, 5 stat bars, clock, themes, tray | 38 |
| `TMainForm` | RTF editor "Editor - KillerGym v1.2" (TRxRichEdit). Inserts the current Pokémon's sprite or text. Based on the RX Library RichEdit demo. | 66 |
| `Temail` | Feedback over SMTP (TNMSMTP, port 25, fixed sender and recipient, no password) | 25 |
| `Ttm` | The 50 TMs and 5 HMs and where to find each one | 3 |
| `TMarts` | Poké-Mart items and prices per city | 3 |
| `TGold` | "Guia completo de Gold/Silver" (complete Gold/Silver guide; long text in the DFM) | 4 |
| `Tyellow` | GameShark codes for Pokémon Yellow | 1 |
| `TCores` | Color customization, saved to the registry by TFormStorage | 7 |
| `Tabout` | About box with scrolling credits (TSecretPanel) | 5 |
| `Timprimir`, `TNMShow` | **Orphan** DFMs (no class in the EXE) / NetMasters component registration screen | – |

Visual mapping of `TAPKG` (field-table offsets + DFM positions):
`Edit2`=Name, `Edit7`=No., `Edit3`=Type, `Edit4`=Version, `Edit5`=Evolution,
`Edit6`=Location, `Memo1`=Description, `movi`=Moves, `animator`=sprite, and `i1..i5` =
the bars **Energia (HP), Ataque (Attack), Defesa (Defense), Velocidade (Speed),
Especial (Special)**, in that order from top to bottom.

## 5. The Pokédex (data)

Record format, reconstructed in `reconstrucao/PokeDados.inc`:

```
Numero, Nome, Tipo, Versao, Evolucao, Localizacao, Descricao, Movimentos, Sprite,
Energia/Ataque/Defesa/Velocidade/Especial ∈ {1..6}  → c:\windows\data\<n>.gif
```

- Indices 0–149 are #001–#150. Index 150 = **Missingno (#000)**, index 151 = **Mew (#151)**.
  Indices 152–157 are characters (Ash, Brock, Misty, Oak, Team Rocket and Gary), with
  empty bars and no text. They only exist in the list of the hidden "Personagens" button (see §6).
- Version: 130 "Azul e Vermelha" (Blue and Red), 12 "Azul (Somente)" (Blue only), 10 Red
  exclusives (spelled two different ways).
- Stats are not numbers but **bars from 1 to 6** (animated GIFs).
- Content trivia: Mew's description includes the GameShark code `0115D8CF`, and
  Missingno's says "maybe a real Pokémon… a game bug". Period typos remain: *Cartepie*,
  *Arcannine*, *Seell*, *Exeggcutor*, *Dragonaire*, *Anditode*, *Fucshia*.
- Before the `if` chain, the handler writes "default" values (Bulbasaur's
  version/evolution/location), which are overwritten right away.

## 6. Easter eggs, dead code and "protections"

| Item | Address | What it actually does |
|---|---|---|
| `code` button "Personagens" | 0x4fa208 | Replaces the list with 152 Pokémon + Ash, Brock, Misty, Oak, Team Rocket and Gary (158 items). It is `Visible=False` and **nothing makes it visible**, so indices 152–157 in both handlers are **unreachable**: dead code. |
| `code1` in About | 0x4a3aec | With **Scroll Lock** on, the `code1` image becomes Enabled. It has no OnClick, so it's an unfinished easter egg. |
| Anti-copy | 0x4d9668 | While searching, if the **PrintScreen** toggle state is on, shows "Você não tem autorização para copiar…" (you are not authorized to copy). Blocks nothing. |
| "Atualizar Agenda" | 0x4fa860 | Only shows "Você não tem autorização, para atualizar este software via internet!" (not authorized to update). |
| "Copiar" popup | 0x4fa1e8 | Only shows "Copiado!" (Copied!) without touching the clipboard. |
| Credits | `Tabout` | Clicking the credits panel toggles scrolling (pause/resume). |

## 7. Technical and security notes (2000 context)

- `WinExec('press.com')` and `WinExec('img.com')` use a **relative path**: the program runs
  whatever `press.com` or `img.com` is in the current directory.
- Data goes to `C:\windows\data\`, a hardcoded path that requires writing to the Windows
  folder (fails on modern Windows without privileges, and the program only warns).
- The website opens through the hardcoded path
  `c:\arquivos de programas\Internet Explorer\Iexplore.exe`, which only works on
  Portuguese-language Windows.
- E-mail uses unauthenticated SMTP with the server and account fixed in the DFM (`dfm/TEMAIL.dfm`).
- Preferences (colors, fonts, theme, effects) are stored in the registry (TFormStorage,
  `UseRegistry=True`, `apkg.ini`).
- No networking beyond SMTP, no persistence, obfuscation or packer was found. The EXE is
  plain, uncompressed Delphi.

## 8. Main handler map

| Handler | Address | | Handler | Address |
|---|---|---|---|---|
| `TAPKG.FormCreate` | 0x4f8f00 | | `TAPKG.Imprimir1Click` | 0x4f9bfc |
| `TAPKG.FormActivate` | 0x4f9cdc | | `TAPKG.Email1Click` | 0x4fa74c |
| `TAPKG.ListBox1Click` | 0x4b9df4 | | `TAPKG.codeClick` | 0x4fa208 |
| `TAPKG.Edit1Change` | 0x4d9668 | | `TAPKG.t1..t4Click` | 0x4f96f4… |
| `Tinicial.FormActivate` | 0x4b94b8 | | `Tabout.Timer1Timer` | 0x4a3aec |
| `Temail.enviarClick` | 0x4a9a84 | | `Ttm.ListBox1Click` | 0x4b846c |

The full list (153 methods across 11 forms) is in `evidencias/vmts.json`, and each one's
pseudocode is in `decompilado/`.

## 9. Folder contents

```
dados/          pokedex.json, pokedex.csv (;-separated, UTF-8 BOM), extras.json
decompilado/    155 functions as pseudo-C (Ghidra), with strings and components resolved
dfm/            14 forms as Delphi text (generated by ../tools/dfm2lfm.py --text)
reconstrucao/   PokeFight.dpr, APKG.pas (functional equivalent), PokeDados.inc (generated)
evidencias/     REA outputs (inspect, pe-resources, entry), VMTs and field tables
ferramentas/    scripts to reproduce everything
```

## 10. Limitations

- The pseudocode is Ghidra decompiler output, not the original source. `APKG.pas` is a
  **functional** reconstruction: the original repeated literals in `if` chains, and here
  that was replaced by a table.
- Some RTL/VCL routines were named from call context (e.g. `TControl_SetText`,
  `TCustomForm_Close`) rather than by signature. Routines not used by the application logic
  remain as `FUN_xxxxxxxx`.
- The global flag tested in `AppEvents1Minimize` (0x4fd7fc) was not identified.
- This analysis was 100% static. The program was only run later, when testing the
  Windows 11 version and the recompilation.

## 11. How to reproduce

```powershell
$env:GHIDRA_INSTALL_DIR="<path>\ghidra_12.1.4_PUBLIC"
$env:JAVA_HOME="<path>\jdk-21.0.12.1+1"
node rea\scripts\rea.mjs inspect <copy>\PokeFight12.exe --provider ghidra --format json
node rea\scripts\rea.mjs inspect-pe-resources <copy>\PokeFight12.exe --format json > rsrc.json
python -I ferramentas\vmt.py <exe> vmts.json TAPKG          # VMTs + field tables
python -I ferramentas\dfm.py <exe> rsrc.json dfm\            # DFMs
# list: renames.txt + handlers.txt + "TAPKG.ListBox1Click 0x4b9df4" / "TAPKG.Edit1Change 0x4d9668"
analyzeHeadless.bat <proj> pf -import <exe> -scriptPath ferramentas -postScript ExportDelphi.java all.txt <out> 1500
python -I ferramentas\clean.py <exe> fields.json vmts.json <out> <clean>
python -I ferramentas\extract.py <clean>\TAPKG.ListBox1Click.c pokedex_listbox.json
python -I ferramentas\gen_inc.py .
```
