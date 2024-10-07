#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void awaitenter() {
    while (getchar() != '\n');
}

void clearit() {
system("cls");
}

void version () {
    printf("Thanks for playing!\n\n");
    printf("(Braixen Simulator Pre-Release 2.0.0 by TechCat-Dev on Github.)\n");
}

void demonotice () {
    printf("Thanks for completing the Pre-Release version of Braixen Simulator!\n");
    printf("Say tuned to the Braixen Simulator Github page for the latest releases.\n");
}

void printframe1() {
    system("cls");
    printf("|\\       /\\    /      /\\   /\\      \\     /\\      /|                           |\n");
    printf("| |     | |   | /----/ \\\\_// \\----\\ |   | |     | |                           |\n");
    printf("| |     | |   | \\---/  _\\ /_  \\---/ |   | |     | |                           |\n");
    printf("| |     | |   |    _\\  O _ O  /_    |   | |     | |                           |\n");
    printf("| |     | |   |    \\_____w_____/    |   | |     | |                           |\n");
    printf("| |     | |   |   / ____| |____ \\   |   | |     | |                           |\n");
    printf("| |     | |   |  / / /\\/\\/\\/\\\\ \\ \\  |   | |     | |                           |\n");
    printf("| |     | |   | /  | |/     \\| |  \\ |   | |     | |                           |\n");
    printf("| |     | |   |/   | |\\     /| |   \\|   | |     | |                           |\n");
    printf("| |     | |   /    | | \\   / | |    \\   | |     | |                           |\n");
    printf("| |     | |  /     | | /   \\ | |    _\\_ | |     | |                           |\n");
    printf("| |     | | /     /  |/     \\|  \\  /    \\ |     | |                           |\n");
    printf("| |     | |/      \\__/\\\\/\\/\\/\\__/_/\\/\\/\\/ |     | |                           |\n");
    printf("| |     | /          |  | |  |         /\\ |     | |                           |\n");
    printf("| |     |/           |  | |  |\\_______/  \\|     | |                           |\n");
    printf("| |     /            |  | |  |            \\     | |                           |\n");
    printf("| |    /             |  | |  |             \\    | |___________________________|\n");
    printf("| |   /              |  | |  |              \\   | |                           |\n");
    printf("| |  /               /  | |  \\               \\  | |     Braixen Simulator     |\n");
    printf("|   /                \\__/ \\__/                \\   |     (C) TechCat           |\n");
    printf("|__/___________________________________________\\__|___________________________|\n");
}

void printframe2() {
    
    printf("|\\       /\\    /      /\\   /\\      \\     /\\      /|                           |\n");
    printf("| |     | |   | /----/ \\\\_// \\----\\ |   | |     | |                           |\n");
    printf("| |     | |   | \\---/  \\\\ //  \\---/ |   | |     | |                           |\n");
    printf("| |     | |   |    _\\  O _ O  /_    |   | |     | |                           |\n");
    printf("| |     | |   |    \\_____w_____/    |   | |     | |                           |\n");
    printf("| |     | |   |   / ____| |____ \\   |   | |     | |                           |\n");
    printf("| |     | |   |  / / /\\/\\/\\/\\\\ \\ \\  |   | |     | |                           |\n");
    printf("| |     | |   | /  | |/     \\| |  \\ |   | |     | |                           |\n");
    printf("| |     | |   |/   | |\\     /| |   \\|   | |     | |       A wild Braixen      |\n");
    printf("| |     | |   /    | | \\   / | |    \\   | |     | |       has appeared!       |\n");
    printf("| |     | |  /     | | /   \\ | |    _\\_ | |     | |                           |\n");
    printf("| |     | | /     /  |/     \\|  \\  /    \\ |     | |                           |\n");
    printf("| |     | |/      \\__/\\\\/\\/\\/\\__/_/\\/\\/\\/ |     | |                           |\n");
    printf("| |     | /          |  | |  |         /\\ |     | |                           |\n");
    printf("| |     |/           |  | |  |\\_______/  \\|     | |                           |\n");
    printf("| |     /            |  | |  |            \\     | |                           |\n");
    printf("| |    /             |  | |  |             \\    | |___________________________|\n");
    printf("| |   /              |  | |  |              \\   | |                           |\n");
    printf("| |  /               /  | |  \\               \\  | |     Braixen Simulator     |\n");
    printf("|   /                \\__/ \\__/                \\   |     (C) TechCat           |\n");
    printf("|__/___________________________________________\\__|___________________________|\n");
}



void printframe3() {
    system("cls");
    printf("|\\       /\\    /      /\\   /\\      \\     /\\      /|                           |\n");
    printf("| |     | |   | /----/ \\\\_// \\----\\ |   | |     | |                           |\n");
    printf("| |     | |   | \\---/  _\\ /_  \\---/ |   | |     | |                           |\n");
    printf("| |     | |   |    _\\  T _ T  /_    |   | |     | |                           |\n");
    printf("| |     | |   |    \\_____w_____/    |   | |     | |                           |\n");
    printf("| |     | |   |   / ____| |____ \\   |   | |     | |                           |\n");
    printf("| |     | |   |  / / /\\/\\/\\/\\\\ \\ \\  |   | |     | |                           |\n");
    printf("| |     | |   | /  | |/     \\| |  \\ |   | |     | |                           |\n");
    printf("| |     | |   |/   | |\\     /| |   \\|   | |     | |                           |\n");
    printf("| |     | |   /    | | \\   / | |    \\   | |     | |                           |\n");
    printf("| |     | |  /     | | /   \\ | |    _\\_ | |     | |                           |\n");
    printf("| |     | | /     /  |/     \\|  \\  /    \\ |     | |                           |\n");
    printf("| |     | |/      \\__/\\\\/\\/\\/\\__/_/\\/\\/\\/ |     | |                           |\n");
    printf("| |     | /          |  | |  |         /\\ |     | |                           |\n");
    printf("| |     |/           |  | |  |\\_______/  \\|     | |                           |\n");
    printf("| |     /            |  | |  |            \\     | |                           |\n");
    printf("| |    /             |  | |  |             \\    | |___________________________|\n");
    printf("| |   /              |  | |  |              \\   | |                           |\n");
    printf("| |  /               /  | |  \\               \\  | |     Braixen Simulator     |\n");
    printf("|   /                \\__/ \\__/                \\   |     (C) TechCat           |\n");
    printf("|__/___________________________________________\\__|___________________________|\n");
}

