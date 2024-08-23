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
int continuechoice = 0;

clearit();
printf(" --------------------------------------------------------------------\n");
printf("|  ______              __                                            |\n");
printf("| |   __ \\.----.---.-.|__|.--.--.-----.-----.                        |\n");
printf("| |   __ <|   _|  _  ||  ||_   _|  -__|     |                        |\n");
printf("| |______/|__| |___._||__||__.__|_____|__|__|                        |\n");
printf("|                                                                    |\n");
printf("|  _______ __                  __         __                         |\n");
printf("| |     __|__|.--------.--.--.|  |.---.-.|  |_.-----.----.           |\n");
printf("| |__     |  ||        |  |  ||  ||  _  ||   _|  _  |   _|           |\n");
printf("| |_______|__||__|__|__|_____||__||___._||____|_____|__|             |\n");
printf("|                                                                    |\n");
printf(" --------------------------------------------------------------------\n");
printf(" --------------------------------------------------------------------\n");
printf("|                                                                    |\n");
printf("| Simulate the interesting adventure between a Human, and a Braixen! |\n");
printf("|                                                                    |\n");
printf("| 1. Play Game                                                       |\n");
printf("| 2. Continue                                                        |\n");
printf("| 3. Exit Game                                                       |\n");
printf("|                                                                    |\n");
printf(" --------------------------------------------------------------------\n");

scanf("%d", &userchoice);

if (userchoice == 1) {
    prelude();
}

else if (userchoice == 2) {
clearit();   
printf(" ------------------------------------------------------- \n");
printf("|                                                       |\n");
printf("| Continue Menu:                                        |\n");
printf("|                                                       |\n");
printf("|-------------------------------------------------------|\n");
printf("| Introduction:                                         |\n");
printf("|                                                       |\n");
printf("| 1. First Level  2. Second Level                       |\n");
printf("|                                                       |\n");
printf("|-------------------------------------------------------|\n");
printf("| Chapters:                                             |\n");
printf("|                                                       |\n");
printf("| 3. First Chapter                                      |\n");
printf("|                                                       |\n");
printf("|-------------------------------------------------------|\n");
printf("| Options:                                              |\n");
printf("|                                                       |\n");
printf("| 6. Back to Main Menu                                  |\n");
printf("|                                                       |\n");
printf(" ------------------------------------------------------- \n");



scanf("%d", &continuechoice);

if (continuechoice == 1) {
    firstlevel();
}

else if (continuechoice == 2) {
    secondlevel();
}

else if (continuechoice == 3) {
    thirdlevel();
}

//else if (continuechoice == 4) {
//clearit();
//printf("Coming Soon!");
//return 0;

//}

//else if (continuechoice == 5) {
//clearit();
//printf("Coming Soon!");
//return 0;
//}

else if (continuechoice == 6) {
main();
}

else {
    return 0;
}



        }

