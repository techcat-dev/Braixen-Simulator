 #include <stdio.h>
#include <stdlib.h>

int main () {
    int choice = 0;
    int dummy = 0;
    int charm = 0;
    system("clear");
    printf("_____________________________\n \n");
    printf("a Wild Braixen has appeared! (Braixen Simulator, Pre-Alpha 1.1) \n");
    while (dummy == 0) {
    printf("_____________________________\n \n");
    printf("Charm Level: %d", charm);
    printf("\n");
    printf("_____________________________\n");
    printf("\nWhat will you do?:");
    printf("\n \n1. Pet her");
    printf("\n \n2. Throw a rock at her");
    printf("\n \n3. Try to feed her\n \n");
    printf("4. Exit game\n");
    printf("_____________________________\n \n");
    scanf("%d", &choice);

    if (choice == 1) {
        system("clear");
        printf("_____________________________\n \n");
        printf("You've pet Braixen, she seems less mad now!\n");
    }

    else if (choice == 2) {
        system("clear");
        printf("_____________________________\n \n");
        printf("You tried throwing a rock at Braixen, but she avoided it! She's super mad now.\n");
        charm = 0;
    }

    else if (choice == 3) {
        system("clear");
        printf("_____________________________\n \n");
        printf("You threw a PokeBerry near Braixen, she took it and ate it!\n");
        charm++;
    }

    else if (choice == 4) {
        dummy = 1;
    }

    else {
        system("clear");
        printf("_____________________________\n \n");
        printf("Please choose a valid option!\n");
    }

    }


}