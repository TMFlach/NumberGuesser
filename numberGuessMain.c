#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void printMenu(int max);
void playGame(int max);
//create main function to handle menu
int main() {
    int selection = 0;
    int maxNum = 10;
    while (selection != 3) {
        printMenu(maxNum);
        scanf("%d", &selection);
        if(selection == 1) {
            //play game selected
            playGame(maxNum);
        } else if(selection == 2) {
            //change max number selected.
            printf("Change max number to:\n");
            scanf("%d", &maxNum);
        } else if (selection != 3){
            printf("Invalid Selection.");
        }
    }
}
//create function to display menu
void printMenu(int max) {
    printf("Press a number to select an option. Max number: %d\n", max);
    printf("1: Play number guesser.\n");
    printf("2: Change max number.\n");
    printf("3: quit\n");
}
//create function for starting the number guessing game.
void playGame(int max) {
    char guess[10];
    time_t t;
    srand((unsigned) time(&t));
    int randomInt = rand() % max;
    printf("Enter your guess:\n");
    scanf(" %s", guess);
    while(strcmp(guess, "q") != 0) {
        int bestGuess = atoi(guess);
        if(bestGuess == randomInt) {
            printf("Congratulations! You Win!\n");
            return;
        } else if(bestGuess < randomInt) {
            printf("Too low. ");
        } else if(bestGuess > randomInt) {
            printf("Too high. ");
        }
        printf("Enter your guess:\n");
        scanf(" %s", guess);
    }
}