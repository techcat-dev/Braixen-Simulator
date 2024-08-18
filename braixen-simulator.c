#include <stdio.h>
#include <stdlib.h>

int firstlevel();
int secondlevel();
int clearit();
int version();
int prelude();
int waitint();

void awaitenter() {
    while (getchar() != '\n');
}



int main () {

int userchoice = 0;

clearit();

printf(" ______              __                                 \n");
printf("|   __ \\.----.---.-.|__|.--.--.-----.-----.             \n");
printf("|   __ <|   _|  _  ||  ||_   _|  -__|     |             \n");
printf("|______/|__| |___._||__||__.__|_____|__|__|             \n");
printf("                                                        \n");
printf(" _______ __                  __         __              \n");
printf("|     __|__|.--------.--.--.|  |.---.-.|  |_.-----.----.\n");
printf("|__     |  ||        |  |  ||  ||  _  ||   _|  _  |   _|\n");
printf("|_______|__||__|__|__|_____||__||___._||____|_____|__|  \n");
printf("                                                        \n \n");

printf("1. Play Game \n");
printf("2. Exit Game \n");
// printf("3. Goto Second Level (DEBUG!) \n");

version();

scanf("%d", &userchoice);

if (userchoice == 1) {
    prelude();
}

else if (userchoice == 2) {
clearit();    
version();      
  }

else if (userchoice == 3) {
clearit();    
secondlevel();
        }

else {
clearit();    
version();    
}


}


int prelude () {

clearit();

awaitenter();

printf("Game Plot:\n");
printf("You are a 20-something year old human. you've decided that you\n");
printf("want to go out and become a Pokemon Trainer. Without any\n");
printf("knowledge on how to do so, you take a hike to the nearest patch\n");
printf("of grass you can find, and start walking around aimlessly until\n");
printf("you can encounter a wild Pokemon.\n\n");
printf("Press Enter to continue \n");

awaitenter();

clearit();
printf("Unfortunately, you lost track of where you were wandering and\n");
printf("ended up deep in a forest, all by yourself. You look inside of\n");
printf("the backpack you brought with you for anything that could help\n");
printf("you escape the forest. After rummaging through your bag, you\n");
printf("find nothing that could help you escape this situation you're\n");
printf("in. you decide to try and backtrace your steps to get back\n");
printf("home. but this is when something very odd happened.\n\n");
printf("Press Enter to continue \n");


awaitenter();

clearit();
printf("You encounter a Pokemon! but this Pokemon is unlike anything\n");
printf("you've seen in the past. It has big yellow ears with long red\n");
printf("tufts in them, glowing red eyes like you've never seen before,\n");
printf("and a big bushy tail with a twig stuck in it. You're totally\n");
printf("allured by this Pokemon, and decide that now's your chance to\n");
printf("become the Pokemon trainer you've always wanted to be!\n\n");
printf("Press Enter to continue \n");


awaitenter();

clearit();
printf("You take a small rock off the ground, and chuck it at the\n");
printf("Pokemon to get its attention. The Pokemon then turns around and\n");
printf("faces you. It takes the twig out of its tail and points it in\n");
printf("your direction. You notice that the tip of the twig is now on\n");
printf("fire! Now's your chance!\n \n");
printf("--PRESS ENTER TO START THE GAME--\n");

awaitenter();


clearit();
firstlevel();

}






int firstlevel () {

    //FIRST BOOT INT
    int choice = 0;
    int dummy = 0;
    int charm = 0;
    int userhealth = 100;
    int berries = 5;
    int braixenhealth = 100;
    int exitq = 0;

clearit();
            printf("_____________________________\n \n");
    printf("Current event: ");
    printf("a Wild Braixen has appeared!\n");    
    //USER IS STUCK IN WHILE LOOP UNTIL DUMMY DOESNT EQUAL 0

    while (dummy == 0) {

    //INT CHECKS


        if (charm == 100) {
            dummy = 1;            
        }

    if (userhealth == 0) {
clearit();
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
clearit();
    printf("_____________________________\n \n");
    printf("Current event: ");
    printf("a Wild Braixen has appeared!\n");
        }
        else {
        clearit();    
        version();     
        return 0;
        }
    }


    if (braixenhealth == 0) {
clearit();
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
         clearit();
    printf("_____________________________\n \n");
    printf("Current event: ");
    printf("a Wild Braixen has appeared!\n");
        }
        else {
        clearit();    
        version();        return 0;
        }
    }
    
    //MAIN MENU
    printf("_____________________________\n \n");
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
    printf("\nWhat will you do?: \n");
    printf("\n1. Pet her");
    printf("\n2. Throw a rock at her");
    printf("\n3. Feed her");
    printf("\n4. Exit game\n");
    printf("_____________________________\n \n");
    scanf("%d", &choice);

    //PROCESSES USER CHOICES

    if (choice == 1) {
        clearit();       
         if (charm < 25) {
            printf("_____________________________\n \n");
            printf("Current event: ");
            printf("You tried to pet Braixen, but she bit you! \n");
            userhealth = userhealth - 10;
        }

        else if (charm >= 25) {
        printf("_____________________________\n \n");
        printf("Current event: ");
        printf("You've pet Braixen, she seems less mad now!\n");
        charm = charm + 10;

        if (charm == 100) {
            dummy = 1;            
        }
        }


    }

    else if (choice == 2) {
clearit();
        printf("_____________________________\n \n");
        printf("Current event: ");
        printf("You threw a rock at Braixen, it hit her head! you made her cry.\n");
        charm = 0;
        braixenhealth = braixenhealth - 10;
    }

    else if (choice == 3) {        
        if (berries > 0) {
clearit();
        printf("_____________________________\n \n");
        printf("Current event: ");
        printf("You threw a PokeBerry near Braixen, she took it and ate it!\n");
        berries = berries - 1;
        charm = charm + 10;

        if (charm == 100) {
            dummy = 1;            
        }
        }

        else if (berries == 0) {
clearit();
        printf("_____________________________\n \n");
        printf("Current event: ");
        printf("You're out of berries!\n");
        }


    }

    else if (choice == 4) {
        clearit();    
        version();    
        return 0;
    }

    else {
        clearit();
        printf("_____________________________\n \n");
        printf("Current event: ");
        printf("Please choose a valid option!\n");

    }

    }




