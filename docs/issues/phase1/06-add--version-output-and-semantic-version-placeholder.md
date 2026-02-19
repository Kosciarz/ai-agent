# Issue 06: [easy] Add --version output and semantic version placeholder

## Description
Expose version metadata through CLI for release tracking and support triage.

## Why This Matters
Version visibility is required for debugging and reproducible support conversations.

## Requirements
- Implement --version flag.
- Define initial semantic version string.
- Print version without side effects.
- Exit with status code 0.

## Prerequisites
- #19

## External References
- https://semver.org/

## Acceptance Criteria
- [ ] Define version constant in one place (e.g. `src/version.h` or CMake definition).
- [ ] Implement `--version` to print only version string and newline.
- [ ] Use SemVer format `MAJOR.MINOR.PATCH` and start from an agreed baseline.
- [ ] Exit with code `0` and skip all other execution paths.
- [ ] Add a manual check command in docs that validates printed version format.
