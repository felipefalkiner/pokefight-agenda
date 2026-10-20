import sys,re,json
sys.stdout.reconfigure(encoding="utf-8",errors="replace")
src,out=sys.argv[1],sys.argv[2]
t=open(src,encoding='utf-8').read()
FIELD={'Edit2':'nome','Edit3':'tipo','Edit4':'versao','Edit5':'evolucao','Edit6':'localizacao','Edit7':'numero',
       'Memo1':'descricao','movi':'movimentos','animator':'sprite','i1':'energia','i2':'ataque','i3':'defesa','i4':'velocidade','i5':'especial'}
raw=t.split('\n'); lines=[]; acc=''
for l in raw:
    acc=(acc+' '+l.strip()) if acc else l
    if acc.rstrip().endswith((';','{','}')) or acc.strip()=='' or acc.lstrip().startswith(('//','/*')):
        lines.append(re.sub(r'\s+;$', ';', acc)); acc=''
if acc: lines.append(acc)
cur=None; recs={}; defaults={}; pend=None
def setv(comp,val):
    key=FIELD.get(comp,comp)
    tgt=defaults if cur is None else recs.setdefault(cur,{})
    tgt[key]=val
def sval(s):
    s=s.strip()
    if s in ('(uint *)0x0','0'): return ''
    m=re.match(r'^(?:\(uint \*\))?\s*(".*")$',s)
    if m: return json.loads(m.group(1))
    return '<?'+s+'>'
for ln in lines:
    m=re.match(r'\s*if \(iVar\d == (0x[0-9a-f]+|\d+)\) \{',ln)
    if m: cur=int(m.group(1),0); continue
    if re.match(r'\s*\}$',ln): 
        if cur is not None: cur=None
        continue
    m=re.match(r'\s*TControl_SetText\(Self->(\w+),(.*)\);$',ln)
    if m: setv(m.group(1),sval(m.group(2))); continue
    m=re.match(r'\s*piVar1 = \*\(int \*\*\)\(Self->(\w+) \+ (0x13c|0x204)\);',ln)
    if m: pend=m.group(1); continue
    m=re.match(r'\s*\(\*\*\(code \*\*\)\(\*piVar1 \+ 0x(48|2c)\)\)\s*$',ln)
    if m: continue
    m=re.match(r'\s*(?:\(\*\*\(code \*\*\)\(\*piVar1 \+ 0x(?:48|2c)\)\))?\s*\(piVar1,\s*(.*)\);$',ln)
    if m and pend:
        v=sval(m.group(1)); 
        if pend in ('animator','i1','i2','i3','i4','i5') and v.startswith('c:'): v=v.split(chr(92))[-1]
        setv(pend,v); pend=None; continue
    m=re.match(r'\s*TGIFImage_Clear\(\*\(int \*\*\)\(Self->(\w+) \+ 0x13c\)\);',ln)
    if m: setv(m.group(1),'(limpo)'); continue
json.dump({'defaults':defaults,'entries':{k:recs[k] for k in sorted(recs)}},open(out,'w',encoding='utf-8'),ensure_ascii=False,indent=1)
print(len(recs),'entries; defaults:',defaults)
for k in [0,24,150,151,152,157]:
    print(k,json.dumps(recs.get(k),ensure_ascii=False)[:700])
