// Michael Lam
// August 23, 2018
// There's a casino game called Craps. Wow. Also gamble responsibly thanks!!

/* A player rolls two dice. Each die has six faces. These faces contain 1, 2, 3,
   4, 5, and 6 spots. After the dice have come to rest, the sum of the spots on 
   the two upward faces is calculated. If the sum is 7 or 11 on the first throw,
   the player wins. If the sum is 2, 3, or 12 on the first throw (called
   "craps"), the player loses (i.e., the "house" wins). If the sum is 4, 5, 6,
   8, 9, or 10 on the first throw, then that sum becomes the player's "point." 
   To win, you must continue rolling the dice until you "make your point." The
   player loses by rolling a 7 before making the point.
   
   C How to Program, 3rd Edition                                              */

// Declaring header files
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Declaring variables
    int gameStatus, playerPoint, sum;
    
    // Initializing game
    srand (time (NULL));
    printf("Press Enter to roll. ");
    getchar();
    sum = rollDice();
    
    switch (sum) {
        case 2: case 3: case 12:
            gameStatus = 0;
            break;
        case 7: case 11:
            gameStatus = 1;
            break;
        default:
            gameStatus = 2;
            playerPoint = sum;
            printf("Player's point is: %d\n", playerPoint);
            break;
    }
    
    while (gameStatus == 2) {
        printf("\nPress Enter to roll again. ");
        getchar();
        sum = rollDice();
        if (sum == playerPoint) {
            gameStatus = 1;
        } else if (sum == 7) {
            gameStatus = 0;
        }
    }
    
    if (gameStatus == 0) {
        printf("\nYou lose.");
    } else if (gameStatus == 1) {
        printf("\nYou win!");
    }
    
    return 0;
}

int rollDice(void) {
    int die1, die2;
    die1 = 1 + (rand() % 6);
    die2 = 1 + (rand() % 6);
    printf("Player rolled %d and %d. Total sum: %d\n", die1, die2, die1 + die2);
    return die1 + die2;
}