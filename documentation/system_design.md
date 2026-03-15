# System Design

## How it Works

- The program is a menu where you can vote, see results, or exit.
- There are 3 candidates (A, B, C). Voting is just adding 1 to their vote variable.

## Variables
- `votesA`, `votesB`, `votesC` are integer variables, to store vote counts.

## Menu Logic
- Menu shown with numbers.
- If you pick "Cast Vote", you see candidates and type 1/2/3.
- "Show Results" displays all 3 candidates’ votes.
- "Exit" just stops (breaks the loop).

## Improvements
As I learned, I added:
- Checks for valid input.
- Only let user vote one time per program run.
- Improved menu look and messages for easy use.

*All logic inside main() for easier understanding as a beginner!*