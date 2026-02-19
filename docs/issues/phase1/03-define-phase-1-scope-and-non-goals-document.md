# Issue 03: [easy] Define Phase 1 scope and non-goals document

## Description
Document exact Phase 1 boundaries, including explicit non-goals for memory and persistence.

## Why This Matters
Scope clarity prevents accidental feature creep during the initial vertical slice.

## Requirements
- Describe single-prompt request lifecycle.
- State one-tool-call-only constraint.
- List non-goals: multi-step planning, memory, persistence.
- Add success criteria for a minimal vertical slice.

## Prerequisites
- #17

## External References
- None required

## Acceptance Criteria
- [ ] Add a `Phase 1 Scope` section under `docs/phase1-github-issues-plan.md` with in-scope bullets.
- [ ] Add a `Non-Goals` section that explicitly names memory, persistence, and multi-step planning as excluded.
- [ ] Include one concrete request lifecycle sequence from prompt input to single tool result output.
- [ ] Add a short `Out-of-Scope Rejection` checklist used during PR review.
- [ ] Ensure wording is normative (`must`, `must not`) rather than ambiguous language.
