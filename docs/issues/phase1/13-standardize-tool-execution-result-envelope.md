# Issue 13: [medium] Standardize tool execution result envelope

## Description
Define one output envelope that all Step 3 tool executors return to the orchestration layer.

## Requirements
- Define shared result struct/type.
- Include status, tool, payload, error fields.
- Normalize success and failure representation.
- Reuse envelope across all tools.

## Prerequisites
- #24
- #25
- #26
- #27

## External References
- docs/phase1-system-interaction-plan.md

## Acceptance Criteria
- [ ] Create one result type used by run_command/read_file/list_directory handlers.
- [ ] Ensure success path includes tool name and payload content.
- [ ] Ensure failure path includes error code and message.
- [ ] Remove ad-hoc per-tool print logic from handlers.
- [ ] Validate with one success/failure sample for each tool.
