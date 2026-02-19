# Issue 10: [easy] Add environment variable loading for API key

## Description
Load required API key from environment and fail safely when missing.

## Why This Matters
Credential handling is foundational for secure API integration.

## Requirements
- Read API key from documented environment variable.
- Detect missing or empty key values.
- Do not print key content in logs or errors.
- Return clear message explaining how to set variable.

## Prerequisites
- #24

## External References
- https://learn.microsoft.com/powershell/module/microsoft.powershell.core/about/about_environment_variables

## Acceptance Criteria
- [ ] Read API key via `std::getenv` (or equivalent) from one canonical variable name.
- [ ] If key is missing/empty, print remediation with exact variable name and exit non-zero.
- [ ] Never include full key value in stdout/stderr; redact to fixed mask if needed for debug logs.
- [ ] Pass key only through Authorization header builder and not through command-line args.
- [ ] Add manual test steps for both missing-key and key-present paths.
