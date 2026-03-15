// Online Voting System (Beginner project) - Version 1: Basic
// Made by: Ujjwal Pathak

#include <stdio.h>

// Here I keep total votes of each candidate
int votesA = 0;
int votesB = 0;
int votesC = 0;

int main() {
    int choice;
    int candidate;

    // Loop for main menu
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
            }
            if(candidate == 2) {
                votesB = votesB + 1;
            }
            if(candidate == 3) {
                votesC = votesC + 1;
            }
            // If user enters 4 or any other number, nothing happens but also no error

            printf("Your vote is recorded.\n");
        }
        else if(choice == 2) {
            printf("\n-- Voting Results --\n");
            printf("Candidate A: %d\n", votesA);
            printf("Candidate B: %d\n", votesB);
            printf("Candidate C: %d\n", votesC);
        }
        else if(choice == 3) {
            printf("Thank you for using Voting System!\n");
            break; // exit loop
        }
        else {
            // I was not sure if this is needed but added it
            printf("Wrong option!\n");
        }
    }
    return 0;
}