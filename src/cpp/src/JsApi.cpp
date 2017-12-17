
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
    loadDefaultBrushes();
    logoss << "Initialized...";
    pwLog.info("JsApi", "init");
}

/**
 * Set the background color of the paint area.
 */
extern "C" void setPaBackgroundColor(int r, int g, int b) {
    defaultBaseLayerColor = Color(r, g, b, 255);
    logoss << "r " << r << " g " << g << " b " << b;
    pwLog.info("JsApi", "setPaBackgroundColor");
}

/**
 * Set the normalized width that will be used for the screen.
 */
extern "C" void setStandardWidth(int width) {
    standardWidth = width;
    logoss << "width " << width;
    pwLog.info("JsApi", "setStandardWidth");
}

/**
 * Set the size of the window as given by javascript.
 */
extern "C" void setWindowSize(int width, int height) {
    paintAreaState.windowWidth = width;
    paintAreaState.windowHeight = height;
    paintAreaState.screenSizeChanged = true;
    paintAreaState.redraw = true;
    logoss << "width " << width << " height " << height;
    pwLog.info("JsApi", "setWindowSize");
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

    logoss << "width " << width << " height " << height;
    pwLog.info("JsApi", "setDefaultCanvasSize");
}

/**
 * Set the initial margin used when a new canvas is drawn.
 */
extern "C" void setInitialMargin(int margin) {
    initialMargin = margin;
    logoss << "margin " << margin;
    pwLog.info("JsApi", "setInitialMargin");
}

/**
 * Sets the canvas size.
 */
extern "C" void setCanvasSize(int width, int height) {
    paintAreaState.canvasWidth = width;
    paintAreaState.canvasHeight = height;
    logoss << "width " << width << " height " << height;
    pwLog.info("JsApi", "setCanvasSize");
}

/**
 * Set the color for the base layer, no alpha.
 */
extern "C" void setDefaultBaseLayerColor(int r, int g, int b) {
    defaultBaseLayerColor = Color(r, g, b, 255);
    logoss << "r " << r << " g " << g << " b " << b;
    pwLog.info("JsApi", "setDefaultBaseLayerColor");
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

