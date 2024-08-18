(UNFINISHED, WORK IN PROGRESS)

Interactive CLI program that simulates an interaction between a human, and a wild Braixen.

**Runs on Windows, Linux, and MS-DOS!**

![image](https://github.com/user-attachments/assets/c0dd0a3d-d4f7-43d3-b569-a588a1701750)

![image](https://github.com/user-attachments/assets/cba10b8f-a7b6-4a4e-a28a-c869616d02b2)

![image](https://github.com/user-attachments/assets/3f1921ba-ef5e-4814-8474-c01f16c0b954)

_______________________________________________________________________________________________

Game Plot: 

*You are a 20-something year old human. you've decided that you want to go out and become a Pokemon Trainer.
Without any knowledge on how to do so, you take a hike to the nearest patch of grass you can find, and start walking around aimlessly until you can encounter a wild Pokemon.
Unfortunately, you lost track of where you were wandering and ended up deep in a forest, all by yourself. You look inside of the backpack you brought with you for anything that could help you escape the forest.
After rummaging through your bag, you find nothing that could help you escape this situation you're in. you decide to try and backtrace your steps to get back home. but this is when something very odd happened.
You encounter a Pokemon! but this Pokemon is unlike anything you've seen in the past.
It has big yellow ears with long red tufts in them, glowing red eyes like you've never seen before, and a big bushy tail with a twig stuck in it.
You're totally allured by this Pokemon, and decide that now's your chance to become the Pokemon trainer you've always wanted to be!
You take a small rock off the ground, and chuck it at the Pokemon to get its attention.
The Pokemon then turns around and faces you. It takes the twig out of its tail and points it in your direction. You notice that the tip of the twig is now on fire! Now's your chance!*

_______________________________________________________________________________________________

Compiling on Linux:

Download braixen-simulator.c and run these commands to compile a binary:

gcc braixen-simulator.c -o Braixen-Simulator

Mark it as executable:

chmod a+x Braixen-Simulator

Then run the program:

./Braixen-Simulator

_______________________________________________________________________________________________

Cross-Compiling on Linux (Or WSL) for Windows:

Download braixen-simulator.c and run these commands to compile a binary:

sudo apt-get update

sudo apt-get install mingw-w64

x86_64-w64-mingw32-gcc -o braixen-simulator.exe braixen-simulator.c -mconsole

_______________________________________________________________________________________________

Compiling on MS-DOS:

Download and install OpenWatcom C compiler on your MS-DOS install, and then run this command:

wcl braixen-simulator.c

and then run the newly created DOS executable!

_______________________________________________________________________________________________

Known Issues:

Typing in a string of characters instead of a number will glitch out the game.

(Just don't do it, I have no clue how to fix it.)

_______________________________________________________________________________________________
