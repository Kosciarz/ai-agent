# Issue 19: [easy] Write Phase 1 manual test matrix

## Description
Create a manual test matrix covering all happy paths and critical failure scenarios.

## Why This Matters
A minimal vertical slice still needs repeatable validation before extension.

## Requirements
- Document test cases with command inputs.
- Include expected output signatures.
- Include expected exit codes for each case.
- Cover each supported tool and invalid tool-call conditions.

## Prerequisites
- #19
- #25
- #27
- #29
- #30
- #31
- #33

## External References
- None required

## Acceptance Criteria
- [ ] Create `docs/phase1-manual-test-matrix.md` with one row per scenario.
- [ ] Include command, required setup, expected key output fragment, and expected exit code columns.
- [ ] Cover at least: prompt argv, prompt stdin, missing API key, zero tool call, multi tool call, each tool happy path.
- [ ] Add failure cases: malformed JSON response and run_command timeout.
- [ ] Mark each test with Pass/Fail checkbox so execution results can be recorded.
