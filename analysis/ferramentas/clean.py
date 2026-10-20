import sys,struct,json,re,os,glob
sys.stdout.reconfigure(encoding="utf-8",errors="replace")
exe,fieldsj,vmtsj,indir,outdir=sys.argv[1:6]
d=open(exe,'rb').read()
pe=struct.unpack_from('<I',d,0x3c)[0]; ns=struct.unpack_from('<H',d,pe+6)[0]; opt=struct.unpack_from('<H',d,pe+20)[0]
base=struct.unpack_from('<I',d,pe+24+28)[0]
secs=[]
for i in range(ns):
    o=pe+24+opt+i*40; vs,va,rs,ro=struct.unpack_from('<IIII',d,o+8); secs.append((base+va,vs,ro,rs))
def v2o(v):
    for va,vs,ro,rs in secs:
        if va<=v<va+rs: return ro+v-va
fields=json.load(open(fieldsj)); vmts=json.load(open(vmtsj))
def dstr(v):
    o=v2o(v)
    if o is None or o<8: return None
    rc,ln=struct.unpack_from('<iI',d,o-8)
    if rc==-1 and 0<ln<20000 and d[o+ln]==0:
        return d[o:o+ln].decode('cp1252',errors='replace')
    e=d.find(bytes([0]),o,o+20000)
    if e-o>=2:
        b=d[o:e]
        if all(c>=32 or c in (9,10,13) for c in b) and sum(c<128 for c in b)>0.8*len(b):
            return b.decode('cp1252',errors='replace')
    return None
def lit(s):
    return json.dumps(s, ensure_ascii=False)
# VMT pointer globals -> class names (form class refs used by Create)
vmt_by_addr={int(v['vmt'],16):k for k,v in vmts.items()}
def sub_unk(m):
    a=int(m.group(2),16)
    o=v2o(a)
    if o is not None:
        p=struct.unpack_from('<I',d,o)[0]
        if p in vmt_by_addr: return 'class_'+vmt_by_addr[p]
    s=dstr(a)
    if s is not None: return lit(s)
    return m.group(0)
# RTL/VCL routines identified by call context (complements the Ghidra renames)
RTL={'FUN_004087cc':'SysUtils_FileExists','FUN_0044ab50':'TCustomForm_Close','FUN_0044de10':'Application_Terminate',
     'FUN_0044ad00':'TCustomForm_Hide','FUN_0044d79c':'Application_Restore','FUN_0044d824':'Application_BringToFront',
     'FUN_004409f8':'TMenuItem_SetEnabled','FUN_004313d0':'TControl_SetVisible','FUN_004286b0':'TCustomEdit_SetSelText',
     'FUN_00491824':'TSecretPanel_SetActive','FUN_00403ac0':'System_LStrAsg','func_0x0048ec7c':'TRxTrayIcon_SetActive',
     'FUN_004296d8':'TComboBox_GetItemIndex','func_0x00461eb4':'TStatusBar_SetSimpleText'}
for f in glob.glob(os.path.join(indir,'*.c')):
    cls=os.path.basename(f).split('.')[0]
    fl={int(o,16):n for o,n,_ in fields.get(cls,[])}
    t=open(f,encoding='utf-8').read()
    t=re.sub(r'\(uint \*\)&(UNK|DAT)_([0-9a-f]{8})',sub_unk,t)
    t=re.sub(r'&?_?(UNK|DAT)_([0-9a-f]{8})',sub_unk,t)
    def fsub(m):
        off=int(m.group(2),16) if m.group(2).startswith('0x') else int(m.group(2))
        return 'Self->'+fl[off] if off in fl else m.group(0)
    t=re.sub(r'\*\((?:int|undefined4|uint|char|byte) \*\*\)\((param_1|in_EAX) \+ (0x[0-9a-f]+|\d+)\)',fsub,t)
    t=re.sub(r'\(int\)\*\(int \*\*\)\((param_1|in_EAX) \+ (0x[0-9a-f]+|\d+)\)',fsub,t)
    t=re.sub(r'\*\((?:int|undefined4|int \*|uint) \*\)\((param_1|in_EAX) \+ (0x[0-9a-f]+|\d+)\)',lambda m: fsub(m) ,t)
    t=re.sub(r'\*\((?:int \*|int|undefined4) \*\)\((param_1|in_EAX) \+ (0x[0-9a-f]+|\d+)\)',fsub,t)
    for k,v in RTL.items(): t=t.replace(k,v)
    t=re.sub(r'^\s+undefined[0-9]* \*?(extraout_\w+|in_FS_OFFSET);\n','',t,flags=re.M)
    open(os.path.join(outdir,os.path.basename(f)),'w',encoding='utf-8').write(t)
print('ok')
