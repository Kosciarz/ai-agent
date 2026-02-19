# Issue 09: [hard] Implement run_command executor with output capture

## Description
Implement Step 3 executor for `run_command` that runs a shell command and captures result payload.

## Requirements
- Execute command in subprocess.
- Capture stdout and stderr streams.
- Capture exit status code.
- Enforce timeout to prevent hangs.

## Prerequisites
- #23

## External References
- Platform process execution docs for target OS

## Acceptance Criteria
- [ ] Implement `run_command` handler returning stdout, stderr, exit code, and timeout flag.
- [ ] Return non-zero status and error text when command fails.
- [ ] Terminate command on timeout and return structured timeout error.
- [ ] Do not block indefinitely on long-running commands.
- [ ] Validate with success, failure, and timeout command examples.
