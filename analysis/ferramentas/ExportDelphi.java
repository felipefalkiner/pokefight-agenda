// Creates functions at Delphi VMT method addresses and exports decompiled C.
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.app.cmd.disassemble.DisassembleCommand;
import ghidra.app.cmd.function.CreateFunctionCmd;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.SourceType;
import java.io.*;
import java.nio.file.*;
import java.util.*;

public class ExportDelphi extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] a = getScriptArgs();
        List<String> lines = Files.readAllLines(Paths.get(a[0]));
        File outDir = new File(a[1]);
        int timeout = a.length > 2 ? Integer.parseInt(a[2]) : 300;
        Listing listing = currentProgram.getListing();
        List<Object[]> todo = new ArrayList<>();
        // pass 1: create all functions first so calls between handlers resolve
        for (String ln : lines) {
            ln = ln.trim();
            if (ln.isEmpty()) continue;
            String[] p = ln.split("\s+");
            boolean renameOnly = p[0].startsWith("=");
            if (renameOnly) {
                Address ra = toAddr(Long.decode(p[1]));
                if (getFunctionAt(ra) == null) new CreateFunctionCmd(ra).applyTo(currentProgram, monitor);
                Function rf = getFunctionAt(ra);
                if (rf != null) try { rf.setName(p[0].substring(1), SourceType.USER_DEFINED); } catch (Exception e) { println("rename fail " + p[0]); }
                continue;
            }
            String name = p[0];
            Address addr = toAddr(Long.decode(p[1]));
            if (listing.getInstructionAt(addr) == null) {
                new DisassembleCommand(addr, null, true).applyTo(currentProgram, monitor);
            }
            if (listing.getInstructionAt(addr) == null) {
                CodeUnit cu = listing.getCodeUnitContaining(addr);
                println("clearing " + cu + " at " + (cu == null ? null : cu.getMinAddress()) + " for " + name);
                // misaligned disassembly runs past the entry: clear up to the next known handler
                long next = Long.MAX_VALUE;
                for (String l2 : lines) {
                    String[] q = l2.trim().split("\s+");
                    if (q.length < 2 || q[0].startsWith("=")) continue;
                    long v = Long.decode(q[1]);
                    if (v > addr.getOffset() && v < next) next = v;
                }
                if (next - addr.getOffset() > 0x30000) next = addr.getOffset() + 0x30000;
                if (cu != null) clearListing(cu.getMinAddress(), toAddr(next - 1));
                new DisassembleCommand(addr, null, true).applyTo(currentProgram, monitor);
            }
            Function f = getFunctionAt(addr);
            if (f == null) {
                Function c = getFunctionContaining(addr);
                if (c != null && !c.getEntryPoint().equals(addr)) {
                    println("split " + c.getName() + " for " + name);
                }
                CreateFunctionCmd cfc = new CreateFunctionCmd(addr);
                if (!cfc.applyTo(currentProgram, monitor)) println("create msg " + name + ": " + cfc.getStatusMsg() + " insn=" + listing.getInstructionAt(addr));
                f = getFunctionAt(addr);
            }
            if (f == null) {
                Function c = getFunctionContaining(addr);
                if (c != null) {
                    Address ce = c.getEntryPoint(); String cn = c.getName();
                    removeFunction(c);
                    new CreateFunctionCmd(addr).applyTo(currentProgram, monitor);
                    new CreateFunctionCmd(ce).applyTo(currentProgram, monitor);
                    Function cc = getFunctionAt(ce);
                    if (cc != null) try { cc.setName(cn, SourceType.USER_DEFINED); } catch (Exception e) {}
                    f = getFunctionAt(addr);
                    println("re-split " + cn + "@" + ce + " for " + name);
                }
            }
            if (f == null) { println("FAILED create " + name + " " + addr); continue; }
            try { f.setName(name, SourceType.USER_DEFINED); } catch (Exception e) { println("name clash " + name); }
            todo.add(new Object[]{name, addr});
        }
        DecompInterface di = new DecompInterface();
        di.toggleCCode(true);
        di.openProgram(currentProgram);
        for (Object[] t : todo) {
            String name = (String) t[0];
            Function f = getFunctionAt((Address) t[1]);
            if (f == null) { println("LOST " + name); continue; }
            DecompileResults r = di.decompileFunction(f, timeout, monitor);
            String body;
            if (r != null && r.decompileCompleted()) body = r.getDecompiledFunction().getC();
            else body = "// decompile failed: " + (r == null ? "null" : r.getErrorMessage());
            String fn = name.replaceAll("[^A-Za-z0-9_.@-]", "_") + ".c";
            try (Writer w = new OutputStreamWriter(new FileOutputStream(new File(outDir, fn)), "UTF-8")) {
                w.write("// " + name + " @ " + f.getEntryPoint() + "  body=" + f.getBody().getNumAddresses() + " bytes\n");
                w.write(body);
            }
            println("decompiled " + name + " " + f.getEntryPoint() + " size=" + f.getBody().getNumAddresses());
        }
        di.dispose();
    }
}
