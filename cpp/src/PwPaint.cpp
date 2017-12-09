
#include <iostream>
#include <SDL/SDL.h>
#include <emscripten.h>
#include "PwPaint.h"

using namespace std;

/**
 * main function
 */
int main(int argc, char * argv[]) {
  cout << "running... " << endl;

  //Start SDL
  SDL_Init(SDL_INIT_EVERYTHING);
  
  SDL_DisplayMode dm;

if (SDL_GetDesktopDisplayMode(0, &dm) != 0)
{
     SDL_Log("SDL_GetDesktopDisplayMode failed: %s", SDL_GetError());
     return 1;
}

int w, h;
w = dm.w;
h = dm.h;
cout << "w " << w << " hh " << h << endl;
  
  //Set up screen
  screen = SDL_SetVideoMode(640, 480, 32, SDL_SWSURFACE);

  emscripten_set_main_loop(oneIter, 60, 1);
}


/**
 * One iteration of the main loop
 */
void oneIter() {
  handleInput();
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


