#include <stdio.h>
#include <stdlib.h>

int main () {
    int choice = 0;
    int dummy = 0;
    system("clear");
    printf("a Wild Braixen has appeared! (Braixen Simulator, Pre-release Alpha 1.0) \n");
    while (dummy == 0) {
    printf("\nWhat will you do?:");
    printf("\n \n1. Pet her");
    printf("\n \n2. Throw a rock at her");
    printf("\n \n3. Try to feed her\n \n");
    printf("4. Exit Game\n \n");
    scanf("%d", &choice);

    if (choice == 1) {
        system("clear");
        printf("You've pet Braixen, she seems less mad now!\n");
    }

    else if (choice == 2) {
        system("clear");
        printf("You tried throwing a rock at Braixen, but she avoided it!\n");
    }

    else if (choice == 3) {
        system("clear");
        printf("You tried feeding Braixen a PokeBerry, but she bit your hand instead!\n");
    }

    else if (choice == 4) {
        dummy = 1;
    }

    else {
        system("clear");
        printf("Please choose a valid option!");
    }

    }


}