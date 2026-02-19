# Issue 18: [medium] Add centralized error handling and exit code policy

## Description
Define and implement centralized error mapping for CLI, network, parsing, and tools.

## Why This Matters
Consistent exit behavior is critical for scripts and developer trust.

## Requirements
- Create exit code map for main failure classes.
- Use one error translation layer before program exit.
- Ensure actionable error messages are preserved.
- Document exit code meanings in docs.

## Prerequisites
- #25
- #26
- #32

## External References
- None required

## Acceptance Criteria
- [ ] Create enum/table for exit codes in a dedicated source/header file.
- [ ] Map each major error class (input, auth, network, parse, tool) to fixed non-zero code.
- [ ] Ensure `main` exits through one centralized function handling message + code.
- [ ] Document exit code table in `README.md` or `docs/` with examples.
- [ ] Run failure scenarios and confirm observed exit code matches documented mapping.
