# Issue 17: [easy] Add CLI help and version aligned with Phase 1 flow

## Description
Update CLI UX to document the actor flow contract and available runtime modes for Phase 1.

## Requirements
- Implement --help output with Step 0 usage examples.
- Implement --version output.
- Document one-tool limitation and optional Step 4 mode.
- Exit 0 for help/version paths.

## Prerequisites
- #16
- #17
- #30

## External References
- https://semver.org/

## Acceptance Criteria
- [ ] `--help` includes example `ai "..."` invocation and stdin alternative.
- [ ] `--help` explicitly states one-tool-per-request limitation.
- [ ] `--help` documents optional Step 4 summarization toggle.
- [ ] `--version` prints semantic version string only.
- [ ] Both flags bypass network/tool execution and return exit code 0.
