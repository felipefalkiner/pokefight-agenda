import sys,struct,json
sys.stdout.reconfigure(encoding="utf-8",errors="replace")
d=open(sys.argv[1],'rb').read()
# section map from PE
pe=struct.unpack_from('<I',d,0x3c)[0]; ns=struct.unpack_from('<H',d,pe+6)[0]; opt=struct.unpack_from('<H',d,pe+20)[0]
base=struct.unpack_from('<I',d,pe+24+28)[0]
secs=[]
for i in range(ns):
    o=pe+24+opt+i*40
    nm=d[o:o+8].rstrip(b'\0').decode(); vs,va,rs,ro=struct.unpack_from('<IIII',d,o+8)
    secs.append((nm,base+va,vs,ro,rs))
def v2o(v):
    for nm,va,vs,ro,rs in secs:
        if va<=v<va+max(vs,rs) and v-va<rs: return ro+v-va
    return None
def u32(v):
    o=v2o(v); return None if o is None else struct.unpack_from('<I',d,o)[0]
def sstr(v):
    o=v2o(v); l=d[o]; return d[o+1:o+1+l].decode('cp1252')
code=[s for s in secs if s[0]=='CODE'][0]
vmts={}
for off in range(code[3],code[3]+code[4]-4,4):
    va=code[1]+off-code[3]
    if struct.unpack_from('<I',d,off)[0]==va+76:
        vmt=va+76
        try:
            cn=sstr(u32(vmt-44))
            if not cn or not cn.isidentifier(): continue
        except Exception: continue
        vmts[vmt]=cn
out={}
for vmt,cn in vmts.items():
    mt=u32(vmt-52); parent=u32(vmt-36); pcn=None
    if parent: 
        pv=u32(parent); pcn=vmts.get(pv)
    meths=[]
    if mt:
        o=v2o(mt); n=struct.unpack_from('<H',d,o)[0]; p=o+2
        for i in range(n):
            sz=struct.unpack_from('<H',d,p)[0]; addr=struct.unpack_from('<I',d,p+2)[0]; l=d[p+6]; name=d[p+7:p+7+l].decode('cp1252')
            meths.append((name,hex(addr))); p+=sz
    out[cn]={'vmt':hex(vmt),'parent':pcn,'methods':meths}
json.dump(out,open(sys.argv[2],'w'),indent=1)
targets=sys.argv[3].split(',')
for cn in targets:
    if cn in out:
        print('==',cn,out[cn]['vmt'],'parent',out[cn]['parent'])
        for m in out[cn]['methods']: print('  ',m[1],m[0])
print(len(out),'classes')
# field tables
fields={}
for vmt,cn in vmts.items():
    ft=u32(vmt-56)
    if not ft: continue
    o=v2o(ft); n=struct.unpack_from('<H',d,o)[0]; ctab=struct.unpack_from('<I',d,o+2)[0]; p=o+6
    classes=[]
    co=v2o(ctab) if ctab else None
    if co is not None:
        cnt=struct.unpack_from('<H',d,co)[0]
        for i in range(cnt):
            pv=struct.unpack_from('<I',d,co+2+4*i)[0]; cv=u32(pv); classes.append(vmts.get(cv,hex(pv)))
    fl=[]
    for i in range(n):
        off=struct.unpack_from('<I',d,p)[0]; ci=struct.unpack_from('<H',d,p+4)[0]; l=d[p+6]; name=d[p+7:p+7+l].decode('cp1252'); p+=7+l
        fl.append((hex(off),name,classes[ci] if ci<len(classes) else ci))
    fields[cn]=fl
json.dump(fields,open(sys.argv[2].replace('vmts','fields'),'w'),indent=1)
print('TAPKG fields:',fields.get('TAPKG')[:80])
