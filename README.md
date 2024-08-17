(UNFINISHED, WORK IN PROGRESS)

Interactive CLI program that simulates an interaction between a human, and a wild Braixen.

**Runs on Windows, Linux, and MS-DOS!**

![image](https://github.com/user-attachments/assets/c0dd0a3d-d4f7-43d3-b569-a588a1701750)

![image](https://github.com/user-attachments/assets/cba10b8f-a7b6-4a4e-a28a-c869616d02b2)

![image](https://github.com/user-attachments/assets/3f1921ba-ef5e-4814-8474-c01f16c0b954)

_______________________________________________________________________________________________

Game premise: 

You are a normal human that has encountered a wild Braixen, you must tame this Braixen and make it your friend!

*THERE IS CURRENTLY NO WAY TO WIN THIS GAME!!!*

_______________________________________________________________________________________________

Compiling on Linux:

Download braixen-simulator.c and run these commands to compile a binary:

gcc braixen-simulator.c -o Braixen-Simulator

Mark it as executable:

chmod a+x Braixen-Simulator

Then run the program:

./Braixen-Simulator

_______________________________________________________________________________________________

Cross-Compiling on Linux (Or WSL) for Windows

Download braixen-simulator.c and run these commands to compile a binary:

sudo apt-get update

sudo apt-get install mingw-w64

x86_64-w64-mingw32-gcc -o braixen-simulator.exe braixen-simulator.c -mconsole

_______________________________________________________________________________________________

Known Issues:

Typing in a string of characters instead of a number will glitch out the game.

