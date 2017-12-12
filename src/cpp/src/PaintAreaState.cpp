
//******************************************************
// State functions for the paint area
// Author: Jonas Yakimischak - Poorwill Games
//******************************************************

#include "PaintMain.h"
#include "PaintAreaState.h"

using namespace std;

int standardWidth = 0;
int defaultCanvasWidth = 0;
int defaultCanvasHeight = 0;
int initialMargin = 0;
PaintAreaState paintAreaState;



//***********************************************************************************************
// PaintAreaState
//***********************************************************************************************

PaintAreaState::PaintAreaState() {
    screenSizeChanged = false;
    redraw = false;
    canvasWidth = defaultCanvasWidth;
    canvasHeight = defaultCanvasHeight;
    baseCanvasColor = Color(255, 255, 255, 255);
}

/**
 * Apply dirty properties to the paint area.
 */
void PaintAreaState::apply() {
    if(screenSizeChanged) {
        screenSizeChanged = false;
        cout << "Updating window width and height " << windowWidth << ", " << windowHeight << endl;
        screen = SDL_SetVideoMode(windowWidth, windowHeight, 32, SDL_SWSURFACE);
    }
    if(redraw) {
        redraw = false;
        cout << "redraw" << endl;
        SDL_FillRect(screen, NULL, SDL_MapRGB(screen->format, backgroundColor.r, backgroundColor.g, backgroundColor.b));
        // filledEllipseRGBA(screen,
        //                     windowWidth / 2, windowHeight / 2,
        //                     25, 25,
        //                     0, 255, 0, 255);
        SDL_Surface* s = SDL_CreateRGBSurface (
            0, // Uint32 flags,
            100, // int    width,
            100, // int    height,
            32, // int    depth,
            0, // Uint32 Rmask,
            0, // Uint32 Gmask,
            0, // Uint32 Bmask,
            100  // Uint32 Amask
        );
        SDL_FillRect(s, NULL, SDL_MapRGB(s->format, 255, 255, 255));
        SDL_Rect offsets;
        offsets.x=0;
        offsets.y=0;
        SDL_BlitSurface(s,NULL,screen,&offsets);
    }
}

/**
 * Draw all the layers of the canvas.
 */
void PaintAreaState::drawCanvas() {

}