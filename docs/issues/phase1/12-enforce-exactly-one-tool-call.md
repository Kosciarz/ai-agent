# Issue 12: [medium] Enforce exactly one tool call

## Description
Implement guardrails that accept exactly one tool call from each model response.

## Why This Matters
Phase 1 contract explicitly forbids multi-tool orchestration and hidden chaining.

## Requirements
- Reject responses with zero tool calls.
- Reject responses with more than one tool call.
- Allow only single valid tool call through dispatcher.
- Return deterministic error messages for violations.

## Prerequisites
- #26

## External References
- None required

## Acceptance Criteria
- [ ] Count parsed tool calls and branch on `0`, `1`, and `>1` explicitly in code.
- [ ] Return unique error code/message for zero-tool and multi-tool violations.
- [ ] Permit execution only when exactly one tool call is present and valid.
- [ ] Add manual test payloads that trigger each branch and capture expected exit code.
- [ ] Ensure no fallback path executes assistant free-text as commands.
