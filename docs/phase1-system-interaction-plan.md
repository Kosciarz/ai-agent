# Phase 1 Plan: User, Program, and LLM Interaction

This document defines the full Phase 1 flow for the C++ CLI assistant.

## Actors

There are three actors in this system:
- User
- C++ Program
- LLM

## 1. Step-by-Step Flow

### Step 0 - User Prompt

The user types a request in the terminal:

```bash
ai "why did my last build fail?"
```

This input goes to the C++ program.

### Step 1 - Program Receives Input

The C++ program:
- reads the user's text,
- wraps it into a structured prompt for the LLM,
- sends tool constraints for Phase 1.

Example prompt sent to the LLM:

```text
You are an AI assistant. The user asked: "why did my last build fail?"
Available tools you may call exactly once:
- run_command
- read_file
- list_directory
Provide a JSON response indicating:
1) Which tool to call
2) The arguments
3) A brief explanation
```

### Step 2 - LLM Responds

The LLM does not execute tools. It only decides and returns a JSON recommendation.

Example LLM response:

```json
{
  "tool": "run_command",
  "args": "cat build.log",
  "explanation": "The build log might contain error messages explaining the failure."
}
```

### Step 3 - Program Executes the Tool

The C++ program parses the LLM JSON and executes one selected tool:

- `run_command("cat build.log")` -> executes command (for example via `popen()`), captures output.
- `read_file("somefile")` -> opens file, reads content.
- `list_directory("some/path")` -> reads directory contents.

The program captures tool output (stdout/stderr, file content, or directory list).

### Step 4 - Program Returns Tool Output to LLM (Optional in Phase 1)

Minimal Phase 1 can optionally send tool output back to the LLM for final user-facing wording.

Example final LLM explanation:

```text
The last build failed because of an undefined symbol in main.cpp. Check the linker output in build.log.
```

### Step 5 - Program Displays to User

The C++ program prints the final result in the terminal.

## 2. Key Phase 1 Rules

- The LLM does reasoning only. It never touches the system directly.
- The C++ program is the only executor of tools.
- Exactly one tool call is allowed per request.
- No multi-step reasoning loop in Phase 1.
- No memory or persistence in Phase 1.
- Safety checks must be enforced by the C++ program.

## 3. Safety Requirements

Safety controls belong in the C++ program, including:
- tool allowlist enforcement (`run_command`, `read_file`, `list_directory` only),
- argument validation,
- rejection of dangerous commands (for example `rm -rf /`),
- consistent error handling and non-zero exit codes on failures.
