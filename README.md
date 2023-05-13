# CPPND: Capstone Space Game

The Capstone project is inspired in 2D shoot 'em up. This is a simple version, where player needs to destroy the enemy before reaches the other side. Player has five opportunity before loose the game.

Here how you control your spaceship,

- Arrows key to move spaceship.
- Spacebar to fire bullet.

Finally, this project was following the principles we have learned throughout this Nanodegree Program. Still a lot of opportunity for code refactoring and add more C++ features.

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
