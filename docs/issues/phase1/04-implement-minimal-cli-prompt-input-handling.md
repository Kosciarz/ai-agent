# Issue 04: [easy] Implement minimal CLI prompt input handling

## Description
Implement prompt ingestion from CLI argument or stdin with deterministic precedence.

## Why This Matters
Prompt input is the entrypoint of the entire assistant request pipeline.

## Requirements
- Support prompt argument path.
- Support stdin fallback when argument is missing.
- Reject empty input after trimming whitespace-only strings.
- Return clear user-facing message for invalid input.

## Prerequisites
- #18

## External References
- https://en.cppreference.com/w/cpp/io

## Acceptance Criteria
- [ ] Implement `parsePrompt(argc, argv, std::istream&)` (or equivalent) in `src/Main.cpp`.
- [ ] When positional prompt exists, use it and skip stdin read path.
- [ ] When no positional prompt exists, read exactly one prompt payload from stdin.
- [ ] Return non-zero exit code and explicit error text for empty or whitespace-only prompt.
- [ ] Add manual verification commands in issue body: prompt arg path and piped stdin path.
