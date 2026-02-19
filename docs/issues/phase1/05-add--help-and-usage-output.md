# Issue 05: [easy] Add --help and usage output

## Description
Provide CLI help text describing supported flags and prompt input methods.

## Why This Matters
Users need a discoverable command contract before invoking model or tools.

## Requirements
- Implement --help flag.
- Document positional prompt and stdin usage.
- Mention required API key environment variable.
- Ensure help exits with status code 0.

## Prerequisites
- #19

## External References
- https://en.cppreference.com/w/cpp/utility/program

## Acceptance Criteria
- [ ] Implement `--help` branch before any network/tool execution branch in `main`.
- [ ] Print usage with examples for both `assistant "prompt"` and `echo "prompt" | assistant`.
- [ ] Include required env var name for API key in help text.
- [ ] Exit with status code `0` when `--help` is passed.
- [ ] Verify no HTTP request function is called when `--help` is passed.
