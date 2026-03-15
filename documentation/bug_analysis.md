# Bugs and How I Found/Fix Them

## Bugs in First Version (V1)
- Could vote for wrong number (like 10), no error.
- Could vote for A, B, C multiple times (no limit).
- If entered wrong menu number, program just says "Wrong option!", but nothing else.
- Showed results even if no one voted.

## How I Fixed It
- In Version 2, I put if/else to check if user picked correct candidate (1-3), otherwise it says error.
- In Version 3, I made `alreadyVoted` variable, so you can only vote one time per run.
- Menu and output got nicer in Version 4 (clearer instructions).

**Bugs Still There:**
- No real security, anybody can vote by running program again.
- Votes reset if you close the program.

*Most issues were fixed by adding more if/else and variables in main().*