# Issue 05: [easy] Handle API key and auth headers for LLM calls

## Description
Implement secure authentication handling for Step 1 LLM requests.

## Requirements
- Read API key from environment variable.
- Build Authorization header from key.
- Fail fast when key is missing/empty.
- Never print key contents.

## Prerequisites
- #19

## External References
- https://learn.microsoft.com/powershell/module/microsoft.powershell.core/about/about_environment_variables

## Acceptance Criteria
- [ ] Read key via `std::getenv` (or equivalent) from one canonical env var.
- [ ] Attach key only in HTTP auth header builder path.
- [ ] Return non-zero code with remediation text when key is absent.
- [ ] Redact key in any debug logging path.
- [ ] Add manual checks for missing-key and present-key runs.
