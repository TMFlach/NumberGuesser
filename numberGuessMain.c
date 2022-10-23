#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printMenu(int max);
void playGame(int max);
//create main function to handle menu
int main() {
    int selection = 0;
    while (selection != 3) {
        printMenu(10);
        selection = 3;
    }
}
//create function to display menu
void printMenu(int max) {
    printf("Press a number to select an option. Max number: %d\n", max);
    printf("1: Play number guesser.\n");
    printf("2: Change max number.\n");
    printf("3: quit");
}
//create function for starting the number guessing game.