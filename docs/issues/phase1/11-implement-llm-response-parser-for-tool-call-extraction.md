# Issue 11: [medium] Implement LLM response parser for tool call extraction

## Description
Parse model response and extract requested tool name and JSON arguments.

## Why This Matters
Tool execution depends on strict, trustworthy extraction of model intent.

## Requirements
- Parse response JSON safely.
- Extract tool call object fields.
- Validate argument shape per tool contract.
- Return structured parse errors for invalid responses.

## Prerequisites
- #23
- #24

## External References
- Official API response schema docs

## Acceptance Criteria
- [ ] Implement parser that reads provider response and returns `{toolName, argumentsJson}` struct.
- [ ] Validate required fields exist before access; reject missing paths with explicit error codes.
- [ ] Reject non-JSON `arguments` payloads and malformed argument objects.
- [ ] Ensure parser returns one clear error object for invalid schema instead of throwing uncaught exceptions.
- [ ] Add fixture examples for valid tool call and malformed response and verify outputs.