void printframe4() {
    system("cls");
    printf("|\\       /\\    /      /\\   /\\      \\     /\\      /|                           |\n");
    printf("| |     | |   | /----/ \\\\_// \\----\\ |   | |     | |                           |\n");
    printf("| |     | |   | \\---/  \\\\ //  \\---/ |   | |     | |                           |\n");
    printf("| |     | |   |    _\\  O _ O  /_    |   | |     | |                           |\n");
    printf("| |     | |   |    \\_____w_____/    |   | |     | |                           |\n");
    printf("| |     | |   |   / ____| |____ \\   |   | |     | |                           |\n");
    printf("| |     | |   |  / / /\\/\\/\\/\\\\ \\ \\  |   | |     | |                           |\n");
    printf("| |     | |   | /  | |/     \\| |  \\ |   | |     | |                           |\n");
    printf("| |     | |   |/   | |\\     /| |   \\|   | |     | |                           |\n");
    printf("| |     | |   /    | | \\   / | |    \\   | |     | |                           |\n");
    printf("| |     | |  /     | | /   \\ | |    _\\_ | |     | |                           |\n");
    printf("| |     | | /     /  |/     \\|  \\  /    \\ |     | |                           |\n");
    printf("| |     | |/      \\__/\\\\/\\/\\/\\__/_/\\/\\/\\/ |     | |                           |\n");
    printf("| |     | /          |  | |  |         /\\ |     | |                           |\n");
    printf("| |     |/           |  | |  |\\_______/  \\|     | |                           |\n");
    printf("| |     /            |  | |  |            \\     | |                           |\n");
    printf("| |    /             |  | |  |             \\    | |___________________________|\n");
    printf("| |   /              |  | |  |              \\   | |                           |\n");
    printf("| |  /               /  | |  \\               \\  | |     Braixen Simulator     |\n");
    printf("|   /                \\__/ \\__/                \\   |     (C) TechCat           |\n");
    printf("|__/___________________________________________\\__|___________________________|\n");
}

void printframe5() {
    system("cls");
    printf("|\\       /\\    /       /   \\       \\     /\\      /|                           |\n");
    printf("| |     | |   |       /     \\       |   | |     | |                           |\n");
    printf("| |     | |   |      /       \\      |   | |     | |                           |\n");
    printf("| |     | |   |     /         \\     |   | |     | |                           |\n");
    printf("| |     | |   |    /           \\    |   | |     | |                           |\n");
    printf("| |     | |   |   /             \\   |   | |     | |                           |\n");
    printf("| |     | |   |  /               \\  |   | |     | |                           |\n");
    printf("| |     | |   | /                 \\ |   | |     | |                           |\n");
    printf("| |     | |   |/                   \\|   | |     | |                           |\n");
    printf("| |     | |   /                     \\   | |     | |                           |\n");
    printf("| |     | |  /                       \\  | |     | |                           |\n");
    printf("| |     | | /                         \\ | |     | |                           |\n");
    printf("| |     | |/                           \\| |     | |                           |\n");
    printf("| |     | /                             \\ |     | |                           |\n");
    printf("| |     |/                               \\|     | |                           |\n");
    printf("| |     /                                 \\     | |                           |\n");
    printf("| |    /                                   \\    | |___________________________|\n");
    printf("| |   /                                     \\   | |                           |\n");
    printf("| |  /                                       \\  | |     Braixen Simulator     |\n");
    printf("|   /                                         \\   |     (C) TechCat           |\n");
    printf("|__/___________________________________________\\__|___________________________|\n");
}

void printframe6() {
    system("cls");
    printf("|                                                 |                           |\n");
    printf("|                                                 |                           |\n");
    printf("|                                                 |                           |\n");
    printf("|                                                 |                           |\n");
    printf("|                                                 |                           |\n");
    printf("|                                                 |                           |\n");
    printf("|                                                 |                           |\n");
    printf("|                                                 |                           |\n");
    printf("|                                                 |                           |\n");
    printf("|                                                 |                           |\n");
    printf("|                                                 |                           |\n");
    printf("|                                                 |                           |\n");
    printf("|                                                 |                           |\n");
    printf("|                                                 |                           |\n");
    printf("|                                                 |                           |\n");
    printf("|                                                 |                           |\n");
    printf("|                                                 |___________________________|\n");
    printf("|                                                 |                           |\n");
    printf("|                                                 |     Braixen Simulator     |\n");
    printf("|                                                 |     (C) TechCat           |\n");
    printf("|_________________________________________________|___________________________|\n");
}

void printframe7() {
    system("cls");
    printf("|\\       /\\    /      /\\   /\\      \\     /\\      /|                           |\n");
    printf("| |     | |   | /----/ \\\\_// \\----\\ |   | |     | |                           |\n");
    printf("| |     | |   | \\---/  _\\ /_  \\---/ |   | |     | |                           |\n");
    printf("| |     | |   |    _\\  > _ <  /_    |   | |     | |                           |\n");
    printf("| |     | |   |    \\__//_w_//__/    |   | |     | |                           |\n");
    printf("| |     | |   |   / ____| |____ \\   |   | |     | |                           |\n");
    printf("| |     | |   |  / / /\\/\\/\\/\\\\ \\ \\  |   | |     | |                           |\n");
    printf("| |     | |   | /  | |/     \\| |  \\ |   | |     | |                           |\n");
    printf("| |     | |   |/   | |\\     /| |   \\|   | |     | |                           |\n");
    printf("| |     | |   /    | | \\   / | |    \\   | |     | |                           |\n");
    printf("| |     | |  /     | | /   \\ | |    _\\_ | |     | |                           |\n");
    printf("| |     | | /     /  |/     \\|  \\  /    \\ |     | |                           |\n");
    printf("| |     | |/      \\__/\\\\/\\/\\/\\__/_/\\/\\/\\/ |     | |                           |\n");
    printf("| |     | /          |  | |  |         /\\ |     | |                           |\n");
    printf("| |     |/           |  | |  |\\_______/  \\|     | |                           |\n");
    printf("| |     /            |  | |  |            \\     | |                           |\n");
    printf("| |    /             |  | |  |             \\    | |___________________________|\n");
    printf("| |   /              |  | |  |              \\   | |                           |\n");
    printf("| |  /               /  | |  \\               \\  | |     Braixen Simulator     |\n");
    printf("|   /                \\__/ \\__/                \\   |     (C) TechCat           |\n");
    printf("|__/___________________________________________\\__|___________________________|\n");
}

