[Português](../LEGADO-WIN11.md) · **English**

# Running the 2000 original on Windows 10/11

![The 2000 original EXE, patched, on Windows 11](../img/legacy-win11-pikachu.png)

## Diagnosis

Tested on Windows 11 Pro 64-bit (build 26200):

* `PokéFight1.2.exe` (PE32, Delphi 3) **opens normally**;
* on startup, `Tinicial.FormActivate` (0x4b94b8) can't find `c:\windows\data\1.gif`
  and calls `WinExec('press.com', SW_HIDE)`;
* `press.com` is a `.BAT` compiled with BAT2EXEC 1.5, i.e. **16-bit DOS**. Windows
  shows *"Unsupported 16-bit application"*;
* without the images the Pokédex opens empty: no sprites, no stat bars, and
  missing-file warnings.

Script recovered from the `.COM` files (`IMG.COM` is the same, with `img.gym`):

```bat
RENAME data.gym data.zip
MD c:\windows\data
GYM data.zip c:\windows\data\      :: GYM.COM = PKUNZJR 2.04c (PKWARE), renamed
RENAME data.zip data.gym
```

## The fix (`legacy/win11/`)

Two small, reproducible changes.

### 1. String patch in the EXE (`tools/patch_win11.py`)

Only **strings** are replaced with shorter ones; no code instruction is touched.

| Literal | Occurrences | Before | After |
|---|---|---|---|
| AnsiString (refcount −1 + length) | 331 | `c:\windows\data\025.gif` | `data\025.gif` |
| `WinExec` PChar (website) | 2 | `c:\arquivos de programas\Internet Explorer\Iexplore.exe www.pokefight.cjb.net` | `explorer.exe http://www.pokefight.cjb.net` |

In Delphi literals the length sits 4 bytes before the text. The script updates that
field, zero-fills the leftover space and checks the input EXE's SHA-256
(`ff860b60…aab295`). The output's SHA-256 is
`0199f7fa41a3b10e9b75d5871e387d353debf66a49e7241d3e88b6546919ed14`.

### 2. Native extractor replacing the 16-bit `.COM` files (`tools/gymextract`)

The EXE still calls `WinExec('press.com')` and `WinExec('img.com')`. Windows runs a PE
program (32/64-bit) **even when it has a `.com` extension**. So in `legacy/win11`,
`PRESS.COM` and `IMG.COM` are `gymextract` (Free Pascal, 64-bit): it reads its own name
to choose `DATA.GYM` or `IMG.GYM` and unpacks into `.\data\`.

`Gym.com` (the original PKUNZJR) stays in the folder only because the program checks that
it exists (`FileExists('gym.com')`); it is no longer executed.

## Test performed

1. clean folder with the contents of `legacy/win11`;
2. on launch: `data\` received the 6 stat-bar GIFs (`PRESS.COM` → `DATA.GYM`);
3. after clicking **Entrar** (Enter): 158 more GIFs (`IMG.COM` → `IMG.GYM`), 164 in total;
4. searching "Pika": Pikachu with sprite, data, moves and stat bars (screenshot above).

## Remaining limitations

* the program is 32-bit and not DPI-aware: on displays scaled above 100%, Windows
  stretches the window and it looks slightly blurry;
* **E-mail** tries SMTP on the author's server, which no longer exists, and fails;
* **WebSite** opens `www.pokefight.cjb.net`, which is offline
  (copies exist on the [Internet Archive](https://web.archive.org/web/2000*/pokefight.cjb.net));
* the program must be started from its own folder (working directory), as in 2000.
