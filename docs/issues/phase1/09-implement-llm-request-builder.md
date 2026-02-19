# Issue 09: [medium] Implement LLM request builder

## Description
Build request payloads that include user prompt and available tool definitions.

## Why This Matters
Incorrect request shape causes API failures and inconsistent model behavior.

## Requirements
- Map user prompt into provider request schema.
- Include definitions for three allowed tools.
- Serialize payload with deterministic field structure.
- Keep builder logic isolated from transport layer.

## Prerequisites
- #22
- #23

## External References
- Official API docs for selected LLM provider

## Acceptance Criteria
- [ ] Implement `buildLlmRequest(prompt)` that returns a JSON object/string without performing I/O.
- [ ] Include exactly three tool definitions: `run_command`, `read_file`, `list_directory`.
- [ ] Ensure each tool schema declares required argument keys and value types.
- [ ] Serialize payload deterministically so repeated input yields stable JSON key ordering where library supports it.
- [ ] Log or print request preview in debug mode with API key redacted before sending.
