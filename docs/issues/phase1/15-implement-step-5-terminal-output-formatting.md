# Issue 15: [medium] Implement Step 5 terminal output formatting

## Description
Implement final Step 5 renderer that prints either direct tool result or optional LLM summary to terminal.

## Requirements
- Print human-readable result in terminal.
- Support both direct tool output and summarized output.
- Keep consistent structure for errors.
- Avoid leaking secrets in output.

## Prerequisites
- #28
- #29

## External References
- docs/phase1-system-interaction-plan.md

## Acceptance Criteria
- [ ] Implement formatter for success path (summary text or tool output preview).
- [ ] Implement formatter for failure path with error code and remediation hint.
- [ ] Ensure API key and sensitive values are never printed.
- [ ] Keep output single-request scoped with no persisted history.
- [ ] Validate formatting in both Step 4 enabled and disabled modes.
