# Issue 01: [easy] Create GitHub labels for difficulty and categories

## Description
Define a stable label taxonomy for Phase 1 issues so filtering and reporting stay consistent.

## Why This Matters
Without shared labels, issue tracking becomes noisy and search results are unreliable.

## Requirements
- Create all difficulty labels: easy, medium, hard.
- Create all category labels listed in the Phase 1 plan.
- Use consistent naming with difficulty:* and category:* prefixes.
- Document final label set in the issue body.

## Prerequisites
- None

## External References
- https://docs.github.com/issues/using-labels-and-milestones-to-track-work/managing-labels

## Acceptance Criteria
- [ ] Create labels `difficulty:easy`, `difficulty:medium`, and `difficulty:hard` using `gh label create ... --force`.
- [ ] Create all category labels and `phase:1` using exact names from the plan.
- [ ] Run `gh label list --limit 200` and verify every required label name appears exactly once.
- [ ] Open repository labels page and confirm no near-duplicate variants exist (e.g. typo/casing variants).
- [ ] Attach at least one of the new labels to an existing issue and verify filtering works in GitHub UI.
