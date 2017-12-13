
//******************************************************
// State functions for the paint area
// Author: Jonas Yakimischak - Poorwill Games
//******************************************************

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
}


/**
 * Start up a new drawing, with all the defaults.
 */
void PaintAreaState::newDrawing() {
    newDrawing(defaultCanvasWidth, defaultCanvasHeight);
}

/**
 * Start up a new drawing, with given dimensions.
 */
void PaintAreaState::newDrawing(int width, int height) {
    cout << "New drawing" << endl;
    redraw = false;
    canvasWidth = width;
    canvasHeight = height;
    layers.newDrawing();
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
    }
}

/**
 * Draw all the layers of the canvas.
 */
void PaintAreaState::drawCanvas() {

}