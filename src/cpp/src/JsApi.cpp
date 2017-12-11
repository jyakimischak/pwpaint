
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
    paintAreaState.setBackgroundColor(Color(r, g, b, 255));
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
  paintAreaState.setWindowWidth(width);
  paintAreaState.setWindowHeight(height);

//  screen = SDL_SetVideoMode(width, height, 32, SDL_SWSURFACE);
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

