(UNFINISHED, WORK IN PROGRESS)

Interactive CLI program that simulates an interaction between a human, and a wild Braixen.

**WORKS ON WINDOWS AND LINUX!**

![image](https://github.com/user-attachments/assets/1549a6d2-a40f-4333-b963-97490a75e85b)

_______________________________________________________________________________________________

GAME FEATURES: 

So far, you can: 

1. Pet the Braixen (You will get bitten if your charm level is below 25, and you will lose 10HP.)
2. Throw a rock at Braixen (You will lose all of your charm levels if you do this, and Braixen will lose 10HP.)
3. Try to feed the Braixen (This will make your charm level go up by 5.)

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
