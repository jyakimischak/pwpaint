
#include <iostream>
#include <SDL/SDL.h>
#include "SDL_gfxPrimitives.h"
#include <emscripten.h>
#include "PwPaint.h"

using namespace std;

/**
 * main function
 */
extern "C" int main(int argc, char * argv[]) {
   SDL_Init(SDL_INIT_EVERYTHING);


      // filledEllipseRGBA(screen,
      //                   60, 40,
      //                   2, 15,
      //                   0, 255, 0, 255);

      // filledEllipseRGBA(screen,
      //                   600, 400,
      //                   25, 150,
      //                   0, 255, 0, 255);

  emscripten_set_main_loop(oneIter, 0, 1);
}


/**
 * One iteration of the main loop
 */
void oneIter() {
  // handleInput();
    // cout << "run..." << endl;
}


/**
 * Handle the input from the main loop
 */
void handleInput() {
  while(SDL_PollEvent(&e) != 0) {
      cout << "button pressed: " << e.type << endl;
  }
}


extern "C" void setDisplaySize(int width, int height) {
  screen = SDL_SetVideoMode(width, height, 32, SDL_SWSURFACE);
}



//******************************************************************************************************************************
// Debug functions.
//******************************************************************************************************************************

/**
 * This is just for debugging calling functions from javascript.
 */
extern "C" void sayHello() {
  cout << "I am saying hello.1" << endl;
}




