# Issue 13: [medium] Implement tool dispatcher with strict allowlist

## Description
Route parsed tool calls to implementations using an explicit allowlist only.

## Why This Matters
Dispatcher allowlisting prevents arbitrary function execution from model outputs.

## Requirements
- Create dispatch table for three tools.
- Block unknown tool names.
- Validate argument presence before invocation.
- Return consistent tool-not-allowed errors.

## Prerequisites
- #27

## External References
- None required

## Acceptance Criteria
- [ ] Implement a map/switch that supports only `run_command`, `read_file`, `list_directory`.
- [ ] Return explicit `unknown_tool` error when tool name is not allowlisted.
- [ ] Validate required args before calling each handler and return `invalid_arguments` on mismatch.
- [ ] Make dispatcher return one shared result type used by final formatter.
- [ ] Add tests/manual runs showing one success path and one unknown-tool rejection path.
