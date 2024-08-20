#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

//THIS CODE IS MEANT TO BE COMPILED AND RUN ON MS-DOS ONLY. COMPILING AND RUNNING ON OTHER PLATFORMS IS POSSIBLE BUT UNSUPPORTED!

int firstlevel();
int secondlevel();
int clearit();
int version();
int prelude();
int waitint();
int thirdlevel();
int demonotice();

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
printf("Simulate the interesting adventure between a Human, and a Braixen! \n \n");

printf("1. Play Game \n");
printf("2. Exit Game \n \n");
printf("3. Continue at Second Level \n");
printf("4. Continue at Third Level \n");


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

if (userchoice == 4) {
    clearit();
    thirdlevel();
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
    char input[100];

clearit();
            printf("________________________________________________________________________________\n");
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
        printf("________________________________________________________________________________\n");
        printf("You lost all of your health, you blacked out!\n");
        printf("________________________________________________________________________________\n");
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
    printf("________________________________________________________________________________\n");
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
        printf("________________________________________________________________________________\n");
        printf("Braixen lost all of her health, she fainted!\n");
        printf("________________________________________________________________________________\n");
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
    printf("________________________________________________________________________________\n");
    printf("Current event: ");
    printf("a Wild Braixen has appeared!\n");
        }
        else {
        clearit();    
        version();        return 0;
        }
    }
    
    //MAIN MENU
    printf("________________________________________________________________________________\n");
    printf("Braixen's Stats: \n");
    printf("Braixen's Health: %d", braixenhealth);
    printf("\n \n");
    printf("Your Stats: \n");
    printf("Your Health: %d", userhealth);
    printf("\n");
    printf("Berries Left: %d", berries);
    printf("\n");

    printf("________________________________________________________________________________\n");


    printf("Trust Level: %d", charm);
    printf("\n");

    
    printf("________________________________________________________________________________\n");

    printf("What will you do?: \n");
    printf("\n1. Pet her");
    printf("\n2. Throw a rock at her");
    printf("\n3. Feed her");
    printf("\n4. Exit game\n");
    printf("________________________________________________________________________________\n");


    scanf("%s", input);
    choice = atoi(input);


    //PROCESSES USER CHOICES

    if (choice == 1) {
        clearit();       
         if (charm < 25) {
            printf("________________________________________________________________________________\n");
            printf("Current event: ");
            printf("You tried to pet the Braixen, but she bit you! \n");
            userhealth = userhealth - 10;
        }

        else if (charm >= 25) {
        printf("________________________________________________________________________________\n");
        printf("Current event: ");
        printf("You've pet the Braixen, she seems less mad now!\n");
        charm = charm + 10;

        if (charm == 100) {
            dummy = 1;            
        }
        }


    }

    else if (choice == 2) {
clearit();
        printf("________________________________________________________________________________\n");
        printf("Current event: ");
        printf("You threw a rock at the Braixen, it hit her head. how rude!\n");
        charm = 0;
        braixenhealth = braixenhealth - 10;
    }

    else if (choice == 3) {        
        if (berries > 0) {
clearit();
        printf("________________________________________________________________________________\n");
        printf("Current event: ");
        printf("You threw a wild PokeBerry near the Braixen, she ate it!\n");
        berries = berries - 1;
        charm = charm + 10;

        if (charm == 100) {
            dummy = 1;            
        }
        }

        else if (berries == 0) {
clearit();
        printf("________________________________________________________________________________\n");
        printf("Current event: ");
        printf("You're out of wild Pokeberries!\n");
        }


    }

    else if (choice == 4) {
        clearit();    
        version();    
        return 0;
    }

    else {
        clearit();
        printf("________________________________________________________________________________\n");
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
    char input[100];

    printf("________________________________________________________________________________\n");
    printf("You've successfully gained the trust of the wild Braixen! \n");

    while (dummy == 1) {




        //INT CHECKS

        if (userhealth == 0) {
        clearit();
        printf("________________________________________________________________________________\n");
        printf("You lost all of your health, you blacked out!\n");
        printf("________________________________________________________________________________\n");
        printf("Restart? \n \n");
        printf("1. Yes \n");
        printf("2. No (Exit Game)\n");
        scanf("%d", &exitq);
        if (exitq == 1) {
    
    
    clearit();
    printf("________________________________________________________________________________\n");
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



    
    //MAIN MENU

    printf("________________________________________________________________________________\n");
    printf("Braixen's Stats: \n");
    printf("Trust Level: 100");
    printf("\n");
    printf("Braixen's Health: %d", braixenhealth);
    printf("\n \n");
    printf("Your Stats: \n");
    printf("Your Health: %d", userhealth);
    printf("\n");
    printf("Berries Left: 0");
    printf("\n");

    printf("________________________________________________________________________________\n");


    printf("Friendship Level: %d", friendship);
    printf("\n");

    
    printf("________________________________________________________________________________\n");
    printf("What will you do next? \n \n");
    printf("1. Pet the Braixen \n");
    printf("2. Hug the Braixen \n");
    printf("3. Kiss the Braixen \n");
    printf("4. Exit game \n");
    printf("________________________________________________________________________________\n");


    scanf("%s", input);
    userchoice = atoi(input);

    if (userchoice == 1) {


        if (petsleft > 0) {
        clearit();
        printf("________________________________________________________________________________\n");
        printf("You've pet the Braixen, she enjoyed it! \n");
        petsleft = petsleft - 1;
        friendship = friendship + 10;
        }

        if (petsleft == 0) {
        clearit();
        printf("________________________________________________________________________________\n");
        printf("You tried to pet the Braixen, but she moved away! \n");
        }



    }

    else if (userchoice == 2) {

        if (friendship < 25) {
        clearit();
        printf("________________________________________________________________________________\n");
        printf("You tried to hug the Braixen, she avoided your hug! \n");


        }

        if (friendship >= 25) {
            clearit();
            printf("________________________________________________________________________________\n");
            printf("You hugged the Braixen, she's super happy now! \n");
            friendship = friendship + 20;
        }
    }

   else if (userchoice == 3) {
        clearit();
        printf("________________________________________________________________________________\n");
        printf("You tried to kiss the Braixen, but she hit you with her stick instead! \n");
        userhealth = userhealth - 10;
        petsleft = 8;

   }

   else if (userchoice == 4) {
    clearit();
    version();
    return 0;

    
   }

         else {
        clearit();
        printf("________________________________________________________________________________\n");
        printf("Current event: ");
        printf("Please choose a valid option!\n");

    } 


        if (friendship == 100) {
        dummy = 2;
    }





    }

    thirdlevel();

}


int thirdlevel () {
int response = 0;
char input[100];


clearit();

printf("Press Enter to go through dialogue. \n");
printf("________________________________________________________________________________\n");

printf("Braixen: Hmm, you don't seem as bad as all of the other\n");
printf("humans I've encountered.\n");
awaitenter();

awaitenter();
printf("You: Huh? Wait, you can talk?\n");
awaitenter();

printf("Braixen: Of course I can, human. Braixen's are very\n");
printf("intelligent Pokemon. Didn't you know that?\n \n");

printf("1. Yes, of course. \n");
printf("2. I didn't know that. \n");

scanf("%s", input);
response = atoi(input);

if (response == 1) {
awaitenter();
printf("\nBraixen: Hah! Of course you knew. You seem like the kind\n");
printf("of person that knows a lot about Pokemon!\n");
awaitenter();

printf("You: (Uhh, well... nevermind.)\n");
awaitenter();


printf("Braixen: Anyways, come closer to me. I have a favor to\n");
printf("ask of you.\n");
awaitenter();
}

else if (response == 2) {
awaitenter();
printf(" \nBraixen: Hmph! How rude! Approaching a Braixen and not\n");
printf("even knowing how intelligent it could be??\n");
awaitenter();

printf("Braixen: You're sure lucky I didn't smack you with my\n");
printf("stick the second you threw that rock at my head!\n");
awaitenter();

printf("You: Oh! Uh, I'm sorry. Please don't hit me!\n");
awaitenter();

printf("Braixen: Anyways, come closer to me. I have a favor to\n");
printf("ask of you.\n");
awaitenter(); 
}

else {
awaitenter();
printf(" \nBraixen: Hmph! How rude! Approaching a Braixen and not\n");
printf("even knowing how intelligent it could be??\n");
awaitenter();

printf("Braixen: You're sure lucky I didn't smack you with my\n");
printf("stick the second you threw that rock at my head!\n");
awaitenter();

printf("You: Oh! Uh, I'm sorry. Please don't hit me!\n");
awaitenter();

printf("Braixen: Anyways, come closer to me. I have a favor to\n");
printf("ask of you.\n");
awaitenter(); 
}

printf("(You slowly start walking towards the Braixen, afraid that\n");
printf("at any point it could hurt you.)\n");
awaitenter();

printf("Braixen: Hurry Up! I don't have all day!\n");
awaitenter();

printf("(You nearly stumble and fall on the ground after hearing\n");
printf("it yell. But you kept your balance.)\n");
awaitenter();

printf("Braixen: Now stop!\n");
awaitenter();

printf("(You stopped walking, and you glanced up at the Braixen.)\n");
awaitenter();

printf("You: Woah, you're even taller than I expected, *gulp*\n");
awaitenter();

printf("(The Braixen looks at you, clearly annoyed.)\n");
awaitenter();

printf("Braixen: Now, are you ready to hear what I have to say?\n");
awaitenter();

printf("You: Uhm, yeah?\n");
awaitenter();

printf("Braixen: How about this. Since you seem to be a good\n");
printf("enough Pokemon trainer, maybe I could tag along with you...?\n");
awaitenter();

printf("You: Wait, you want *me* to be your trainer? I haven't\n");
printf("really dealt with Pokemon like you before.\n");
awaitenter();

printf("Braixen: 'Pokemon like you before?' What the hell is that\n");
printf("supposed to mean?\n");
awaitenter();

printf("You: No! I didn't mean it like that it's just-\n");
awaitenter();

printf("(Braixen then charges at you, pushes you to the ground and\n");
printf("violently pins you down.)\n");
awaitenter();

printf("You: AHH!!! What are you doing? Get off me!!!\n");
awaitenter();

printf("(You start helplessly screaming and try to break free from\n");
printf("the Braixen's grasp, but to no avail.)\n");
awaitenter();

printf("(The Braixen then covers your mouth, and looks directly\n");
printf("into your terrified eyes)\n");
awaitenter();

printf("Braixen: Stop screaming! Geez, I wasn't even gonna hurt you.\n");
awaitenter();

printf("(You stop screaming as per the Braixen's request)\n");
awaitenter();

printf("Braixen: If I uncover your mouth, do you promise to not scream?\n");
awaitenter();

printf("(You nod slightly, indicating that you agree, they take their\n");
printf("hand off your mouth.)\n");
awaitenter();

printf("Braixen: Are you hurt at all?\n");
awaitenter();

printf("You: Yeah?! You literally threw me to the ground and pinned\n");
printf("me down over nothing! Why wouldn't I be hurt?\n");
awaitenter();

printf("Braixen: I see. I'm very sorry, human. I let my frustration\n");
printf("get ahead of me. I promise it won't happen again.\n");
awaitenter();

printf("You: It better not happen again.\n");
awaitenter();

printf("(The Braixen looks away slightly, obviously remorseful for\n");
printf("what they did.)\n");
awaitenter();

printf("Braixen: Can I still come along with you? I'm just really\n");
printf("lonely, and I wish for some companionship.\n");
awaitenter();

printf("You: I guess, I originally came into this forest to find a\n");
printf("Pokemon anyways and then go back home.\n");
awaitenter();

printf("Braixen: Perfect! Why don't you show me the way out of this\n");
printf("forest so I can go home with you!\n");
awaitenter();

printf("(The Braixen starts wagging its tail, eager to start its\n");
printf("new adventure with you.)\n");
awaitenter();

printf("You: About that...\n");
awaitenter();

printf("(The Braixen perks its ears up and looks at you.)\n");
awaitenter();

printf("You: Actually, I don't know the way back. I was lost before\n");
printf("I found you.\n");
awaitenter();

printf("Braixen: Oh my! Did you hit your head that hard?\n");
awaitenter();

printf("You: No, no, I'm fine. I'll just have to retrace my steps if\n");
printf("that's even possible at this point.\n");
awaitenter();

printf("Braixen: Don't worry human, I can sniff out where you were\n");
printf("walking and figure out where you began. I just have to do\n");
printf("one thing...\n");
awaitenter();

printf("You: And what's that 'one thing?'\n");
awaitenter();

printf("Braixen: I have to sniff you!\n");
awaitenter();

printf("You: What??\n");
awaitenter();

printf("Braixen: It's not weird, I promise! I need to do that to get\n");
printf("a good idea of what your scent is. then I can use that\n");
printf("information to trace where you were walking!\n");
awaitenter();

printf("You: Okay, go ahead and sniff me.... (This is SO weird).\n");
awaitenter();

printf("(The Braixen starts sniffing all over your body, you stand\n");
printf("there awkwardly while the Braixen sniffs you closely.)\n");
awaitenter();

printf("Braixen: Alright! I've got it. Follow me!\n");
awaitenter();

printf("(The Braixen stands up and starts sniffing the ground while\n");
printf("walking.)\n");
awaitenter();

printf("You: Alright!\n");
awaitenter();

printf("(You get up and start walking with the Braixen.)\n");
awaitenter();

demonotice();

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
    printf("\n(Braixen Simulator Beta 1.1 by TechCat-Dev on Github.)\n \n");
}

int demonotice () {
    clearit();
    printf("Thanks for playing Braixen Simulator! I hope you enjoyed it. \n");
    printf("Unfortunately, this is all that's been programmed as of now. \n");
    printf("Stay tuned to the Github Page of Braixen Simulator for newer releases! \n");
    printf("https://github.com/techcat-dev/Braixen-Simulator \n");
    version();
    return 0;
}
