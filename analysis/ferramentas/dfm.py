import sys,json,struct,os
sys.stdout.reconfigure(encoding="utf-8",errors="replace")
exe,rj,out=sys.argv[1],sys.argv[2],sys.argv[3]
data=open(exe,'rb').read()
res=json.load(open(rj))['normalized_result']['resources']
class R:
    def __init__(s,b): s.b=b; s.p=0
    def u8(s): v=s.b[s.p]; s.p+=1; return v
    def n(s,k): v=s.b[s.p:s.p+k]; s.p+=k; return v
    def i16(s): return struct.unpack('<h',s.n(2))[0]
    def i32(s): return struct.unpack('<i',s.n(4))[0]
    def sstr(s): l=s.u8(); return s.n(l).decode('cp1252')
def q(t):
    out=[];cur=''
    for ch in t:
        if 32<=ord(ch)<127 and ch!="'" or ord(ch)>=160:
            cur+=ch
        elif ch=="'": cur+="''"
        else:
            if cur: out.append("'"+cur+"'"); cur=''
            out.append('#%d'%ord(ch))
    if cur or not out: out.append("'"+cur+"'")
    return ''.join(out)
def val(r,ind,binsum):
    t=r.u8()
    if t==0: return 'Null'
    if t==1:
        items=[]
        while r.b[r.p]!=0: items.append(val(r,ind+2,binsum))
        r.p+=1; return '('+' '.join(items)+')'
    if t==2: return str(struct.unpack('<b',r.n(1))[0])
    if t==3: return str(r.i16())
    if t==4: return str(r.i32())
    if t==5:
        b=r.n(10); m=int.from_bytes(b[:8],'little'); e=int.from_bytes(b[8:],'little')
        sign=-1 if e&0x8000 else 1; e&=0x7fff
        return repr(sign*m*2.0**(e-16383-63)) if m else '0'
    if t in (6,7): return r.sstr()  # string / ident
    if t==8: return 'False'
    if t==9: return 'True'
    if t==10:
        l=r.i32(); b=r.n(l); binsum.append(l)
        return '{binary %d bytes sha=%s}'%(l, __import__('hashlib').sha1(b).hexdigest()[:10])
    if t==11:
        items=[]
        while True:
            s=r.sstr()
            if not s: break
            items.append(s)
        return '['+', '.join(items)+']'
    if t==12:
        l=r.i32(); return q(r.n(l).decode('cp1252'))
    if t==13: return 'nil'
    if t==14:
        items=[]
        while r.b[r.p]!=0:
            r.p+=1 # item marker 
            props=[]
            while r.b[r.p]!=0:
                nm=r.sstr(); props.append(' '*(ind+4)+nm+' = '+val(r,ind+4,binsum))
            r.p+=1
            items.append(' '*(ind+2)+'item\n'+'\n'.join(props)+'\n'+' '*(ind+2)+'end')
        r.p+=1
        return '<\n'+'\n'.join(items)+'>'
    if t==15: return repr(struct.unpack('<f',r.n(4))[0])
    if t==16: return repr(struct.unpack('<d',r.n(8))[0])
    if t==17: return str(struct.unpack('<q',r.n(8))[0])
    if t==18:
        l=r.i32(); return q(r.n(l*2).decode('utf-16le'))
    if t==19: return str(struct.unpack('<q',r.n(8))[0])
    if t==20:
        l=r.i32(); return q(r.n(l).decode('utf-8','replace'))
    raise ValueError('type %d at %d'%(t,r.p))
def comp(r,ind,lines,events):
    flag=r.b[r.p]
    pre=''
    if flag&0xf0==0xf0:
        r.p+=1
        if flag&2: r.u8() if False else None; 
        if flag&2:
            t=r.u8(); pos={2:lambda:struct.unpack('<b',r.n(1))[0],3:r.i16,4:r.i32}[t]()
    cls=r.sstr(); name=r.sstr()
    kw='inherited' if flag&0xf0==0xf0 and flag&1 else 'object'
    lines.append(' '*ind+'%s %s: %s'%(kw,name,cls))
    while r.b[r.p]!=0:
        pn=r.sstr(); bs=[]; v=val(r,ind+2,bs)
        lines.append(' '*(ind+2)+pn+' = '+v)
        if pn.startswith('On'): events.append((name,cls,pn,v))
    r.p+=1
    while r.b[r.p]!=0:
        comp(r,ind+2,lines,events)
    r.p+=1
    lines.append(' '*ind+'end')
allev={}
for x in res:
    if x['type'].get('id')!=10: continue
    nm=x['name'].get('name')
    loc=x['payload']['location']; b=data[loc['offset']:loc['offset']+loc['bytes']]
    if b[:4]!=b'TPF0': continue
    r=R(b); r.p=4; lines=[]; ev=[]
    comp(r,0,lines,ev)
    open(os.path.join(out,nm+'.dfm.txt'),'w',encoding='utf-8').write('\n'.join(lines)+'\n')
    allev[nm]=ev
    print(nm,len(lines),'lines',len(ev),'events')
json.dump(allev,open(os.path.join(out,'events.json'),'w'),indent=1,ensure_ascii=False)
