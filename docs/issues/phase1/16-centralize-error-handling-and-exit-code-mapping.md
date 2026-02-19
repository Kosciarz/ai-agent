# Issue 16: [medium] Centralize error handling and exit-code mapping

## Description
Create one error policy across input, LLM transport, parsing, dispatch, execution, and output phases.

## Requirements
- Define exit-code map by failure class.
- Route all failures through one error handling function.
- Preserve actionable messages.
- Document code map in docs.

## Prerequisites
- #17
- #19
- #21
- #22
- #23

## External References
- None required

## Acceptance Criteria
- [ ] Create dedicated exit-code enum/table in source.
- [ ] Map at least: input error, auth error, network error, parse error, policy rejection, execution error.
- [ ] Ensure main returns mapped non-zero codes for failure categories.
- [ ] Ensure success path always returns exit code 0.
- [ ] Document and verify observed codes via manual test commands.
