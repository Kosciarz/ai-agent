# Issue 07: [medium] Integrate HTTP client dependency for LLM calls

## Description
Add a production-viable HTTP client dependency and wire it through CMake.

## Why This Matters
LLM integration cannot proceed without reliable outbound POST request support.

## Requirements
- Choose one HTTP client library and justify choice.
- Add dependency configuration to CMake.
- Support JSON POST over HTTPS.
- Handle connection and timeout failures.

## Prerequisites
- #18

## External References
- Official documentation of selected HTTP library

## Acceptance Criteria
- [ ] Add dependency wiring in `CMakeLists.txt` and `src/CMakeLists.txt` with reproducible configure/build.
- [ ] Implement a small `postJson(url, headers, body)` wrapper in C++ that returns status + response body.
- [ ] Set request timeout explicitly in code and expose sane default value.
- [ ] Map transport errors (DNS, connect timeout, TLS failure) to structured error objects.
- [ ] Run one real POST to a test endpoint and capture status code + response snippet in issue comments.
