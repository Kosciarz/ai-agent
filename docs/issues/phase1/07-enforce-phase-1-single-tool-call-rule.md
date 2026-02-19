# Issue 07: [medium] Enforce Phase 1 single-tool-call rule

## Description
Enforce core Phase 1 limitation: exactly one tool call per user request, no multi-step tool chaining.

## Requirements
- Allow exactly one tool decision per request.
- Reject no-tool and multi-tool payload variants.
- Disallow loops or additional follow-up tool selection.
- Emit deterministic contract-violation errors.

## Prerequisites
- #21

## External References
- docs/phase1-system-interaction-plan.md

## Acceptance Criteria
- [ ] Add validation branch for zero-tool response and return explicit error.
- [ ] Add validation branch for multi-tool payload and return explicit error.
- [ ] Proceed only when exactly one parsed tool request exists.
- [ ] Ensure program exits after single execution path in same request cycle.
- [ ] Add manual test payloads proving all three branches (0/1/many).