clearit();
secondlevel();

}

int secondlevel () {

    int userchoice = 0;
    int userhealth = 100;
    int braixenhealth = 100;
    int friendship = 0;
    int dummy = 1;
    int petsleft = 8;
    int exitq = 0;

    printf("_____________________________\n \n");
    printf("You've successfully gained the trust of the wild Braixen! \n");

    while (dummy == 1) {

        //INT CHECKS

        if (userhealth == 0) {
        clearit();
        printf("_____________________________\n \n");
        printf("You lost all of your health, you blacked out!\n");
        printf("_____________________________\n \n");
        printf("Restart? \n \n");
        printf("1. Yes \n");
        printf("2. No (Exit Game)\n");
        scanf("%d", &exitq);
        if (exitq == 1) {
    clearit();
    printf("_____________________________\n \n");
    printf("You've successfully gained the trust of the wild Braixen! \n");
    userchoice = 0;
    userhealth = 100;
    braixenhealth = 100;
    friendship = 0;
    dummy = 1;
    petsleft = 8;

    }

    else {
    clearit();    
    version();     
    return 0;
 }

}

if (friendship >= 100) {
    clearit();
    printf("You've completed the Demo of Braixen Simulator! Congrats. \n");
    printf("Stay tuned to the Github Page of Braixen Simulator for new releases! \n");
    printf("https://github.com/techcat-dev/Braixen-Simulator \n");
    version();
    printf("1. Exit game \n \n");
    
    scanf("%d", &exitq);

    if (exitq == 1) {
        return 0;
    }

    else {
        return 0;
    }

}
    
    //MAIN MENU

    printf("_____________________________\n \n");
    printf("Braixen's Stats: \n");
    printf("Braixen's Health: %d", braixenhealth);
    printf("\n");
    printf("Friendship Level: %d", friendship);
    printf("\n \n");
    printf("Your Stats: \n");
    printf("Your Health: %d", userhealth);
    printf("\n");

    
    printf("_____________________________\n \n");
    printf("What will you do next? \n \n");
    printf("1. Pet the Braixen \n");
    printf("2. Hug the Braixen \n");
    printf("3. Kiss the Braixen \n");
    printf("4. Exit game \n");
    printf("_____________________________\n \n");


    scanf("%d", &userchoice);

    if (userchoice == 1) {


        if (petsleft > 0) {
        clearit();
        printf("_____________________________\n \n");
        printf("You've pet the Braixen, she enjoyed it! \n");
        petsleft = petsleft - 1;
        friendship = friendship + 10;
        }

        if (petsleft == 0) {
        clearit();
        printf("_____________________________\n \n");
        printf("You tried to pet the Braixen, but she moved away! \n");
        }



    }

    else if (userchoice == 2) {

        if (friendship < 25) {
        clearit();
        printf("_____________________________\n \n");
        printf("You tried to hug the Braixen, she avoided your hug! \n");
        }

        if (friendship >= 25) {
            clearit();
            printf("_____________________________\n \n");
            printf("You hugged the Braixen, she's super happy now! \n");
            friendship = friendship + 20;
        }
    }

   else if (userchoice == 3) {
        clearit();
        printf("_____________________________\n \n");
        printf("You tried to kiss the Braixen, but she hit you with her stick instead! \n");
        userhealth = userhealth - 10;
        petsleft = 8;

   }

   else if (userchoice == 4) {
    clearit();
    version();
    return 0;
   }



    }


}




int clearit () {
#ifdef _WIN32
    system("cls");
#elif defined(__MSDOS__) || defined(_DOS)
    system("cls");
#else
    system("clear");
#endif

}

int version () {
    printf("\n(Braixen Simulator Pre-Alpha 3.2 by TechCat-Dev on Github.) \n \n");
}
