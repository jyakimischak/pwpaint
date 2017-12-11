
//******************************************************
// State functions for the paint area
// Author: Jonas Yakimischak - Poorwill Games
//******************************************************

#include "PaintMain.h"
#include "PaintAreaState.h"

using namespace std;

int standardWidth = 0;
PaintAreaState paintAreaState;



//***********************************************************************************************
// PaintAreaState
//***********************************************************************************************

PaintAreaState::PaintAreaState() {
    backgroundColor = Color(0, 0, 0, 255);
    backgroundColorDirty = false;
    windowWidth = 0;
    windowWidthDirty = false;
    windowHeight = 0;
    windowHeightDirty = false;
}

void PaintAreaState::setBackgroundColor(Color backgroundColor) {
    this->backgroundColor = backgroundColor;
    backgroundColorDirty = true;
}
Color PaintAreaState::getBackgroundColor() {
    return backgroundColor;
}

void PaintAreaState::setWindowWidth(int width) {
    windowWidth = width;
    windowWidthDirty = true;
}
int PaintAreaState::getWindowWidth() {
    return windowWidth;
}

void PaintAreaState::setWindowHeight(int height) {
    windowHeight = height;
    windowHeightDirty = true;
}
int PaintAreaState::getWindowHeight() {
    return windowHeight;
}


/**
 * Apply dirty properties to the paint area.
 */
void PaintAreaState::apply() {
    //it's important for the window size to be setup to ensure it's there for other updates.
    if(windowWidthDirty || windowHeightDirty) {
        cout << "Updating window width and height " << windowWidth << ", " << windowHeight << endl;
        windowWidthDirty = false;
        windowHeightDirty = false;
        screen = SDL_SetVideoMode(windowWidth, windowHeight, 32, SDL_SWSURFACE);
    }
    if(backgroundColorDirty) {
        cout << "Updating backgroundColor " << backgroundColor.r << "," << backgroundColor.g << "," << backgroundColor.b << "," << backgroundColor.a << endl;
        backgroundColorDirty = false;
        SDL_FillRect(screen, NULL, SDL_MapRGB(screen->format, backgroundColor.r, backgroundColor.g, backgroundColor.b));
    }
}