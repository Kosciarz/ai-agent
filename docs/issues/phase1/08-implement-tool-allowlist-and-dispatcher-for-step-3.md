# Issue 08: [medium] Implement tool allowlist and dispatcher for Step 3

## Description
Build the Step 3 dispatcher that maps validated tool name to one supported executor.

## Requirements
- Allow only run_command, read_file, list_directory.
- Map each tool to one handler function.
- Reject unknown tool names.
- Validate required args before dispatch.

## Prerequisites
- #22

## External References
- docs/phase1-system-interaction-plan.md

## Acceptance Criteria
- [ ] Implement dispatcher with explicit switch/map for 3 allowed tools only.
- [ ] Return `unknown_tool` error for any non-allowlisted value.
- [ ] Validate tool argument presence/type before handler call.
- [ ] Return one shared execution result object from all handlers.
- [ ] Add one success and one unknown-tool verification case.
