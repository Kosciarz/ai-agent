# Issue 06: [medium] Parse Step 2 LLM JSON response into tool request

## Description
Implement Step 2 parser that reads LLM output and extracts tool recommendation payload.

## Requirements
- Parse response as JSON.
- Extract keys: tool, args, explanation.
- Validate data types for each key.
- Return structured parser errors.

## Prerequisites
- #18
- #19

## External References
- Official API response schema docs

## Acceptance Criteria
- [ ] Implement parser returning `{tool, args, explanation}` typed structure.
- [ ] Reject missing keys with specific parse error message/code.
- [ ] Reject non-string `tool`/`explanation` and invalid `args` type for selected schema.
- [ ] Preserve explanation text for final display path.
- [ ] Add fixtures for valid JSON and malformed/missing-field payloads.
