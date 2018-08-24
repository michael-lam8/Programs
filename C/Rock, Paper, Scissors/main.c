// Michael Lam
// August 23, 2018
// Rock, Paper, Scissors

// Declaring header files
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Declaring variables
    char ch;
    int playerDraw, cpuDraw, wins = 0, losses = 0, ties = 0, gameStatus = 1, done = 0;
    
    // Initializing game
    srand(time(NULL));
    
    do {
        cpuDraw = 1 + (rand() % 3);
        printf("Rock = 1, Paper = 2, Scissors = 3\nInput: ");
        scanf("%d", &playerDraw);
        printf("\n");
        
        switch (playerDraw) {
            case 1:
                if (cpuDraw == 1) {
                    printf("You drew Rock.\n");
                    printf("Computer drew Rock.\n");
                    printf("Tie!\n");
                    ties++;
                } else if (cpuDraw == 2) {
                    printf("You drew Rock.\n");
                    printf("Computer drew Paper.\n");
                    printf("You lose!\n");
                    losses++;
                } else {
                    printf("You drew Rock.\n");
                    printf("Computer drew Scissors.\n");
                    printf("You win!\n");
                    wins++;
                }
                break;
            case 2:
                if (cpuDraw == 1) {
                    printf("You drew Paper.\n");
                    printf("Computer drew Rock.\n");
                    printf("You win!\n");
                    wins++;
                } else if (cpuDraw == 2) {
                    printf("You drew Paper.\n");
                    printf("Computer drew Paper.\n");
                    printf("Tie!\n");
                    ties++;
                } else {
                    printf("You drew Paper.\n");
                    printf("Computer drew Scissors.\n");
                    printf("You lose!\n");
                    losses++;
                }
                break;
            case 3:
                if (cpuDraw == 1) {
                    printf("You drew Scissors.\n");
                    printf("Computer drew Rock.\n");
                    printf("You lose!\n");
                    wins++;
                } else if (cpuDraw == 2) {
                    printf("You drew Scissors.\n");
                    printf("Computer drew Paper.\n");
                    printf("You win!\n");
                    wins++;
                } else {
                    printf("You drew Scissors.\n");
                    printf("Computer drew Scissors.\n");
                    printf("Tie!\n");
                    ties++;
                }
                break;
            default:
                printf("Invalid input.\n");
                break;
        }
        
        printf("\nWins: %d Losses: %d Ties: %d", wins, losses, ties);
        printf("\nTotal games played: %d\n\n", wins + losses + ties);
    } while (gameStatus);
    
    return 0;
}

