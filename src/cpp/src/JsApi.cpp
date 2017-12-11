
//******************************************************
// Functions exposed through to JavaScript
// Author: Jonas Yakimischak - Poorwill Games
//******************************************************

#include <iostream>
#include "PaintMain.h"
#include "PaintAreaState.h"
#include "JsApi.h"

using namespace std;

/**
 * Set the background color of the paint area.
 */
extern "C" void setPaBackgroundColor(int r, int g, int b) {
    paintAreaState.backgroundColor = Color(r, g, b, 255);
    paintAreaState.redraw = true;
}

/**
 * Set the normalized width that will be used for the screen.
 */
extern "C" void setStandardWidth(int width) {
  standardWidth = width;
}

/**
 * Set the size of the window as given by javascript.
 */
extern "C" void setWindowSize(int width, int height) {
  cout << "setWindowSize" << endl;
  paintAreaState.windowWidth = width;
  paintAreaState.windowHeight = height;
  paintAreaState.screenSizeChanged = true;
  paintAreaState.redraw = true;

//  screen = SDL_SetVideoMode(width, height, 32, SDL_SWSURFACE);
}

/**
 * Set the default canvas size.
 */
extern "C" void setDefaultCanvasSize(int width, int height) {
  defaultCanvasWidth = width;
  defaultCanvasHeight = height;
}

/**
 * Set the initial margin used when a new canvas is drawn.
 */
extern "C" void setInitialMargin(int margin) {
    initialMargin = margin;
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

/**
 * Draw something to the screen.
 */
extern "C" void drawDebug() {
  filledEllipseRGBA(screen,
                    600, 400,
                    25, 150,
                    0, 255, 0, 255);
}

