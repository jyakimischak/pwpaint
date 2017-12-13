
//******************************************************
// Main functions for the paint area
// Author: Jonas Yakimischak - Poorwill Games
//******************************************************

#include "PaintMain.h"

using namespace std;

SDL_Surface* screen = NULL;
SDL_Event e;


bool hasBeenInitialized = false;

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
  if(!hasBeenInitialized) {
    return;
  }

  // handleInput();
    // cout << "run..." << endl;
  paintAreaState.apply();
}


/**
 * Handle the input from the main loop
 */
void handleInput() {
  while(SDL_PollEvent(&e) != 0) {
      cout << "button pressed: " << e.type << endl;
  }
}







