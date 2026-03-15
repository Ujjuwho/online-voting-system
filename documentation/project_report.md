# Project Report - Beginner Level Online Voting System

## Introduction
My project is a simple online voting system, written for learning programming in C. The user can select one of three candidates, vote, or check results in the console.

## What I Wanted
I wanted to learn about:
- How to make menus in C,
- How to use variables for counting,
- How to get user input,
- How to check for wrong inputs.

## How System Works
- Start: Shows menu (vote, results, exit)
- Voting: Pick candidate 1, 2 or 3, vote is counted
- Results: See how many votes each has
- Exit: Program says goodbye!

## My Coding Steps
1. First I made it work with no input checking (anyone could type any number—oops!).
2. Then I tried to add checks so you can only pick 1/2/3.
3. I realized I needed to stop people from voting twice, so added a variable for that.
4. Later, I made all messages and menu look better.

All changes are inside `main()` so I (or beginners) can see all logic together.

## Testing
Please see "testing.md" for actual tries and results.

## Limitations
- You can only vote once per running of program, but if you restart it, you can vote again.
- Votes are lost if you close the program (no save).
- No real user names or security, just fun for learning.

## Improvements I made
- Added checking for numbers so people can't break my program easily.
- More friendly language and menus.
- Stopped repeat voting per session.

## What I Learned
- How to use loops and if/else in C,
- How input checking is important,
- That programs have bugs at first, but can be fixed step by step,
- How to make and test beginner programs.

*Thank you for reading my report! I hope it helps other C beginners.*