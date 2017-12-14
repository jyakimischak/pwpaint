
//******************************************************
// Functions exposed through to JavaScript
// Author: Jonas Yakimischak - Poorwill Games
//******************************************************

#include "JsApi.h"

using namespace std;

/**
 * Setup everything and away we go.
 * Should be called from JS after any setters for global functions are called.
 */
extern "C" void init() {
  paintAreaState.newDrawing();
  hasBeenInitialized = true;
  cout << "Initialized..." << endl;
}

/**
 * Set the background color of the paint area.
 */
extern "C" void setPaBackgroundColor(int r, int g, int b) {
    defaultBaseLayerColor = Color(r, g, b, 255);
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
  //if the canvas size has not yet been set then set it to the default

  if(paintAreaState.canvasWidth == 0) {
    setCanvasSize(width, height);
  }
}

/**
 * Set the initial margin used when a new canvas is drawn.
 */
extern "C" void setInitialMargin(int margin) {
    initialMargin = margin;
}

/**
 * Sets the canvas size.
 */
extern "C" void setCanvasSize(int width, int height) {
  paintAreaState.canvasWidth = width;
  paintAreaState.canvasHeight = height;
}

/**
 * Set the color for the base layer, no alpha.
 */
extern "C" void setDefaultBaseLayerColor(int r, int g, int b) {
  defaultBaseLayerColor = Color(r, g, b, 255);
}

//******************************************************************************************************************************
// Debug functions.
//******************************************************************************************************************************

/**
 * This is just for debugging calling functions from javascript.
 */
extern "C" void sayHello() {
  cout << "I am saying hello." << endl;
}

/**
 * Draw something to the screen.
 */
extern "C" void drawDebug() {
  // filledEllipseRGBA(screen,
  //                   600, 400,
  //                   25, 150,
  //                   0, 255, 0, 255);
}

