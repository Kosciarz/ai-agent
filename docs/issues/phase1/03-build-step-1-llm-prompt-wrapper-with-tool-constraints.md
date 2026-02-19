# Issue 03: [medium] Build Step 1 LLM prompt wrapper with tool constraints

## Description
Implement Step 1 prompt wrapping so the program sends structured instructions plus allowed tools to the LLM.

## Requirements
- Embed user text into a structured assistant prompt.
- Include exactly three tool names in the prompt contract.
- State that exactly one tool may be called.
- Request JSON containing tool, args, explanation.

## Prerequisites
- #16
- #17

## External References
- docs/phase1-system-interaction-plan.md

## Acceptance Criteria
- [ ] Implement request builder function that inserts user prompt verbatim in quoted field.
- [ ] Emit tool allowlist containing only `run_command`, `read_file`, `list_directory`.
- [ ] Include explicit “exactly once” instruction in generated prompt text.
- [ ] Include required JSON keys: `tool`, `args`, `explanation`.
- [ ] Add unit/manual validation showing built prompt matches Phase 1 contract.
