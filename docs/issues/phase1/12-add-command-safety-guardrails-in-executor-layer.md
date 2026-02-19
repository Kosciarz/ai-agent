# Issue 12: [medium] Add command safety guardrails in executor layer

## Description
Implement program-side safety checks required by the plan before command execution.

## Requirements
- Apply allow/deny checks before running run_command.
- Reject obviously destructive commands (e.g., rm -rf /).
- Return safe rejection message without execution.
- Log rejection reason in structured form.

## Prerequisites
- #23
- #24

## External References
- docs/phase1-system-interaction-plan.md

## Acceptance Criteria
- [ ] Add pre-execution validator for `run_command` input string.
- [ ] Block known high-risk command patterns per initial denylist.
- [ ] Return non-zero result with `rejected_by_policy` (or equivalent) error type.
- [ ] Ensure blocked commands never reach process execution function.
- [ ] Add manual checks for one blocked and one allowed command.
