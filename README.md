# CPPND: Capstone Space Game

The Capstone project is a thrilling game that takes inspiration from the classic 2D shoot 'em up genre. In this simplified version, the player must eliminate the enemy before it reaches the other side, and they have five chances to succeed before losing the game.

Controlling the spaceship is intuitive and straightforward. The player can use the arrow keys to move the spaceship in any direction they desire. Additionally, the spacebar can be used to fire a bullet from the spaceship, which adds an exciting element of action to the game.

This project has been developed with a strong emphasis on the principles taught throughout the Nanodegree Program. However, there is still ample opportunity for code refactoring and the addition of more advanced C++ features, which would further enhance the game's functionality and performance.

## Dependencies for Running Locally
* cmake >= 3.7
  * All OSes: [click here for installation instructions](https://cmake.org/install/)
* make >= 4.1 (Linux, Mac), 3.81 (Windows)
  * Linux: make is installed by default on most Linux distros
  * Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/)
  * Windows: [Click here for installation instructions](http://gnuwin32.sourceforge.net/packages/make.htm)
* SDL2 >= 2.0
  * All installation instructions can be found [here](https://wiki.libsdl.org/Installation)
  * Note that for Linux, an `apt` or `apt-get` installation is preferred to building from source.
* gcc/g++ >= 5.4
  * Linux: gcc / g++ is installed by default on most Linux distros
  * Mac: same deal as make - [install Xcode command line tools](https://developer.apple.com/xcode/features/)
  * Windows: recommend using [MinGW](http://www.mingw.org/)

## Basic Build Instructions

1. Install dependencies `apt-get install -y libsdl2-image-dev libsdl2-ttf-dev libsdl2-mixer-dev` (Ubuntu)
2. Clone this repo.
3. Make a build directory in the top level directory: `mkdir build && cd build`
4. Compile: `cmake .. && make`
5. Run it: `./SpaceGame`.
