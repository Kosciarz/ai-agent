# Issue 14: [medium] Implement optional Step 4 tool-output-to-LLM summarization

## Description
Add optional Step 4 path where tool output is sent back to the LLM for a human-readable explanation.

## Requirements
- Add config flag to enable/disable Step 4.
- When enabled, send tool output plus explanation context to LLM.
- When disabled, skip second LLM call.
- Keep one-tool-per-request constraint unchanged.

## Prerequisites
- #28
- #19

## External References
- docs/phase1-system-interaction-plan.md

## Acceptance Criteria
- [ ] Implement runtime switch (flag/env/config) controlling Step 4 behavior.
- [ ] When enabled, perform exactly one additional LLM call for summarization only.
- [ ] Do not execute any second tool call during Step 4 path.
- [ ] When disabled, return Step 3 output directly to display formatter.
- [ ] Document Step 4 as optional in user-facing docs and help text.
