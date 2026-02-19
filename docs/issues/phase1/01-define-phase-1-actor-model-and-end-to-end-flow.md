# Issue 01: [easy] Define Phase 1 actor model and end-to-end flow

## Description
Establish the canonical three-actor architecture (User, C++ Program, LLM) and the Step 0-5 interaction flow for Phase 1.

## Requirements
- Document actors and their responsibilities exactly as in the new Phase 1 plan.
- Document Step 0 through Step 5 in order.
- Mark Step 4 as optional for minimal Phase 1.
- State that only the program executes tools.

## Prerequisites
- None

## External References
- docs/phase1-system-interaction-plan.md

## Acceptance Criteria
- [ ] Add architecture section to docs that names exactly 3 actors and their boundaries.
- [ ] Include numbered Step 0-5 flow with one sentence per step.
- [ ] Explicitly mark Step 4 as optional and non-blocking for minimal slice.
- [ ] Add rule: LLM never performs direct system I/O.
- [ ] Link this contract from phase planning docs so future issues can reference it.