void printframe8() {
    system("cls");
    printf("|\\       /\\    /      /\\   /\\      \\     /\\      /|                           |\n");
    printf("| |     | |   | /----/ \\\\_// \\----\\ |   | |     | |                           |\n");
    printf("| |     | |   | \\---/  _\\ /_  \\---/ |   | |     | |                           |\n");
    printf("| |     | |   |    _\\  _ _ _  /_    |   | |     | |                           |\n");
    printf("| |     | |   |    \\_____w_____/    |   | |     | |                           |\n");
    printf("| |     | |   |   / ____| |____ \\   |   | |     | |                           |\n");
    printf("| |     | |   |  / / /\\/\\/\\/\\\\ \\ \\  |   | |     | |                           |\n");
    printf("| |     | |   | /  | |/     \\| |  \\ |   | |     | |                           |\n");
    printf("| |     | |   |/   | |\\     /| |   \\|   | |     | |                           |\n");
    printf("| |     | |   /    | | \\   / | |    \\   | |     | |                           |\n");
    printf("| |     | |  /     | | /   \\ | |    _\\_ | |     | |                           |\n");
    printf("| |     | | /     /  |/     \\|  \\  /    \\ |     | |                           |\n");
    printf("| |     | |/      \\__/\\\\/\\/\\/\\__/_/\\/\\/\\/ |     | |                           |\n");
    printf("| |     | /          |  | |  |         /\\ |     | |                           |\n");
    printf("| |     |/           |  | |  |\\_______/  \\|     | |                           |\n");
    printf("| |     /            |  | |  |            \\     | |                           |\n");
    printf("| |    /             |  | |  |             \\    | |___________________________|\n");
    printf("| |   /              |  | |  |              \\   | |                           |\n");
    printf("| |  /               /  | |  \\               \\  | |     Braixen Simulator     |\n");
    printf("|   /                \\__/ \\__/                \\   |     (C) TechCat           |\n");
    printf("|__/___________________________________________\\__|___________________________|\n");
}

void printframe9() {
    system("cls");
    printf("|\\       /\\    /      /\\   /\\      \\     /\\      /|                           |\n");
    printf("| |     | |   | /----/ \\\\_// \\----\\ |   | |     | |                           |\n");
    printf("| |     | |   | \\---/  _\\ /_  \\---/ |   | |     | |                           |\n");
    printf("| |     | |   |    _\\  O _ O  /_    |   | |     | |                           |\n");
    printf("| |     | |   |    \\_____]_____/    |   | |     | |                           |\n");
    printf("| |     | |   |   / ____| |____ \\   |   | |     | |                           |\n");
    printf("| |     | |   |  / / /\\/\\/\\/\\\\ \\ \\  |   | |     | |                           |\n");
    printf("| |     | |   | /  | |/     \\| |  \\ |   | |     | |                           |\n");
    printf("| |     | |   |/   | |\\     /| |   \\|   | |     | |                           |\n");
    printf("| |     | |   /    | | \\   / | |    \\   | |     | |                           |\n");
    printf("| |     | |  /     | | /   \\ | |    _\\_ | |     | |                           |\n");
    printf("| |     | | /     /  |/     \\|  \\  /    \\ |     | |                           |\n");
    printf("| |     | |/      \\__/\\\\/\\/\\/\\__/_/\\/\\/\\/ |     | |                           |\n");
    printf("| |     | /          |  | |  |         /\\ |     | |                           |\n");
    printf("| |     |/           |  | |  |\\_______/  \\|     | |                           |\n");
    printf("| |     /            |  | |  |            \\     | |                           |\n");
    printf("| |    /             |  | |  |             \\    | |___________________________|\n");
    printf("| |   /              |  | |  |              \\   | |                           |\n");
    printf("| |  /               /  | |  \\               \\  | |     Braixen Simulator     |\n");
    printf("|   /                \\__/ \\__/                \\   |     (C) TechCat           |\n");
    printf("|__/___________________________________________\\__|___________________________|\n");

}

void printframe10() {
    system("cls");
    printf("|\\       /\\    /      /\\   /\\      \\     /\\      /|                           |\n");
    printf("| |     | |   | /----/ \\\\_// \\----\\ |   | |     | |                           |\n");
    printf("| |     | |   | \\---/  _\\ /_  \\---/ |   | |     | |                           |\n");
    printf("| |     | |   |    _\\  T _ T  /_    |   | |     | |                           |\n");
    printf("| |     | |   |    \\__//_w_//__/    |   | |     | |                           |\n");
    printf("| |     | |   |   / ____| |____ \\   |   | |     | |                           |\n");
    printf("| |     | |   |  / / /\\/\\/\\/\\\\ \\ \\  |   | |     | |                           |\n");
    printf("| |     | |   | /  | |/     \\| |  \\ |   | |     | |                           |\n");
    printf("| |     | |   |/   | |\\     /| |   \\|   | |     | |                           |\n");
    printf("| |     | |   /    | | \\   / | |    \\   | |     | |                           |\n");
    printf("| |     | |  /     | | /   \\ | |    _\\_ | |     | |                           |\n");
    printf("| |     | | /     /  |/     \\|  \\  /    \\ |     | |                           |\n");
    printf("| |     | |/      \\__/\\\\/\\/\\/\\__/_/\\/\\/\\/ |     | |                           |\n");
    printf("| |     | /          |  | |  |         /\\ |     | |                           |\n");
    printf("| |     |/           |  | |  |\\_______/  \\|     | |                           |\n");
    printf("| |     /            |  | |  |            \\     | |                           |\n");
    printf("| |    /             |  | |  |             \\    | |___________________________|\n");
    printf("| |   /              |  | |  |              \\   | |                           |\n");
    printf("| |  /               /  | |  \\               \\  | |     Braixen Simulator     |\n");
    printf("|   /                \\__/ \\__/                \\   |     (C) TechCat           |\n");
    printf("|__/___________________________________________\\__|___________________________|\n");

}