else if (userchoice == 3) {
clearit();    
version();      
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
    printf("A wild Braixen has appeared!\n");    
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
    printf("A wild Braixen has appeared!\n");
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
        printf("Braixen lost all of their health, they fainted!\n");
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
    printf("A wild Braixen has appeared!\n");
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
    printf("1. Pet them\n");
    printf("2. Throw a rock at them\n");
    printf("3. Feed them\n");
    printf("4. Exit game\n");
    printf("________________________________________________________________________________\n");


    scanf("%s", input);
    choice = atoi(input);


    //PROCESSES USER CHOICES

    if (choice == 1) {
        clearit();       
         if (charm < 25) {

                    printf("________________________________________________________________________________\n");
            printf("You tried to pet the Braixen, but they bit you! \n");
            userhealth = userhealth - 10;
        }

        else if (charm >= 25) {
                printf("________________________________________________________________________________\n");
        printf("You've pet the Braixen, they seem less mad now!\n");
        charm = charm + 10;

        if (charm == 100) {
            dummy = 1;            
        }
        }


    }

    else if (choice == 2) {
clearit();
                printf("________________________________________________________________________________\n");
        printf("You threw a rock at the Braixen, it hit them head. how rude!\n");
        charm = 0;
        braixenhealth = braixenhealth - 10;
    }

    else if (choice == 3) {        
        if (berries > 0) {
clearit();
                printf("________________________________________________________________________________\n");
        printf("You threw a wild PokeBerry near the Braixen, they ate it!\n");
        berries = berries - 1;
        charm = charm + 10;

        if (charm == 100) {
            dummy = 1;            
        }
        }

        else if (berries == 0) {
clearit();
                printf("________________________________________________________________________________\n");
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
    clearit();
        printf("________________________________________________________________________________\n");
    printf("You've gained the trust of the wild Braixen! \n");

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
    printf("You've gained the trust of the wild Braixen! \n");
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
    printf("What will you do? \n");
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
        printf("You've pet the Braixen, they enjoyed it! \n");
        petsleft = petsleft - 1;
        friendship = friendship + 10;
        }

        if (petsleft == 0) {
        clearit();
        printf("________________________________________________________________________________\n");
        printf("You tried to pet the Braixen, but they moved away! \n");
        }



    }

    else if (userchoice == 2) {

        if (friendship < 25) {
        clearit();
        printf("________________________________________________________________________________\n");
        printf("You tried to hug the Braixen, they avoided your hug! \n");


        }

        if (friendship >= 25) {
            clearit();
            printf("________________________________________________________________________________\n");
            printf("You hugged the Braixen, they're super happy now! \n");
            friendship = friendship + 20;
        }
    }

   else if (userchoice == 3) {
        clearit();
        printf("________________________________________________________________________________\n");
        printf("You tried to kiss the Braixen, but they hit you with their stick instead! \n");
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
int choice = 0;
char input[100];


clearit();

printf("Press Enter to go through dialogue.\n");
printf("________________________________________________________________________________\n");
awaitenter();

printf("Braixen: Hmm, you don't seem as bad as all of the other humans I've\n");
printf("encountered.\n");
awaitenter();

printf("You: Huh? Wait, you can talk?\n");
awaitenter();

printf("Braixen: Of course I can, human. Braixen's are very intelligent\n");
printf("Pokemon. Didn't you know that?\n");
awaitenter();

printf("1. Yes, of course.\n");
printf("2. I didn't know that.\n");
awaitenter();

scanf("%s", input);
response = atoi(input);

if (response == 1) {
    awaitenter();
    printf("Braixen: Hah! Of course you knew. You seem like the kind of\n");
    printf("person that knows a lot about Pokemon!\n");
    awaitenter();

    printf("You: (Uhh, well... nevermind.)\n");
    awaitenter();

    printf("Braixen: Anyways, come closer to me. I have a favor to ask of you.\n");
    awaitenter();
}

else if (response == 2) {
    awaitenter();
    printf("Braixen: Hmph! How rude! Approaching a Braixen and not even knowing\n");
    printf("how intelligent it could be??\n");
    awaitenter();

    printf("Braixen: You're sure lucky I didn't smack you with my stick the\n");
    printf("second you threw that rock at my head!\n");
    awaitenter();

    printf("You: Oh! Uh, I'm sorry. Please don't hit me!\n");
    awaitenter();

    printf("Braixen: Anyways, come closer to me. I have a favor to ask of you.\n");
    awaitenter();
}

else {
    awaitenter();
    printf("Braixen: Hmph! How rude! Approaching a Braixen and not even knowing\n");
    printf("how intelligent it could be??\n");
    awaitenter();

    printf("Braixen: You're sure lucky I didn't smack you with my stick the\n");
    printf("second you threw that rock at my head!\n");
    awaitenter();

    printf("You: Oh! Uh, I'm sorry. Please don't hit me!\n");
    awaitenter();

    printf("Braixen: Anyways, come closer to me. I have a favor to ask of you.\n");
    awaitenter();
}

printf("(You slowly start walking towards the Braixen, afraid that at any\n");
printf("point it could hurt you.)\n");
awaitenter();

printf("Braixen: Hurry Up! I don't have all day!\n");
awaitenter();

printf("(You nearly stumble and fall on the ground after hearing it yell.\n");
printf("But you kept your balance.)\n");
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

printf("Braixen: How about this. Since you seem to be a good enough Pokemon\n");
printf("trainer, maybe I could tag along with you...?\n");
awaitenter();

printf("You: Wait, you want *me* to be your trainer? I haven't really dealt\n");
printf("with Pokemon like you before.\n");
awaitenter();

printf("Braixen: 'Pokemon like you before?' What the hell is that supposed\n");
printf("to mean?\n");
awaitenter();

printf("You: No! I didn't mean it like that it's just-\n");
awaitenter();

printf("(Braixen then charges at you, pushes you to the ground and violently\n");
printf("pins you down.)\n");
awaitenter();

printf("You: AHH!!! What are you doing? Get off me!!!\n");
awaitenter();

printf("(You start helplessly screaming and try to break free from the Braixen's\n");
printf("grasp, but to no avail.)\n");
awaitenter();

printf("(The Braixen then covers your mouth, and looks directly into your terrified\n");
printf("eyes)\n");
awaitenter();

printf("Braixen: Stop screaming! Geez, I wasn't even gonna hurt you.\n");
awaitenter();

printf("(You stop screaming as per the Braixen's request)\n");
awaitenter();

printf("Braixen: If I uncover your mouth, do you promise to not scream?\n");
awaitenter();

printf("(You nod slightly, indicating that you agree. They take their hand off\n");
printf("your mouth.)\n");
awaitenter();

printf("Braixen: Are you hurt at all?\n");
awaitenter();

printf("You: Yeah?! You literally threw me to the ground and pinned me down\n");
printf("over nothing! Why wouldn't I be hurt?\n");
awaitenter();

printf("Braixen: I see. I'm very sorry, human. I let my frustration get ahead\n");
printf("of me. I promise it won't happen again.\n");
awaitenter();

printf("You: It better not happen again.\n");
awaitenter();

printf("(The Braixen looks away slightly, obviously remorseful for what they did.)\n");
awaitenter();

printf("Braixen: Can I still come along with you? I'm just really lonely, and\n");
printf("I wish for some companionship.\n");
awaitenter();

printf("You: I guess, I originally came into this forest to find a Pokemon anyways\n");
printf("and then go back home.\n");
awaitenter();

printf("Braixen: Perfect! Why don't you show me the way out of this forest so I\n");
printf("can go home with you!\n");
awaitenter();

printf("(The Braixen starts wagging its tail, eager to start its new adventure\n");
printf("with you.)\n");
awaitenter();

printf("You: About that...\n");
awaitenter();

printf("(The Braixen perks its ears up and looks at you.)\n");
awaitenter();

printf("You: Actually, I don't know the way back. I was lost before I found you.\n");
awaitenter();

printf("Braixen: Oh my! Did you hit your head that hard?\n");
awaitenter();

printf("You: No, no, I'm fine. I'll just have to retrace my steps if that's even\n");
printf("possible at this point.\n");
awaitenter();

printf("Braixen: Don't worry human, I can sniff out where you were walking and\n");
printf("figure out where you began. I just have to do one thing...\n");
awaitenter();

printf("You: And what's that 'one thing?'\n");
awaitenter();

printf("Braixen: I have to sniff you!\n");
awaitenter();

printf("You: What??\n");
awaitenter();

printf("Braixen: It's not weird, I promise! I need to do that to get a good idea\n");
printf("of what your scent is. Then I can use that information to trace where you\n");
printf("were walking!\n");
awaitenter();

printf("You: Okay, go ahead and sniff me.... (This is SO weird).\n");
awaitenter();

printf("(The Braixen starts sniffing all over your body, you stand there awkwardly\n");
printf("while the Braixen sniffs you closely.)\n");
awaitenter();

printf("Braixen: Alright! I've got it. Follow me!\n");
awaitenter();

printf("(The Braixen stands up and starts sniffing the ground while walking.)\n");
awaitenter();

printf("You: Alright!\n");
awaitenter();

printf("(You get up and start walking with the Braixen.)\n");
awaitenter();

//NEEEEEWWWWWW

printf("(The Braixen is now walking down the forest path, sniffing the ground as it ");
printf("tries to follow your scent trail.)\n");
awaitenter();

printf("(A few hours have passed at this point. you're seriously starting to doubt ");
printf("that the Braixen actually knows where they're going, or if you'll actually ");
printf("get out of this forest anytime soon.)\n");
awaitenter();

printf("You: Hey, uh.. Braixen?\n");
awaitenter();

printf("(The Braixen ignores you and keeps walking)\n");
awaitenter();

printf("You: Braixen??\n");
awaitenter();

printf("(You got no response from them...)\n");
awaitenter();

printf("You: BRAIXEN!\n");
awaitenter();

printf("(The Braixen then turns around and faces you, obviously very frustrated and ");
printf("tired)\n");
awaitenter();

printf("You: Are you sure you know where the exit of the forest is? We've been walking ");
printf("for hours and it's getting pretty dark now, don't ya think?\n");
awaitenter();

printf("(The Braixen turns their head away from you. They walk over to a tree, sit down, ");
printf("and start leaning against it.)\n");
awaitenter();

printf("(You walk over to the Braixen, concerned that something might be wrong.)\n");
awaitenter();

printf("You: Hey, what's wrong?\n");
awaitenter();

printf("(The Braixen is still refusing to say a word to you.)\n");
awaitenter();

printf("You: *sigh* What should we do now, Braixen?\n");
awaitenter();

printf("Braixen: Uhm... I-I don't know.\n");
awaitenter();

printf("(You start to notice that the Braixen's voice is getting very shaky, they sound ");
printf("really distressed.)\n");
awaitenter();

printf("You: You don't know the way out, don't you?\n");
awaitenter();

printf("Braixen: *sniffle*\n");
awaitenter();

printf("You: You said that you could find the way out based on my scent though?\n");
awaitenter();

printf("Braixen: I could! B-But... I lost the trail a while ago. I just didn't want to ");
printf("admit it!!\n");
awaitenter();

printf("You: Oh great, so now we're in the middle of nowhere now. Are you serious??\n");
awaitenter();

printf("(The Braixen starts crying.)\n");
awaitenter();

printf("You: *sigh* Oh my god...\n");
awaitenter();

printf("Braixen: I-i'm sorry! *sobbing*\n");
awaitenter();

printf("(You try to comfort the Braixen by petting its head, but to no avail.)\n");
awaitenter();

printf("(You decide that enough is enough, and you get up and start walking by yourself. ");
printf("The Braixen notices this and perks their head up.)\n");
awaitenter();

printf("Braixen: W-Wait, Where are you going?\n");
awaitenter();

printf("You: I'm going to find the way out of this forest myself.\n");
awaitenter();

printf("Braixen: You don't want my help anymore...?\n");
awaitenter();

printf("You: No! I don't want your help anymore. Look where you got me! I'm all lost now ");
printf("thanks to you. I'm leaving now, don't even bother following me.\n");
awaitenter();

printf("(You start walking in a straight path, hoping to find any sign of civilization so ");
printf("you can get back home. But not long after, you notice someone trailing behind you. ");
printf("You turn around and it's the Braixen.)\n");
awaitenter();

printf("Braixen: P-Please-\n");
awaitenter();

printf("You: No, stop following me.\n");
awaitenter();

printf("(You turn around and keep walking.)\n");
awaitenter();

printf("(After another hour of walking by yourself, you still haven't found any signs ");
printf("of civilization. You decide to find somewhere to rest and you'll wait until the ");
printf("morning to continue walking.)\n");
awaitenter();

printf("(You find a pile of leaves to rest your head on. It's not the best. But it'll do ");
printf("for now. You close your eyes and doze off to sleep.)\n");
awaitenter();

printf("(Night time passes, and you are waken up by a familiar creature.)");

printf("Braixen: Good Morning, Human!!\n");
awaitenter();

printf("You: AH! What the hell?\n");
awaitenter();

printf("(You're super surprised by the Braixen's sudden presence)\n");
awaitenter();

printf("Braixen: Hehe~ I scared you!\n");
awaitenter();

printf("You: You sure did... and I told you to stop following me. Why are you here?\n");
awaitenter();

printf("Braixen: I was protecting you while you slept. There were a bunch of Pokemon in ");
printf("this forest that totally wanted to eat you!\n");
awaitenter();

printf("You: Well thanks, I guess.\n");
awaitenter();

printf("Braixen: I have something exciting to tell you~\n");
awaitenter();

printf("You: And what is that?\n");
awaitenter();

printf("Braixen: I may have found a way out of the forest!\n");
awaitenter();

printf("You: Yeah, sure. I totally believe you.\n");
awaitenter();

printf("Braixen: No! I'm serious. I climbed a very tall tree before I woke you up and ");
printf("looked around for a bit. I may have found a town we can travel to!\n");
awaitenter();

printf("You: Can I trust you this time? You kinda sent us in the wrong direction last time.\n");
awaitenter();

printf("Braixen: Yep! You can totally trust me this time.\n");
awaitenter();

printf("You: Alright then, I just have one question... Why are you helping me?\n");
awaitenter();

printf("Braixen: Ehh??\n");
awaitenter();

printf("You: No no, of course I appreciate your help. But, I just kind of find it strange ");
printf("that a wild Pokemon is so willing to help some random person like me.\n");
awaitenter();

printf("Braixen: Uhm...\n");
awaitenter();

printf("(The Braixen nervously looks at the ground)\n");
awaitenter();

printf("Braixen: It's because I want you to be my trainer. My previous trainer had abandoned ");
printf("me a while ago.\n");
awaitenter();

printf("You: Oh, why did he abandon you?\n");
awaitenter();

printf("Braixen: He Just... Didn't like me, at all.\n");
awaitenter();

printf("Braixen: My old trainer would constantly berate me all the time because I wasn't up ");
printf("to his standards.\n");
awaitenter();

printf("Braixen: He would always make me fight overpowered Pokemon that I couldn't even dream ");
printf("of beating, he compared me negatively to other Pokemon, I just felt utterly useless ");
printf("to him. Eventually he just picked me up, led me to this forest, and abandoned me here.\n");
awaitenter();

printf("You: Oh my god that sounds awful. I'm sorry you had to go through that. I kinda feel ");
printf("bad now for being mean to you yesterday.\n");
awaitenter();

printf("Braixen: It's fine, I'm used to it anyways.\n");
awaitenter();

printf("You: But when we first met, why did you attack me?\n");
awaitenter();

printf("Braixen: Oh, uhm. I'm not really sure. It's almost like someone took over my mind ");
printf("when that happened. Does your head still hurt?\n");
awaitenter();

printf("You: No, It's doing fine now. I don't think I even hit it that hard. It might have just ");
printf("been the shock of being attacked.\n");
awaitenter();

printf("Braixen: Good! Anyways, do you want me to lead you out of this forest?\n");
awaitenter();

printf("You: Sure thing!\n");
awaitenter();

printf("(The Braixen perks up and smiles at you.)\n");
awaitenter();

printf("Braixen: Follow me~!\n");
awaitenter();

printf("(The Braixen starts running off.)\n");
awaitenter();

printf("You: H-Hey! Wait up!\n");
awaitenter();

printf("(You start running after the Braixen to see where they will bring you)\n");
awaitenter();

printf("Braixen: Okay. so if I'm right, we'll go this direction and then end up in a town!...\n");
awaitenter();

printf("(The Braixen points in the direction they want to go in.)\n");
awaitenter();

printf("Braixen: ...And maybe we can ask the locals for directions back to where you live!\n");
awaitenter();

printf("You: Seems like a good idea, you're really smart!\n");
awaitenter();

printf("Braixen: You mean it?\n");
awaitenter();

printf("You: Of course I do, I would never think to climb a tree to find a town. I can't even ");
printf("climb a tree anyways.\n");
awaitenter();

printf("Braixen: Kyu Kyu!\n");
awaitenter();

printf("(The Braixen is smiling at you.)\n");
awaitenter();

printf("Braixen: Now, follow me!!\n");
awaitenter();

printf("(The Braixen runs off excited to find the town she scoped out, and you follow them.)\n");
awaitenter();

printf("(After walking for another hour, you finally find the exit to the forest. You're now ");
printf("at the entrance of an unfamiliar town.)\n");
awaitenter();

printf("Braixen: See! I told you I knew where I was going!\n");
awaitenter();

printf("You: Good job Braixen! Now let's find someone to ask for directions.\n");
awaitenter();

printf("(The Braixen starts excitedly wagging its tail.)\n");
awaitenter();

printf("You: Well, I see a PokeMart over there. Maybe we should get some supplies first.\n");
awaitenter();

printf("Braixen: Like what?\n");
awaitenter();

printf("You: Well, I'm kind of hungry. Maybe there's a cafe there.\n");
awaitenter();

printf("Braixen: I'm hungry too. Can you get me something too?\n");
awaitenter();

printf("You: Yeah, maybe. I have to check if I have enough PokeDollars though.\n");
awaitenter();

printf("(You rummage through your bag and find around 1,000 PokeDollars in it.)\n");
awaitenter();

printf("You: Good news!\n");
awaitenter();

printf("(The Braixen perks its ears up)\n");
awaitenter();

printf("You: We have enough money for a few things. Let's go in!\n");
awaitenter();

printf("(You and Braixen wander into the PokeMart, it looks just like the one in your town. ");
printf("You feel at home already!)\n");
awaitenter();

printf("You: Okay, where should we start? Supplies, or food?\n");
awaitenter();

printf("(The Braixen slightly tugs on your shirt and points to the supplies section.)\n");
awaitenter();

printf("You: Alright, supplies it is.\n");
awaitenter();

printf("(You head over to the supplies section and look at the many things on the shelves.)\n");
awaitenter();

printf("You: Hmm... What should I get? Potions... Escape Ropes... So many choices.\n");
awaitenter();

printf("You: Hey Braixen?\n");
awaitenter();

printf("(The Braixen isn't by your side anymore.)\n");
awaitenter();

printf("You: Braixen??\n");
awaitenter();

printf("(You turn around and see the Braixen looking at the PokeBall section. You walk over ");
printf("to them to see what they are doing.)\n");
awaitenter();

printf("You: Looking at PokeBalls, huh?\n");
awaitenter();

printf("(The Braixen silently puts a shiny red Pokeball in your hand and looks at you pleadingly.)\n");
awaitenter();

printf("You: Huh? Do you want this?\n");
awaitenter();

printf("Braixen: (silently) Yeah.\n");
awaitenter();

printf("You: Okay, let's bring this to the cashier so I can pay for it.\n");
awaitenter();

printf("(You go up to the cashier and place the PokeBall on the counter.)\n");
awaitenter();

printf("Cashier: That'll be 500 PokeDollars please!\n");
awaitenter();

printf("(You place 500 PokeDollars on the counter.)\n");
awaitenter();

printf("Cashier: Have a nice day!\n");
awaitenter();

printf("(After paying for the PokeBall, you go over to the cafe, take a seat, and look at ");
printf("the menu.)\n");
awaitenter();

printf("You: Oh no, we don't have enough money to get something for the both of us.\n");
awaitenter();

printf("(The Braixen looks down at the ground, disappointed.)\n");
awaitenter();

printf("You: I'll just get something for you then, what do you want?\n");
awaitenter();

printf("(Braixen's ears perk up)\n");
awaitenter();

printf("Braixen: Wait, really?\n");
awaitenter();

printf("You: Yeah! I'm sure I can go a little longer without anything.\n");
awaitenter();

printf("Braixen: Tell them I want the omelet!\n");
awaitenter();

printf("You: Okay. Stay here.\n");
awaitenter();

printf("(You leave the table you were sitting at and go to the front to make the order. After ");
printf("making the order, you sit back down at your table.)\n");
awaitenter();

printf("(After a few minutes, you hear one of the workers call out that your order is ready. ");
printf("You get up and grab the fresh omelet.)\n");
awaitenter();

printf("You: Here you go, Braixen!\n");
awaitenter();

printf("(You hand over the omelet to the Braixen, and they silently eat it.)\n");
awaitenter();

printf("You: You've been pretty silent, Braixen. Are you alright?\n");
awaitenter();

printf("(The Braixen's eyes start watering up, and a single tear starts to roll down their eye.)\n");
awaitenter();

printf("You: Oh no, wait here. I'll get a to go box so we can leave. Try and keep it together ");
printf("for me, alright?\n");
awaitenter();

printf("(You pick up a napkin and wipe the tears off their eyes.)\n");
awaitenter();

printf("(You then walk over to the front of the cafe, and ask the worker for a to go box.)\n");
awaitenter();

printf("Worker: Here's your to go box. Oh, and by the way, is that your Pokemon over there? ");
printf("They don't look too good. Are they doing alright?\n\n");

printf("1. Yeah. they're just having a bad day, that's all.\n");
printf("2. I think they're about to cry, I don't know what's wrong.\n");


scanf("%s", input);
choice = atoi(input);

if (choice == 1) {
awaitenter();
printf("Worker: Ah, I see. Here's your to go box. have a good rest of your day!\n");
awaitenter();
}

else if (choice == 2) {
awaitenter();
printf("Worker: Oh no, that's not good! Here, take this free PokePuff too. This should cheer them up. ");
printf("I hope their day gets better.\n");
awaitenter();
}

else {
awaitenter();
printf("Ah, I see. Here's your to go box. have a good rest of your day!\n");
awaitenter();
}


printf("(You walk over to your table and put the half eaten omelet in the box.)\n");
awaitenter();

printf("You: Okay Braixen, we can go now.\n");
awaitenter();

printf("(The Braixen stands up and follows you out the door of the PokeMart.)\n");
awaitenter();


demonotice();

}


int clearit () {
    system("cls");
}

int version () {
    printf("\nThanks for playing! (Braixen Simulator Beta 1.4 by TechCat-Dev on Github.)\n");
}

int demonotice () {
    clearit();
    printf("Thanks for playing Chapter 1 of Braixen Simulator! I hope you enjoyed it.\n");
    printf("Unfortunately, this is all that's been written as of now.\n");
    printf("Stay tuned to the Github Page of Braixen Simulator for newer releases!\n");
    printf("https://github.com/techcat-dev/Braixen-Simulator\n");
    version();
    return 0;
}
