# Issue 04: [medium] Integrate HTTP transport for program-to-LLM call

## Description
Add network transport used by Step 1 to send the prompt and receive the LLM response payload.

## Requirements
- Integrate one HTTP client dependency in CMake.
- Send POST request to configured LLM endpoint.
- Set timeout and basic retry/clear failure handling.
- Return response body and status to parser layer.

## Prerequisites
- #18

## External References
- Official documentation of selected HTTP library

## Acceptance Criteria
- [ ] CMake config resolves and links the HTTP client on clean build.
- [ ] Program sends one POST request with Step 1 payload and headers.
- [ ] Timeout is explicitly configured in code and documented.
- [ ] Network errors return structured failure object, not crash.
- [ ] Capture HTTP status and body for downstream parsing.
