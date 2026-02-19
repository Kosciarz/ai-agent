# Issue 02: [easy] Add ISSUE_TEMPLATE.md for Phase 1 issues

## Description
Create a reusable Markdown template that standardizes all Phase 1 issue descriptions.

## Why This Matters
A single template reduces ambiguity and keeps requirements reviewable across contributors.

## Requirements
- Create docs/ISSUE_TEMPLATE.md.
- Include sections: title, description, requirements, prerequisites, references, acceptance criteria.
- Define mandatory difficulty and category labels.
- Add definition-of-done checklist in the template.

## Prerequisites
- #16

## External References
- https://docs.github.com/issues/building-community/configuring-issue-templates-for-your-repository

## Acceptance Criteria
- [ ] Create `docs/ISSUE_TEMPLATE.md` with top-level headings for all required sections.
- [ ] Include one copy-paste-ready issue skeleton with placeholder values for each section.
- [ ] Add a short rules block that enforces difficulty in title format `[easy|medium|hard]`.
- [ ] Validate Markdown rendering on GitHub (headings, bullets, and code spans render correctly).
- [ ] Reference the template from `docs/phase1-github-issues-plan.md` so contributors use one canonical format.
