// Online Voting System (Beginner project) - Version 3: Only 1 vote allowed per session
// Author: Ujjwal Pathak

#include <stdio.h>

int votesA = 0;
int votesB = 0;
int votesC = 0;

int main() {
    int choice;
    int candidate;
    int alreadyVoted = 0; // 0 means user can vote, 1 means user already voted

    while(1) {
        printf("\n=== Online Voting System ===\n");
        printf("1. Cast Vote\n");
        printf("2. View Results\n");
        printf("3. Exit\n");
        printf("Choose any option: ");
        scanf("%d", &choice);

        if(choice == 1) {
            if(alreadyVoted == 1) {
                printf("Sorry, you can vote only once in this session!\n");
            } else {
                printf("\nCandidates List:\n");
                printf("1. Candidate A\n");
                printf("2. Candidate B\n");
                printf("3. Candidate C\n");
                printf("Enter candidate number (1-3): ");
                scanf("%d", &candidate);

                if(candidate == 1) {
                    votesA = votesA + 1;
                    printf("Vote done for Candidate A\n");
                    alreadyVoted = 1; // user has now voted
                }
                else if(candidate == 2) {
                    votesB = votesB + 1;
                    printf("Vote done for Candidate B\n");
                    alreadyVoted = 1;
                }
                else if(candidate == 3) {
                    votesC = votesC + 1;
                    printf("Vote done for Candidate C\n");
                    alreadyVoted = 1;
                }
                else {
                    printf("Error! Please select correct candidate number (1-3)\n");
                }
            }
        }
        else if(choice == 2) {
            printf("\n-- Voting Results --\n");
            printf("Candidate A: %d\n", votesA);
            printf("Candidate B: %d\n", votesB);
            printf("Candidate C: %d\n", votesC);
        }
        else if(choice == 3) {
            printf("Thank you! Exiting program.\n");
            break;
        }
        else {
            printf("Invalid input, choose correct option.\n");
        }
    }
    return 0;
}