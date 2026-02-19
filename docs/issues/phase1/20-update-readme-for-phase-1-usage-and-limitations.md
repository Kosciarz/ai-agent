# Issue 20: [easy] Update README for Phase 1 usage and limitations

## Description
Refresh README so a new user can build and run the Phase 1 assistant end to end.

## Why This Matters
Clear onboarding documentation is required for adoption and validation.

## Requirements
- Document build steps and prerequisites.
- Document prompt input flows and CLI flags.
- Document environment variable setup for API key.
- Document Phase 1 limitations and non-goals.

## Prerequisites
- #20
- #21
- #25
- #34

## External References
- None required

## Acceptance Criteria
- [ ] Add build section with exact CMake commands from clean clone to runnable binary.
- [ ] Add run examples for prompt argument and stdin pipe modes.
- [ ] Document required API key variable with one set/unset troubleshooting example.
- [ ] Add explicit limitations section: no memory, no persistence, no multi-step planning.
- [ ] Link to `docs/phase1-manual-test-matrix.md` and verify referenced path is correct.
