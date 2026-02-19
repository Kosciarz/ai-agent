# Issue 08: [medium] Add JSON serialization and parsing dependency

## Description
Integrate a JSON library for request construction and response parsing.

## Why This Matters
Robust structured parsing is required for tool-call extraction and validation.

## Requirements
- Add JSON library via CMake.
- Implement parse error detection.
- Support typed access for tool name and arguments.
- Avoid silent fallback on malformed payloads.

## Prerequisites
- #18

## External References
- Official documentation of selected JSON library

## Acceptance Criteria
- [ ] Wire JSON dependency into build and include headers in one dedicated translation unit.
- [ ] Implement `parseJson(std::string)` helper that returns either JSON object or parse error.
- [ ] Reject malformed JSON with explicit message including parse offset/line when available.
- [ ] Use typed field extraction for `tool.name` and `tool.arguments` instead of raw string scanning.
- [ ] Add one positive and one malformed payload example in docs with expected parser result.