int main () {
int userchoice = 0;
int continuechoice = 0;
int choice = 0;
int dummy = 0;
int charm = 0;
int userhealth = 100;
int berries = 5;
int braixenhealth = 100;
int exitq = 0;
char input[100];
int friendship = 0;
int petsleft = 8;
int response = 0;
int mainchoice = 0;


clearit();
printf("________________________________________________________________________________\n");
printf("              ___________            __    _________         __   \n");
printf("              \\__    ___/___   ____ |  |__ \\_   ___ \\_____ _/  |_ \n");
printf("                |    |_/ __ \\_/ ___\\|  |  \\/    \\  \\/\\__  \\\\   __\\\n");
printf("                |    |\\  ___/\\  \\___|      \\     \\____/ __ \\|  |  \n");
printf("                |____| \\___  >\\___  >___|  /\\______  (____  /__|  \n");
printf("                           \\/     \\/     \\/        \\/     \\/     \n\n");
printf("________________________________________________________________________________\n");
printf("                            TECHCAT PROUDLY PRESENTS\n");
printf("                         ______________________________\n\n");
printf("                              *BRAIXEN SIMULATOR!*\n");
printf("                         ______________________________\n\n");
printf("                            Press Enter to Continue.\n");
printf("________________________________________________________________________________\n");
awaitenter();

mainmenu:
clearit();
printf(" ----------------------------------------------------------------------------- \n");
printf("|  ______              __                                                     |\n");
printf("| |   __ \\.----.---.-.|__|.--.--.-----.-----.                                 |\n");
printf("| |   __ <|   _|  _  ||  ||_   _|  -__|     |                                 |\n");
printf("| |______/|__| |___._||__||__.__|_____|__|__|                                 |\n");
printf("|                                                                             |\n");
printf("|  _______ __                  __         __                                  |\n");
printf("| |     __|__|.--------.--.--.|  |.---.-.|  |_.-----.----.                    |\n");
printf("| |__     |  ||        |  |  ||  ||  _  ||   _|  _  |   _|                    |\n");
printf("| |_______|__||__|__|__|_____||__||___._||____|_____|__|                      |\n");
printf("|                                                                             |\n");
printf(" -----------------------------------------------------------------------------\n");
printf(" -----------------------------------------------------------------------------\n");
printf("| Simulate the interesting adventure between a Human, and a Braixen!          |\n");
printf("|                                                                             |\n");
printf("| 1. Play Game                                                                |\n");
printf("| 2. Continue                                                                 |\n");
printf("| 3. Exit Game                                                                |\n");
printf("| 4. Strategy Guide                                                           |\n");
printf("|                                                                             |\n");
printf("| http(s)://braixensimulator.techcat.dev                                      |\n");
printf(" -----------------------------------------------------------------------------\n");

scanf("%s", input);
userchoice = atoi(input);
if (userchoice == 1) {
    goto start;
}

else if (userchoice == 2) {
clearit();   
printf(" ----------------------------------------------------------------------------- \n");
printf("|                                                                             |\n");
printf("| Continue Menu:                                                              |\n");
printf("|                                                                             |\n");
printf("|-----------------------------------------------------------------------------|\n");
printf("| Introduction:                                                               |\n");
printf("|                                                                             |\n");
printf("| 1. First Level  2. Second Level                                             |\n");
printf("|                                                                             |\n");
printf("|-----------------------------------------------------------------------------|\n");
printf("| Chapters:                                                                   |\n");
printf("|                                                                             |\n");
printf("| 3. First Chapter                                                            |\n");
printf("|                                                                             |\n");
printf("|-----------------------------------------------------------------------------|\n");
printf("| Options:                                                                    |\n");
printf("|                                                                             |\n");
printf("| 4. Back to Main Menu                                                        |\n");
printf("|                                                                             |\n");
printf(" ----------------------------------------------------------------------------- \n");



scanf("%d", &continuechoice);

if (continuechoice == 1) {
goto firstlevel;
}

else if (continuechoice == 2) {
dummy = 1;
goto secondlevel;
}

else if (continuechoice == 3) {
    goto firstchapter;
}

else if (continuechoice == 4) {
goto mainmenu;
}

else if (continuechoice == 5) {
goto debugchoice;
}

else {
goto mainmenu;
}

}


else if (userchoice == 3) {
clearit();    
version();
return 0;      
  }

else if (userchoice == 4) {
clearit();
awaitenter();
printf("Strategy Guide for Braixen Simulator (Press enter to scroll)\n");
printf("CHAPTER 1. RUNNING THE GAME:\n\n");
printf("To run the game, download the latest executable from the releases tab on the\n");
printf("Braixen Simulator Github, or homepage. Then, copy the file onto your MS-DOS\n");
printf("computer and run it by typing: \"BRAIXEN.EXE\".\n");
printf("If you are running a DOS-based version of Windows, such as 95 or 98, you can\n");
printf("double-click the program, and it'll open a DOS terminal and run the game.\n\n");
awaitenter();


printf("CHAPTER 2. MAIN MENU:\n\n");
printf("When you reach the main menu of the game, press \"1\" on your keyboard, and\n");
printf("press Enter to start the game. You may also press \"2\" on your keyboard and\n");
printf("press Enter to reach the continue screen, where you can continue from a\n");
printf("specific chapter.\n");
printf("(Note: This game has no saving capabilities. You will need to remember which\n");
printf("chapter you left off on if you choose to exit the game.)\n\n");
awaitenter();


printf("CHAPTER 3. INTRODUCTION SEQUENCE (PART 1):\n\n");
printf("After you read the prelude, you will be thrown into a battle-like menu with\n");
printf("three options. The goal is to heighten your trust level to 100 and gain the\n");
printf("trust of the Braixen.\n");
printf("1. Pet them\n");
printf("2. Throw a rock at them\n");
printf("3. Feed them\n\n");
awaitenter();


printf("Trying to pet the Braixen when your trust level is under 25 will result in\n");
printf("you being bitten. You must heighten your trust level before doing that.\n");
printf("You can increase your trust level by selecting the \"Feed them\" option. This\n");
printf("will increase their trust level by 10. Keep feeding them until you have no\n");
printf("berries left.\n");
printf("Once your trust level is over 25, you can now pet the Braixen to finish\n");
printf("raising your trust level and finally gain the trust of the wild Braixen!\n");
printf("(Note: Choosing \"Throw a rock at them\" will reset your trust level and cause\n");
printf("the Braixen to lose 10 health points. If you have no berries left, there's no\n");
printf("way to recover from it.)\n\n");
awaitenter();


printf("CHAPTER 3. INTRODUCTION SEQUENCE (PART 2):\n\n");
printf("After gaining the trust of the wild Braixen, you are now met with 3 different\n");
printf("options.\n");
printf("1. Pet the Braixen\n");
printf("2. Hug the Braixen\n");
printf("3. Kiss the Braixen\n\n");
awaitenter();

printf("The goal is to heighten your friendship level to 100.\n");
printf("Firstly, pet the Braixen. You can only pet the Braixen 8 times until they\n");
printf("decide to move away. Once this happens, hug the Braixen, and you will then\n");
printf("start Chapter 1 of the story!\n");
printf("(Note: Don't try to kiss the Braixen. They'll bonk you on the head, and\n");
printf("you'll lose 10 health points.)\n");
awaitenter();
goto mainmenu;
}


else {
//restarts program if there is an invalid input
goto mainmenu;
}

start:
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

firstlevel:
awaitenter();
clearit();
printframe4();
printf("A wild Braixen has appeared!\n");
awaitenter();

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
        version(); 
        return 0;
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

    printf("What will you do?: \n\n");
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
        printf("You threw a rock at the Braixen, it hit their head. how rude!\n");
        charm = 0;
        braixenhealth = braixenhealth - 10;
        berries = 5;
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



secondlevel:
clearit();
awaitenter();
printframe7();
printf("You've gained the trust of the wild Braixen! \n");
awaitenter();


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

firstchapter:
clearit();

printframe1();
awaitenter();
printf("Braixen: Hmm, you don't seem as bad as all of the other humans I've\n");
printf("encountered.\n");
awaitenter();

printframe1();
printf("You: Huh? Wait, you can talk?\n");
awaitenter();

printframe1();
printf("Braixen: Of course I can, human. Braixen's are very intelligent\n");
printf("Pokemon. Didn't you know that?\n");
awaitenter();

printframe1();
printf("1. Yes, of course. 2. I didn't know that.\n");

scanf("%s", input);
response = atoi(input);

if (response == 1) {
    printframe7();
    awaitenter();
    printf("Braixen: Hah! Of course you knew. You seem like the kind of\n");
    printf("person that knows a lot about Pokemon!\n");
    awaitenter();

    printframe7();
    printf("You: (Uhh, well... nevermind.)\n");
    awaitenter();

    printframe1();
    printf("Braixen: Anyways, come closer to me. I have a favor to ask of you.\n");
    awaitenter();
}

else if (response == 2) {
    printframe4();
    awaitenter();
    printf("Braixen: Hmph! How rude! Approaching a Braixen and not even knowing\n");
    printf("how intelligent it could be??\n");
    awaitenter();

    printframe4();
    printf("Braixen: You're sure lucky I didn't smack you with my stick the\n");
    printf("second you threw that rock at my head!\n");
    awaitenter();
    printframe4();
    printf("You: Oh! Uh, I'm sorry. Please don't hit me!\n");
    awaitenter();
    printframe4();
    printf("Braixen: Anyways, come closer to me. I have a favor to ask of you.\n");
    awaitenter();
}

else {
    printframe4();
    awaitenter();
    printf("Braixen: Hmph! How rude! Approaching a Braixen and not even knowing\n");
    printf("how intelligent it could be??\n");
    awaitenter();

    printframe4();
    printf("Braixen: You're sure lucky I didn't smack you with my stick the\n");
    printf("second you threw that rock at my head!\n");
    awaitenter();

    printframe4();
    printf("You: Oh! Uh, I'm sorry. Please don't hit me!\n");
    awaitenter();

    printframe4();
    printf("Braixen: Anyways, come closer to me. I have a favor to ask of you.\n");
    awaitenter();
}

printframe1();
printf("(You slowly start walking towards the Braixen, afraid that at any\n");
printf("point it could hurt you.)\n");
awaitenter();
printframe4();
printf("Braixen: Hurry Up! I don't have all day!\n");
awaitenter();

printframe1();
printf("(You nearly stumble and fall on the ground after hearing it yell.\n");
printf("But you kept your balance.)\n");
awaitenter();

printframe4();
printf("Braixen: Now stop!\n");
awaitenter();

printframe1();
printf("(You stopped walking, and you glanced up at the Braixen.)\n");
awaitenter();

printframe1();
printf("You: Woah, you're even taller than I expected, *gulp*\n");
awaitenter();

printframe8();
printf("(The Braixen looks at you, clearly annoyed.)\n");
awaitenter();

printframe4();
printf("Braixen: Now, are you ready to hear what I have to say?\n");
awaitenter();

printframe1();
printf("You: Uhm, yeah?\n");
awaitenter();

printframe1();
printf("Braixen: How about this. Since you seem to be a good enough Pokemon\n");
printf("trainer, maybe I could tag along with you...?\n");
awaitenter();

printframe1();
printf("You: Wait, you want *me* to be your trainer? I haven't really dealt\n");
printf("with Pokemon like you before.\n");
awaitenter();

printframe4();
printf("Braixen: 'Pokemon like you before?' What the hell is that supposed\n");
printf("to mean?\n");
awaitenter();

printframe4();
printf("You: No! I didn't mean it like that it's just-\n");
awaitenter();

printframe6();
printf("(Braixen then charges at you, pushes you to the ground and violently\n");
printf("pins you down.)\n");
awaitenter();

printframe6();
printf("You: AHH!!! What are you doing? Get off me!!!\n");
awaitenter();

printframe6();
printf("(You start helplessly screaming and try to break free from the Braixen's\n");
printf("grasp, but to no avail.)\n");
awaitenter();

printframe6();
printf("(The Braixen then covers your mouth, and looks directly into your terrified\n");
printf("eyes)\n");
awaitenter();

printframe6();
printf("Braixen: Stop screaming! Geez, I wasn't even gonna hurt you.\n");
awaitenter();

printframe6();
printf("(You stop screaming as per the Braixen's request)\n");
awaitenter();

printframe6();
printf("Braixen: If I uncover your mouth, do you promise to not scream?\n");
awaitenter();

printframe1();
printf("(You nod slightly, indicating that you agree. They take their hand off\n");
printf("your mouth.)\n");
awaitenter();

printframe1();
printf("Braixen: Are you hurt at all?\n");
awaitenter();

printframe1();
printf("You: Yeah?! You literally threw me to the ground and pinned me down\n");
printf("over nothing! Why wouldn't I be hurt?\n");
awaitenter();

printframe8();
printf("Braixen: I see. I'm very sorry, human. I let my frustration get ahead\n");
printf("of me. I promise it won't happen again.\n");
awaitenter();

printframe1();
printf("You: It better not happen again.\n");
awaitenter();

printframe3();
printf("(The Braixen looks away slightly, obviously remorseful for what they did.)\n");
awaitenter();

printframe3();
printf("Braixen: Can I still come along with you? I'm just really lonely, and\n");
printf("I wish for some companionship.\n");
awaitenter();

printframe1();
printf("You: I guess, I originally came into this forest to find a Pokemon anyways\n");
printf("and then go back home.\n");
awaitenter();

printframe7();
printf("Braixen: Perfect! Why don't you show me the way out of this forest so I\n");
printf("can go home with you!\n");
awaitenter();

printframe7();
printf("(The Braixen starts wagging its tail, eager to start its new adventure\n");
printf("with you.)\n");
awaitenter();

printframe7();
printf("You: About that...\n");
awaitenter();

printframe9();
printf("(The Braixen perks its ears up and looks at you.)\n");
awaitenter();

printframe9();
printf("You: Actually, I don't know the way back. I was lost before I found you.\n");
awaitenter();

printframe10();
printf("Braixen: Oh my! Did you hit your head that hard?\n");
awaitenter();

printframe10();
printf("You: No, no, I'm fine. I'll just have to retrace my steps if that's even\n");
printf("possible at this point.\n");
awaitenter();

printframe1();
printf("Braixen: Don't worry human, I can sniff out where you were walking and\n");
printf("figure out where you began. I just have to do one thing...\n");
awaitenter();

printframe1();
printf("You: And what's that 'one thing?'\n");
awaitenter();

printframe7();
printf("Braixen: I have to sniff you!\n");
awaitenter();

printframe7();
printf("You: What??\n");
awaitenter();

printframe9();
printf("Braixen: It's not weird, I promise! I need to do that to get a good idea\n");
printf("of what your scent is. Then I can use that information to trace where you\n");
printf("were walking!\n");
awaitenter();

printframe1();
printf("You: Okay, go ahead and sniff me.... (This is SO weird).\n");
awaitenter();

printframe1();
printf("(The Braixen starts sniffing all over your body, you stand there awkwardly\n");
printf("while the Braixen sniffs you closely.)\n");
awaitenter();

printframe7();
printf("Braixen: Alright! I've got it. Follow me!\n");
awaitenter();

/////////////
clearit();
demonotice();
return 0;
/////////////

printframe1();
printf("(The Braixen stands up and starts sniffing the ground while walking.)\n");
awaitenter();

printframe1();
printf("You: Alright!\n");
awaitenter();

printframe1();
printf("(You get up and start walking with the Braixen.)\n");
awaitenter();

printframe1();
printf("(The Braixen is now walking down the forest path, sniffing the\n");
printf("ground as it tries to follow your scent trail.)\n");
awaitenter();

printframe1();
printf("(A few hours have passed at this point. you're seriously starting to\n");
printf("doubt that the Braixen actually knows where they're going, or if\n");
printf("you'll actually get out of this forest anytime soon.)\n");
awaitenter();

printframe1();
printf("You: Hey, uh.. Braixen?\n");
awaitenter();

printframe1();
printf("(The Braixen ignores you and keeps walking)\n");
awaitenter();

printframe1();
printf("You: Braixen??\n");
awaitenter();

printframe1();
printf("(You got no response from them...)\n");
awaitenter();

printframe1();
printf("You: BRAIXEN!\n");
awaitenter();

printframe1();
printf("(The Braixen then turns around and faces you, obviously very\n");
printf("frustrated and tired)\n");
awaitenter();

printframe1();
printf("You: Are you sure you know where the exit of the forest is? We've\n");
printf("been walking for hours and it's getting pretty dark now, don't ya\n");
printf("think?\n");
awaitenter();

printframe1();
printf("(The Braixen turns their head away from you. They walk over to a tree,\n");
printf("sit down, and start leaning against it.)\n");
awaitenter();

printframe1();
printf("(You walk over to the Braixen, concerned that something might be wrong.)\n");
awaitenter();

printframe1();
printf("You: Hey, what's wrong?\n");
awaitenter();

printframe1();
printf("(The Braixen is still refusing to say a word to you.)\n");
awaitenter();

printframe1();
printf("You: *sigh* What should we do now, Braixen?\n");
awaitenter();

printframe1();
printf("Braixen: Uhm... I-I don't know.\n");
awaitenter();

printframe1();
printf("(You start to notice that the Braixen's voice is getting very shaky,\n");
printf("they sound really distressed.)\n");
awaitenter();

printframe1();
printf("You: You don't know the way out, don't you?\n");
awaitenter();

printframe1();
printf("Braixen: *sniffle*\n");
awaitenter();

printframe1();
printf("You: You said that you could find the way out based on my scent though?\n");
awaitenter();

printframe1();
printf("Braixen: I could! B-But... I lost the trail a while ago. I just\n");
printf("didn't want to admit it!!\n");
awaitenter();

printframe1();
printf("You: Oh great, so now we're in the middle of nowhere now. Are you serious??\n");
awaitenter();

printframe1();
printf("(The Braixen starts crying.)\n");
awaitenter();

printframe1();
printf("You: *sigh* Oh my god...\n");
awaitenter();

printframe1();
printf("Braixen: I-i'm sorry! *sobbing*\n");
awaitenter();

printframe1();
printf("(You try to comfort the Braixen by petting its head, but to no avail.)\n");
awaitenter();

printframe1();
printf("(You decide that enough is enough, and you get up and start walking by\n");
printf("yourself. The Braixen notices this and perks their head up.)\n");
awaitenter();

printframe1();
printf("Braixen: W-Wait, Where are you going?\n");
awaitenter();

printframe1();
printf("You: I'm going to find the way out of this forest myself.\n");
awaitenter();

printframe1();
printf("Braixen: You don't want my help anymore...?\n");
awaitenter();

printframe1();
printf("You: No! I don't want your help anymore. Look where you got me! I'm\n");
printf("all lost now thanks to you. I'm leaving now, don't even bother following me.\n");
awaitenter();

printframe1();
printf("(You start walking in a straight path, hoping to find any sign of\n");
printf("civilization so you can get back home. But not long after, you notice\n");
printf("someone trailing behind you. You turn around and it's the Braixen.)\n");
awaitenter();

printframe1();
printf("Braixen: P-Please-\n");
awaitenter();

printframe1();
printf("You: No, stop following me.\n");
awaitenter();

printframe1();
printf("(You turn around and keep walking.)\n");
awaitenter();

printframe1();
printf("(After another hour of walking by yourself, you still haven't found\n");
printf("any signs of civilization. You decide to find somewhere to rest and\n");
printf("you'll wait until the morning to continue walking.)\n");
awaitenter();

printframe1();
printf("(You find a pile of leaves to rest your head on. It's not the best.\n");
printf("But it'll do for now. You close your eyes and doze off to sleep.)\n");
awaitenter();

printframe1();
printf("Braixen: Good Morning, Human!!\n");
awaitenter();

printframe1();
printf("You: AH! What the hell?\n");
awaitenter();

printframe1();
printf("(You're super surprised by the Braixen's sudden presence)\n");
awaitenter();

printframe1();
printf("Braixen: Hehe~ I scared you!\n");
awaitenter();

printframe1();
printf("You: You sure did... and I told you to stop following me. Why are you here?\n");
awaitenter();

printframe1();
printf("Braixen: I was protecting you while you slept. There were a bunch\n");
printf("of Pokemon in this forest that totally wanted to eat you!\n");
awaitenter();

printframe1();
printf("You: Well thanks, I guess.\n");
awaitenter();

printframe1();
printf("Braixen: I have something exciting to tell you~\n");
awaitenter();

printframe1();
printf("You: And what is that?\n");
awaitenter();

printframe1();
printf("Braixen: I may have found a way out of the forest!\n");
awaitenter();

printframe1();
printf("You: Yeah, sure. I totally believe you.\n");
awaitenter();

printframe1();
printf("Braixen: No! I'm serious. I climbed a very tall tree before I woke\n");
printf("you up and looked around for a bit. I may have found a town we can\n");
printf("travel to!\n");
awaitenter();

printframe1();
printf("You: Can I trust you this time? You kinda sent us in the wrong direction\n");
printf("last time.\n");
awaitenter();

printframe1();
printf("Braixen: Yep! You can totally trust me this time.\n");
awaitenter();

printframe1();
printf("You: Alright then, I just have one question... Why are you helping me?\n");
awaitenter();

printframe1();
printf("Braixen: Ehh??\n");
awaitenter();

printframe1();
printf("You: No no, of course I appreciate your help. But, I just kind of\n");
printf("find it strange that a wild Pokemon is so willing to help some\n");
printf("random person like me.\n");
awaitenter();

printframe1();
printf("Braixen: Uhm...\n");
awaitenter();

printframe1();
printf("(The Braixen nervously looks at the ground)\n");
awaitenter();

printframe1();
printf("Braixen: It's because I want you to be my trainer. My previous\n");
printf("trainer had abandoned me a while ago.\n");
awaitenter();

printframe1();
printf("You: Oh, why did he abandon you?\n");
awaitenter();

printframe1();
printf("Braixen: He Just... Didn't like me, at all.\n");
awaitenter();

printframe1();
printf("Braixen: My old trainer would constantly berate me all the time\n");
printf("because I wasn't up to his standards.\n");
awaitenter();

printframe1();
printf("Braixen: He would always make me fight overpowered Pokemon that I\n");
printf("couldn't even dream of beating, he compared me negatively to other\n");
printf("Pokemon, I just felt utterly useless to him. Eventually he just picked\n");
printf("me up, led me to this forest, and abandoned me here.\n");
awaitenter();

printframe1();
printf("You: Oh my god that sounds awful. I'm sorry you had to go through that.\n");
printf("I kinda feel bad now for being mean to you yesterday.\n");
awaitenter();

printframe1();
printf("Braixen: It's fine, I'm used to it anyways.\n");
awaitenter();

printframe1();
printf("You: But when we first met, why did you attack me?\n");
awaitenter();

printframe1();
printf("Braixen: Oh, uhm. I'm not really sure. It's almost like someone took\n");
printf("over my mind when that happened. Does your head still hurt?\n");
awaitenter();

printframe1();
printf("You: No, It's doing fine now. I don't think I even hit it that hard.\n");
printf("It might have just been the shock of being attacked.\n");
awaitenter();

printframe1();
printf("Braixen: Good! Anyways, do you want me to lead you out of this forest?\n");
awaitenter();

printframe1();
printf("You: Sure thing!\n");
awaitenter();

printframe1();
printf("(The Braixen perks up and smiles at you.)\n");
awaitenter();

printframe1();
printf("Braixen: Follow me~!\n");
awaitenter();

printframe1();
printf("(The Braixen starts running off.)\n");
awaitenter();

printframe1();
printf("You: H-Hey! Wait up!\n");
awaitenter();

printframe1();
printf("(You start running after the Braixen to see where they will bring you)\n");
awaitenter();

printframe1();
printf("Braixen: Okay. so if I'm right, we'll go this direction and then\n");
printf("end up in a town!...\n");
awaitenter();

printframe1();
printf("(The Braixen points in the direction they want to go in.)\n");
awaitenter();

printframe1();
printf("Braixen: ...And maybe we can ask the locals for directions back to\n");
printf("where you live!\n");
awaitenter();

printframe1();
printf("You: Seems like a good idea, you're really smart!\n");
awaitenter();

printframe1();
printf("Braixen: You mean it?\n");
awaitenter();

printframe1();
printf("You: Of course I do, I would never think to climb a tree to find a\n");
printf("town. I can't even climb a tree anyways.\n");
awaitenter();

printframe1();
printf("Braixen: Kyu Kyu!\n");
awaitenter();

printframe1();
printf("(The Braixen is smiling at you.)\n");
awaitenter();

printframe1();
printf("Braixen: Now, follow me!!\n");
awaitenter();

printframe1();
printf("(The Braixen runs off excited to find the town she scoped out, and\n");
printf("you follow them.)\n");
awaitenter();

printframe1();
printf("(After walking for another hour, you finally find the exit to the\n");
printf("forest. You're now at the entrance of an unfamiliar town.)\n");
awaitenter();

printframe1();
printf("Braixen: See! I told you I knew where I was going!\n");
awaitenter();

printframe1();
printf("You: Good job Braixen! Now let's find someone to ask for directions.\n");
awaitenter();

printframe1();
printf("(The Braixen starts excitedly wagging its tail.)\n");
awaitenter();

printframe1();
printf("You: Well, I see a PokeMart over there. Maybe we should get some\n");
printf("supplies first.\n");
awaitenter();

printframe1();
printf("Braixen: Like what?\n");
awaitenter();

printframe1();
printf("You: Well, I'm kind of hungry. Maybe there's a cafe there.\n");
awaitenter();

printframe1();
printf("Braixen: I'm hungry too. Can you get me something too?\n");
awaitenter();

printframe1();
printf("You: Yeah, maybe. I have to check if I have enough PokeDollars though.\n");
awaitenter();

printframe1();
printf("(You rummage through your bag and find around 1,000 PokeDollars in it.)\n");
awaitenter();

printframe1();
printf("You: Good news!\n");
awaitenter();

printframe1();
printf("(The Braixen perks it's ears up)\n");
awaitenter();

printframe1();
printf("You: We have enough money for a few things. Let's go in!\n");
awaitenter();

printframe1();
printf("(You and Braixen wander into the PokeMart, it looks just like the\n");
printf("one in your town. You feel at home already!)\n");
awaitenter();

printframe1();
printf("You: Okay, where should we start? Supplies, or food?\n");
awaitenter();

printframe1();
printf("(The Braixen slightly tugs on your shirt and points to the supplies\n");
printf("section.)\n");
awaitenter();

printframe1();
printf("You: Alright, supplies it is.\n");
awaitenter();

printframe1();
printf("(You head over to the supplies section and look at the many things\n");
printf("on the shelves.)\n");
awaitenter();

printframe1();
printf("You: Hmm... What should I get? Potions... Escape Ropes... So many choices.\n");
awaitenter();

printframe1();
printf("You: Hey Braixen?\n");
awaitenter();

printframe1();
printf("(The Braixen isn't by your side anymore.)\n");
awaitenter();

printframe1();
printf("You: Braixen??\n");
awaitenter();

printframe1();
printf("(You turn around and see the Braixen looking at the PokeBall section.\n");
printf("You walk over to them to see what they are doing.)\n");
awaitenter();

printframe1();
printf("You: Looking at PokeBalls, huh?\n");
awaitenter();

printframe1();
printf("(The Braixen silently puts a shiny red Pokeball in your hand and looks\n");
printf("at you pleadingly.)\n");
awaitenter();

printframe1();
printf("You: Huh? Do you want this?\n");
awaitenter();

printframe1();
printf("Braixen: (silently) Yeah.\n");
awaitenter();

printframe1();
printf("You: Okay, let's bring this to the cashier so I can pay for it.\n");
awaitenter();

printframe1();
printf("(You go up to the cashier and place the PokeBall on the counter.)\n");
awaitenter();

printframe1();
printf("Cashier: That'll be 500 PokeDollars please!\n");
awaitenter();

printframe1();
printf("(You place 500 PokeDollars on the counter.)\n");
awaitenter();

printframe1();
printf("Cashier: Have a nice day!\n");
awaitenter();

printframe1();
printf("(After paying for the PokeBall, you go over to the cafe, take a seat,\n");
printf("and look at the menu.)\n");
awaitenter();

printframe1();
printf("You: Oh no, we don't have enough money to get something for the\n");
printf("both of us.\n");
awaitenter();

printframe1();
printf("(The Braixen looks down at the ground, disappointed.)\n");
awaitenter();

printframe1();
printf("You: I'll just get something for you then, what do you want?\n");
awaitenter();

printframe1();
printf("(Braixen's ears perk up)\n");
awaitenter();

printframe1();
printf("Braixen: Wait, really?\n");
awaitenter();

printframe1();
printf("You: Yeah! I'm sure I can go a little longer without anything.\n");
awaitenter();

printframe1();
printf("Braixen: Tell them I want the omelet!\n");
awaitenter();

printframe1();
printf("You: Okay. Stay here.\n");
awaitenter();

printframe1();
printf("(You leave the table you were sitting at and go to the front to make\n");
printf("the order. After making the order, you sit back down at your table.)\n");
awaitenter();

printframe1();
printf("(After a few minutes, you hear one of the workers call out that your\n");
printf("order is ready. You get up and grab the fresh omelet.)\n");
awaitenter();

printframe1();
printf("You: Here you go, Braixen!\n");
awaitenter();

printframe1();
printf("(You hand over the omelet to the Braixen, and they silently eat it.)\n");
awaitenter();

printframe1();
printf("You: You've been pretty silent, Braixen. Are you alright?\n");
awaitenter();

printframe1();
printf("(The Braixen's eyes start watering up, and a single tear starts to roll\n");
printf("down their eye.)\n");
awaitenter();

printframe1();
printf("You: Oh no, wait here. I'll get a to go box so we can leave. Try and\n");
printf("keep it together for me, alright?\n");
awaitenter();

printframe1();
printf("(You pick up a napkin and wipe the tears off their eyes.)\n");
awaitenter();

debugchoice:

printframe1();
printf("(You then walk over to the front of the cafe, and ask the worker for a\n");
printf("to go box.)\n");
awaitenter();

printframe1();
printf("Worker: Here's your to go box. Oh, and by the way, is that your\n");
printf("Pokemon over there? They don't look too good. Are they doing alright?\n\n");
awaitenter();

printframe1();
printf("You: Yeah. they're just having a bad day, that's all.\n");
awaitenter();

printframe1();
printf("You: Ah, I see. Here's your to go box. have a good rest of your day!\n");
awaitenter();

printframe1();
printf("(You walk over to your table and put the half eaten omelet in the box.)\n");
awaitenter();

printframe1();
printf("You: Okay Braixen, we can go now.\n");
awaitenter();

printframe1();
printf("(The Braixen stands up and follows you out the door of the PokeMart.)\n");
awaitenter();

}