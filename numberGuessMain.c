#include <stdio.h>
#include <stdlib.h>
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