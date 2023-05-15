CPPND: Space Shooter Game
This project is a thrilling game inspired by the classic 2D shoot 'em up genre. The player's objective is to eliminate the enemy before it reaches the other side. The player has five chances to succeed before losing the game.

Game Instructions
The game is controlled using the following inputs:

Arrow keys: Move the spaceship in any direction.
Spacebar: Fire a bullet from the spaceship.
Dependencies
To run the game locally, ensure the following dependencies are installed:

cmake >= 3.7
Installation instructions can be found here.
make >= 4.1 (Linux, Mac), 3.81 (Windows)
Linux: make is usually installed by default on most Linux distributions.
Mac: Install Xcode command line tools to get make.
Windows: Follow the installation instructions here.
SDL2 >= 2.0
Installation instructions can be found here.
Build Instructions
To build and run the game, follow these steps:

Clone this repository.
Open a terminal and navigate to the project's top-level directory.
Create a build directory: mkdir build && cd build
Compile the code: cmake .. && make
Run the game: ./SpaceGame
Project Structure
The project's directory layout is as follows:

bash
Copy code
.
├── src                 # Source files.
├── res                 # Game resources like sounds, fonts, sprites, etc.
├── cmake               # Build tools.
├── CMakeLists.txt
└── README.md
The project's class structure is as follows:

audio.h, audio.cpp: Manage audio resources.
bullet.h, bullet.cpp: Define and track bullet objects.
controller.h, controller.cpp: Monitor user inputs.
enemy.h, enemy.cpp: Define and track enemy objects.
entity.h, entity.cpp: Basic object definition and methods.
game.h, game.cpp: Initialize the game object and run the game loop.
graphics.h, graphics.cpp: Manage image resources.
main.cpp: Entry point of the program.
player.h, player.cpp: Define and track the player's spaceship object.
renderer.h, renderer.cpp: Helper functions to draw the screen.
Rubric Points
README
The README file is included and contains instructions for building and running the project.
The chosen project and its expected behavior are described in the README.
Each addressed rubric point is mentioned in the README, indicating the relevant files and line numbers.
Compiling and Testing
The project code compiles and runs without errors.
CMake and make are used for building the project.
Loops, Functions, I/O
The project demonstrates an understanding of C++ functions and control structures.
Data is read from an external file or written to a file.
The project accepts user input and processes it.
Object-Oriented Programming
The project uses Object-Oriented Programming techniques.
Classes are used with appropriate access specifiers and member initialization lists.
Implementation details are abstracted from interfaces.
Behavior is encapsulated within classes.
An appropriate inheritance hierarchy is used.
Overloaded functions and virtual base class functions are implemented.
Templates are used to generalize functions.
Memory Management
References are used in function declarations.
Destructors are used appropriately.
