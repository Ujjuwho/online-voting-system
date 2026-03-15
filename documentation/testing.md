# Testing My Voting Project

Below I tried different inputs and tested if program works as expected.

| Test | What I Did                         | What Should Happen                      |
|------|------------------------------------|-----------------------------------------|
| 1    | Voted for candidate 1              | Candidate A vote increased by 1         |
| 2    | Entered candidate 4                | Error message appears (no vote added)   |
| 3    | Tried to vote twice                | Second vote rejected in session         |
| 4    | Viewed results after voting        | Shows correct vote counts (updated)     |
| 5    | Put in big wrong number for menu   | Error message, asks again               |
| 6    | Exit from menu                     | Program says bye and stops              |
| 7    | Vote for B, then check results     | Candidate B vote increased by 1         |

**Note:**  
At first (V1), program let me vote any number, but later versions fixed this.  
I made sure to check with both good and bad inputs.

*Tested on CodeBlocks and DevC++*