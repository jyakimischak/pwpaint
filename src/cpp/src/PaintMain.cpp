
//******************************************************
// Main functions for the paint area
// Author: Jonas Yakimischak - Poorwill Games
//******************************************************

#include "PaintMain.h"

using namespace std;

SDL_Window *window;
SDL_Renderer *rendererPtr;

SDL_Event e;


bool hasBeenInitialized = false;

/**
 * main function
 */
extern "C" int main(int argc, char * argv[]) {
    SDL_Init(SDL_INIT_EVERYTHING);
    SDL_CreateWindowAndRenderer(256, 256, 0, &window, &rendererPtr);

    SDL_Surface *s = SDL_CreateRGBSurface(0, 256, 256, 8, 0, 0, 0, 0);

 SDL_Rect outlineRect = { 200, 200, 200, 200 };
                SDL_SetRenderDrawColor( rendererPtr, 0xFF, 0xFF, 0x00, 0xFF );        
                SDL_RenderDrawRect( rendererPtr, &outlineRect );
                SDL_RenderPresent( rendererPtr );

    //   filledEllipseRGBA(s,
    //                     60, 40,
    //                     2, 15,
    //                     0, 255, 0, 255);


      // filledEllipseRGBA(screen,
      //                   60, 40,
      //                   2, 15,
      //                   0, 255, 0, 255);

      // filledEllipseRGBA(screen,
      //                   600, 400,
      //                   25, 150,
      //                   0, 255, 0, 255);


    // SDL_Surface *screen = SDL_CreateRGBSurface(0, 256, 256, 8, 0, 0, 0, 0);



        // // We must call SDL_CreateRenderer in order for draw calls to affect this window.
        // renderer = SDL_CreateRenderer(window, -1, 0);

        // // Select the color for drawing. It is set to red here.
        // SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);

        // // // Clear the entire screen to our selected color.
        // SDL_RenderClear(renderer);


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
    // paintAreaState.apply();
}


/**
 * Handle the input from the main loop
 */
void handleInput() {
    while(SDL_PollEvent(&e) != 0) {
        cout << "button pressed: " << e.type << endl;
    }
}







