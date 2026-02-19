# Issue 15: [easy] Implement read_file tool

## Description
Read and return file contents for a provided path with robust error handling.

## Why This Matters
File inspection is a core assistant function for code and config tasks.

## Requirements
- Accept path argument from tool payload.
- Read file contents as text for Phase 1 scope.
- Handle missing and permission-denied paths.
- Return clear error without crashing.

## Prerequisites
- #28

## External References
- https://en.cppreference.com/w/cpp/filesystem

## Acceptance Criteria
- [ ] Implement handler that reads `path` argument and validates it is non-empty.
- [ ] Use `std::ifstream` (or equivalent) and return file contents in success payload.
- [ ] Return `not_found` when path does not exist and `permission_denied` when unreadable.
- [ ] Preserve newline content; do not collapse file formatting in output.
- [ ] Verify using one existing file, one missing file, and one restricted file path.
