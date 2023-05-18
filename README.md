# CPPND: Space Shooter Game

This project is an exciting game that draws inspiration from the beloved 2D shoot 'em up genre. The main goal of the player is to eliminate the enemy before it reaches the opposite side of the screen. The player's performance is measured by five chances to succeed, with the game ending if they fail to do so.

## Game Instructions

The game is controlled using the following inputs:

- Arrow keys: Move the spaceship in any direction.
- Spacebar: Fire a bullet from the spaceship.

## Dependencies

To run the game locally, ensure the following dependencies are installed:

- CMake (>= 3.7)
- make (>= 4.1 for Linux/Mac, 3.81 for Windows)
- SDL2 (>= 2.0)

For detailed installation instructions, please refer to the [SDL2 installation guide](https://wiki.libsdl.org/Installation).

## Build Instructions

Follow these steps to build and run the game:

1. Install dependencies `apt-get install -y libsdl2-image-dev libsdl2-ttf-dev libsdl2-mixer-dev` (Ubuntu)
2. Clone this repository.
3. Open a terminal and navigate to the project's top-level directory.
4. Create a build directory: `mkdir build && cd build`
5. Compile the code: `cmake .. && make`
6. Run the game: `./SpaceGame`

## Project Structure

## The project's directory layout is as follows:

    .
    ├── src                     # Source files.
    ├── res                     # Game resources like sounds, fonts, sprites, etc.
    ├── cmake                   # Tools.
    ├── CMakeLists.txt
    └── README.md


The project's class structure is as follows:

- `audio.h`, `audio.cpp`: Manage audio resources.
- `bullet.h`, `bullet.cpp`: Define and track bullet objects.
- `controller.h`, `controller.cpp`: Monitor user inputs.
- `enemy.h`, `enemy.cpp`: Define and track enemy objects.
- `entity.h`, `entity.cpp`: Basic object definition and methods.
- `game.h`, `game.cpp`: Initialize the game object and run the game loop.
- `graphics.h`, `graphics.cpp`: Manage image resources.
- `main.cpp`: Entry point of the program.
- `player.h`, `player.cpp`: Define and track the player's spaceship object.
- `renderer.h`, `renderer.cpp`: Helper functions to draw the screen.

## Rubric Points

### README
- The README file is included and contains instructions for building and running the project.
- The chosen project and its expected behavior are described in the README.
- Each addressed rubric point is mentioned in the README, indicating the relevant files and line numbers.

### Compiling and Testing
- The project code compiles and runs without errors.
- CMake and make are used for building the project.

### Loops, Functions, I/O
- The project demonstrates an understanding of C++ functions and control structures.
- Data is read from an external file or written to a file.
- The project accepts user input and processes it.

### Object-Oriented Programming
- The project uses Object-Oriented Programming techniques.
- Classes are used with appropriate access specifiers and member initialization lists.
- Implementation details are abstracted from interfaces.
- Behavior is encapsulated within classes.
- An appropriate inheritance hierarchy is used.
- Overloaded functions and virtual base class functions are implemented.
- Templates are used to generalize functions.

### Memory Management
- References are used in function declarations.
- Destructors are used appropriately.




