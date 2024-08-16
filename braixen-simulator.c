#include <stdio.h>
#include <stdlib.h>

int main () {
    //FIRST BOOT INT
    int choice = 0;
    int dummy = 0;
    int charm = 0;
    int userhealth = 100;
    int berries = 5;
    int braixenhealth = 100;
    int exitq = 0;
        #ifdef _WIN32
            system("cls");
        #else
            system("clear");
        #endif
            printf("_____________________________\n \n");
    printf("Current event: ");
    printf("a Wild Braixen has appeared!\n");    
    //USER IS STUCK IN WHILE LOOP UNTIL DUMMY DOESNT EQUAL 0

    while (dummy == 0) {

    //INT CHECKS

    if (userhealth == 0) {
        #ifdef _WIN32
            system("cls");
        #else
            system("clear");
        #endif
        printf("_____________________________\n \n");
        printf("You lost all of your health, you blacked out!\n");
        printf("_____________________________\n \n");
        printf("Restart? \n \n");
        printf("1. Yes \n");
        printf("2. No (Exit Game)\n");
        scanf("%d", &exitq);
        if (exitq == 1) {
        choice = 0;
        dummy = 0;
        charm = 0;
        userhealth = 100;
        berries = 5;
        braixenhealth = 100;
        exitq = 0;
         #ifdef _WIN32
            system("cls");
        #else
            system("clear");
        #endif
        }
        else {
        return 0;
        }
    }


    if (braixenhealth == 0) {
        #ifdef _WIN32
            system("cls");
        #else
            system("clear");
        #endif        
        printf("_____________________________\n \n");
        printf("Braixen lost all of her health, she fainted!\n");
        printf("_____________________________\n \n");
        printf("Restart? \n \n");
        printf("1. Yes \n");
        printf("2. No (Exit Game)\n");
        scanf("%d", &exitq);
        if (exitq == 1) {
        choice = 0;
        dummy = 0;
        charm = 0;
        userhealth = 100;
        berries = 5;
        braixenhealth = 100;
        exitq = 0;
         #ifdef _WIN32
            system("cls");
        #else
            system("clear");
        #endif
        }
        else {
        return 0;
        }
    }
    
    //MAIN MENU
    printf("_____________________________\n");
    printf("\n(Braixen Simulator Pre-Alpha 2.1 by TechCat-Dev on Github.) \n \n");
    printf("Braixen's Stats: \n");
    printf("Charm Level: %d", charm);
    printf("\n");
    printf("Braixen's Health: %d", braixenhealth);
    printf("\n \n");
    printf("Your Stats: \n");
    printf("Your Health: %d", userhealth);
    printf("\n");
    printf("Berries Left: %d", berries);
    printf("\n");
    printf("_____________________________\n");
    printf("\nWhat will you do?:");
    printf("\n \n1. Pet her");
    printf("\n \n2. Throw a rock at her");
    printf("\n \n3. Try to feed her\n \n");
    printf("4. Exit game\n");
    printf("_____________________________\n \n");
    scanf("%d", &choice);

    //PROCESSES USER CHOICES

    if (choice == 1) {
        #ifdef _WIN32
            system("cls");
        #else
            system("clear");
        #endif       
         if (charm < 25) {
            printf("_____________________________\n \n");
            printf("Current event: ");
            printf("You tried to pet Braixen, but she bit you! \n");
            userhealth = userhealth - 10;
        }

        if (charm >= 25) {
        printf("_____________________________\n \n");
        printf("Current event: ");
        printf("You've pet Braixen, she seems less mad now!\n");
        charm++;
        }

    }

    else if (choice == 2) {
        #ifdef _WIN32
            system("cls");
        #else
            system("clear");
        #endif        
        printf("_____________________________\n \n");
        printf("Current event: ");
        printf("You threw a rock at Braixen, it hit her head! you made her cry.\n");
        charm = 0;
        braixenhealth = braixenhealth - 10;
    }

    else if (choice == 3) {        
        if (berries > 0) {
        #ifdef _WIN32
            system("cls");
        #else
            system("clear");
        #endif        
        printf("Current event: ");
        printf("_____________________________\n \n");
        printf("You threw a PokeBerry near Braixen, she took it and ate it!\n");
        berries = berries - 1;
        charm = charm + 5;
        }

        else if (berries == 0) {
        #ifdef _WIN32
            system("cls");
        #else
            system("clear");
        #endif        
        printf("_____________________________\n \n");
        printf("Current event: ");
        printf("You're out of berries!\n");
        }

    }

    else if (choice == 4) {
        dummy = 1;
    }

    else {
        #ifdef _WIN32
            system("cls");
        #else
            system("clear");
        #endif        
        printf("_____________________________\n \n");
        printf("Current event: ");
        printf("Please choose a valid option!\n");
    }

    }


}
