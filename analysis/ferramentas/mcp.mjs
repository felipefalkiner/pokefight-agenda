import { createRequire } from 'node:module';
import fs from 'node:fs';
const require = createRequire('Y:/rea-projects/pokedex-old/rea/package.json');
const { Client } = require('@modelcontextprotocol/client');
const { StdioClientTransport } = require('@modelcontextprotocol/client/stdio');
const [,, mode, jobsFile] = process.argv;
const transport = new StdioClientTransport({
  command: process.execPath,
  args: ['Y:/rea-projects/pokedex-old/rea/scripts/rea.mjs', '--mcp'],
  env: { ...process.env },
  stderr: 'inherit',
});
const client = new Client({ name: 'pokedex-re', version: '1' });
await client.connect(transport);
if (mode === 'list') {
  const t = await client.listTools();
  for (const x of t.tools) console.log(x.name, '|', (x.description||'').slice(0,110));
} else if (mode === 'schema') {
  const t = await client.listTools();
  for (const x of t.tools) if (jobsFile.split(',').includes(x.name)) console.log(x.name, JSON.stringify(x.inputSchema));
} else {
  const jobs = JSON.parse(fs.readFileSync(jobsFile, 'utf8'));
  for (const j of jobs) {
    const t0 = Date.now();
    try {
      const r = await client.callTool({ name: j.tool, arguments: j.args }, undefined, { timeout: 3600000, resetTimeoutOnProgress: true });
      if (j.out) fs.writeFileSync(j.out, JSON.stringify(r, null, 1));
      console.log('ok', j.tool, j.out || '', ((Date.now()-t0)/1000).toFixed(1)+'s', r.isError ? 'ISERROR '+JSON.stringify(r.content).slice(0,800) : '');
    } catch (e) { console.log('fail', j.tool, String(e).slice(0,800)); }
  }
}
await client.close();
