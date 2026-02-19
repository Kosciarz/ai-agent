# Issue 16: [easy] Implement list_directory tool

## Description
List directory entries and classify each as file or directory.

## Why This Matters
Directory listing supports navigation and context discovery tasks in CLI workflows.

## Requirements
- Accept directory path argument.
- Return all immediate entries.
- Mark each entry type as file or directory.
- Handle invalid and inaccessible directories safely.

## Prerequisites
- #28

## External References
- https://en.cppreference.com/w/cpp/filesystem/directory_iterator

## Acceptance Criteria
- [ ] Implement handler using `std::filesystem::directory_iterator` for immediate children only.
- [ ] Return array entries with at least `{name, type}` where type is `file` or `directory`.
- [ ] Sort output by name to keep response stable across runs on same directory.
- [ ] Return structured error for non-existing path or non-directory path input.
- [ ] Verify on one directory containing mixed files and folders.
