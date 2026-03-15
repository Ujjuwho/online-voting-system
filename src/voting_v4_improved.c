// Online Voting System (Beginner project) - Version 4: Nicer Menu and Messages
// Author: Ujjwal Pathak

#include <stdio.h>

int votesA = 0;
int votesB = 0;
int votesC = 0;

int main() {
    int choice;
    int candidate;
    int alreadyVoted = 0;

    printf("******************************\n");
    printf("*   Online Voting System!    *\n");
    printf("******************************\n");

    while(1) {
        printf("\n---------------------------\n");
        printf("Menu:\n");
        printf("1. Cast Vote\n");
        printf("2. Show Results\n");
        printf("3. Exit\n");
        printf("---------------------------\n");
        printf("Select (1-3): ");
        scanf("%d", &choice);

        if(choice == 1) {
            if(alreadyVoted == 1) {
                printf("You already voted in this session.\n");
            } else {
                printf("\nCandidates:\n");
                printf("1. Candidate A\n");
                printf("2. Candidate B\n");
                printf("3. Candidate C\n");
                printf("Type number of candidate (1-3): ");
                scanf("%d", &candidate);

                if(candidate == 1) {
                    votesA = votesA + 1;
                    printf("Thanks! Your vote is for Candidate A.\n");
                    alreadyVoted = 1;
                }
                else if(candidate == 2) {
                    votesB = votesB + 1;
                    printf("Thanks! Your vote is for Candidate B.\n");
                    alreadyVoted = 1;
                }
                else if(candidate == 3) {
                    votesC = votesC + 1;
                    printf("Thanks! Your vote is for Candidate C.\n");
                    alreadyVoted = 1;
                }
                else {
                    printf("Wrong candidate number! Please enter 1, 2, or 3.\n");
                }
            }
        }
        else if(choice == 2) {
            printf("\n== Voting Results ==\n");
            printf("Candidate A: %d votes\n", votesA);
            printf("Candidate B: %d votes\n", votesB);
            printf("Candidate C: %d votes\n", votesC);
            printf("====================\n");
        }
        else if(choice == 3) {
            printf("Bye! Thanks for using my program.\n");
            break;
        }
        else {
            printf("Not a valid option. Please choose 1, 2 or 3!\n");
        }
    }
    return 0;
}