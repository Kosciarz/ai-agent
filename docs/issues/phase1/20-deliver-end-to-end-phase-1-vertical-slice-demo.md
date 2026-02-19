# Issue 20: [hard] Deliver end-to-end Phase 1 vertical slice demo

## Description
Ship an end-to-end CLI flow that starts from user prompt and reaches terminal output according to the new Phase 1 plan.

## Requirements
- Execute one complete request from Step 0 to Step 5.
- Demonstrate single-tool execution contract.
- Demonstrate safety checks and error policy.
- Document demo commands and expected outputs.

## Prerequisites
- #19
- #20
- #22
- #23
- #24
- #25
- #26
- #27
- #28
- #30
- #31
- #32
- #33
- #34

## External References
- docs/phase1-system-interaction-plan.md

## Acceptance Criteria
- [ ] Run demo command where LLM selects one tool and program executes it successfully.
- [ ] Show non-success demo where safety rule blocks a dangerous command.
- [ ] Show optional Step 4 disabled path and enabled path outputs.
- [ ] Capture terminal outputs and exit codes for demo scenarios in issue comments/docs.
- [ ] Confirm no memory, no persistence, and no multi-step tool chaining in all demos.
