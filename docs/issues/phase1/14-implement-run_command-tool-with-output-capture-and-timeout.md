# Issue 14: [hard] Implement run_command tool with output capture and timeout

## Description
Execute shell commands, capture output streams, and enforce execution timeout limits.

## Why This Matters
Command execution is powerful but high-risk, so behavior must be tightly controlled.

## Requirements
- Execute provided command string in subprocess.
- Capture stdout and stderr output.
- Capture process exit code and propagate it.
- Apply configurable timeout and terminate long-running process.

## Prerequisites
- #28

## External References
- Platform process execution docs for target OS

## Acceptance Criteria
- [ ] Implement subprocess runner that captures stdout and stderr separately.
- [ ] Return process exit code in result payload for both success and failure commands.
- [ ] Add timeout parameter (default value documented) and terminate process on timeout.
- [ ] Return structured timeout error with elapsed time and command summary.
- [ ] Verify with three commands: success (`echo`), failure (non-existing command), timeout (sleep/ping delay).
