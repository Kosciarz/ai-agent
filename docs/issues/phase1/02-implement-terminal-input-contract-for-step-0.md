# Issue 02: [easy] Implement terminal input contract for Step 0

## Description
Implement Step 0 behavior where the user sends one request via terminal and the program receives it as the request payload.

## Requirements
- Accept one user prompt from argv or stdin.
- Prefer argv prompt when both argv and stdin are present.
- Reject empty/whitespace input.
- Return clear error for invalid input.

## Prerequisites
- #16

## External References
- https://en.cppreference.com/w/cpp/io

## Acceptance Criteria
- [ ] Implement prompt ingestion in `src/Main.cpp` (or extracted input module).
- [ ] Add path for `agent "<prompt>"` style argument input.
- [ ] Add stdin fallback path when no prompt argument exists.
- [ ] Return non-zero exit code for empty input and print actionable error.
- [ ] Verify with manual commands for argv, stdin, and empty input cases.
