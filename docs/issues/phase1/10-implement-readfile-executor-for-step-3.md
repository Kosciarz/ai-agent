# Issue 10: [easy] Implement read_file executor for Step 3

## Description
Implement Step 3 executor for `read_file` that reads and returns file contents.

## Requirements
- Read file path from parsed args.
- Open and read text file contents.
- Handle not-found and permission errors.
- Return structured result payload.

## Prerequisites
- #23

## External References
- https://en.cppreference.com/w/cpp/filesystem

## Acceptance Criteria
- [ ] Implement `read_file` handler reading `path` argument from validated request.
- [ ] Return file contents unchanged (including newlines) on success.
- [ ] Return `not_found` error for missing path.
- [ ] Return `permission_denied` (or equivalent) for inaccessible files.
- [ ] Validate with existing, missing, and restricted file examples.
