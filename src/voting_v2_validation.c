// Online Voting System (Beginner project) - Version 2: Input Checking
// Author: Ujjwal Pathak

#include <stdio.h>

int votesA = 0;
int votesB = 0;
int votesC = 0;

int main() {
    int choice;
    int candidate;

    while(1) {
        printf("\n=== Online Voting System ===\n");
        printf("1. Cast Vote\n");
        printf("2. View Results\n");
        printf("3. Exit\n");
        printf("Choose any option: ");
        scanf("%d", &choice);

        if(choice == 1) {
            printf("\nCandidates List:\n");
            printf("1. Candidate A\n");
            printf("2. Candidate B\n");
            printf("3. Candidate C\n");
            printf("Enter candidate number (1-3): ");
            scanf("%d", &candidate);

            if(candidate == 1) {
                votesA = votesA + 1;
                printf("Vote done for Candidate A\n");
            }
            else if(candidate == 2) {
                votesB = votesB + 1;
                printf("Vote done for Candidate B\n");
            }
            else if(candidate == 3) {
                votesC = votesC + 1;
                printf("Vote done for Candidate C\n");
            }
            else {
                printf("Error! Please select correct candidate number (1-3)\n");
            }
        }
        else if(choice == 2) {
            printf("\n-- Voting Results --\n");
            printf("Candidate A: %d\n", votesA);
            printf("Candidate B: %d\n", votesB);
            printf("Candidate C: %d\n", votesC);
        }
        else if(choice == 3) {
            printf("Thank you and Goodbye!\n");
            break;
        }
        else {
            printf("Invalid choice. Try again.\n");
        }
    }
    return 0;
}