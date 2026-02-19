# Issue 19: [medium] Create Phase 1 test matrix by flow steps

## Description
Define manual test matrix that verifies each actor handoff and each flow step from 0 through 5.

## Requirements
- Create tests grouped by flow step.
- Include input, expected tool decision, expected output/exit code.
- Cover optional Step 4 on/off modes.
- Cover failure and safety rejection cases.

## Prerequisites
- #17
- #18
- #21
- #22
- #24
- #25
- #26
- #27
- #29
- #30
- #31

## External References
- None required

## Acceptance Criteria
- [ ] Create `docs/phase1-manual-test-matrix.md` with sections Step0..Step5.
- [ ] Include at least one happy-path test for each tool executor.
- [ ] Include parse failure, multi-tool rejection, and blocked command tests.
- [ ] Include expected exit code for every scenario.
- [ ] Add checkbox pass/fail columns for repeatable validation runs.
