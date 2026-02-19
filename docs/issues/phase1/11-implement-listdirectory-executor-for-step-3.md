# Issue 11: [easy] Implement list_directory executor for Step 3

## Description
Implement Step 3 executor for `list_directory` that enumerates directory entries.

## Requirements
- Read directory path from parsed args.
- List immediate entries only.
- Return entry name and type.
- Handle invalid path and permission errors.

## Prerequisites
- #23

## External References
- https://en.cppreference.com/w/cpp/filesystem/directory_iterator

## Acceptance Criteria
- [ ] Implement `list_directory` handler using `std::filesystem::directory_iterator`.
- [ ] Return structured array items with at least `name` and `type`.
- [ ] Sort entries by name for stable terminal output.
- [ ] Return structured error for non-directory or missing path.
- [ ] Validate on directory with mixed files/folders.
