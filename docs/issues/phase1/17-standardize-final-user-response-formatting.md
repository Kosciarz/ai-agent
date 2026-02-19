# Issue 17: [medium] Standardize final user response formatting

## Description
Introduce one consistent response envelope for all tool outcomes and errors.

## Why This Matters
Users need predictable terminal output regardless of selected tool path.

## Requirements
- Define response schema fields: status, tool, output, error.
- Normalize formatting across all tool handlers.
- Ensure parser or dispatcher errors use same envelope.
- Keep output human-readable in plain terminal.

## Prerequisites
- #29
- #30
- #31

## External References
- None required

## Acceptance Criteria
- [ ] Define a single `ToolExecutionResult` (or equivalent) used by all handlers.
- [ ] Implement one formatter function that converts result to terminal output.
- [ ] Ensure both success and error paths include `status` and `tool` fields.
- [ ] Remove tool-specific ad hoc print statements from handlers.
- [ ] Validate output schema consistency using one sample from each tool and one parser error case.
