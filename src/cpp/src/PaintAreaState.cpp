
//******************************************************
// State functions for the paint area
// Author: Jonas Yakimischak - Poorwill Games
//******************************************************

#include <iostream>
#include <SDL/SDL.h>
#include "SDL_gfxPrimitives.h"
#include <emscripten.h>
#include "PaintMain.h"
#include "PaintAreaState.h"

using namespace std;

PaintAreaState paintAreaState;

/**
 * Set the background color of the paint area.
 */
extern "C" void setPaBackgroundColor(int r, int g, int b) {
    paintAreaState.setBackgroundColor(Color(r, g, b, 255));
}


//***********************************************************************************************
// PaintAreaState
//***********************************************************************************************

PaintAreaState::PaintAreaState() {
    backgroundColorDirty = false;
}

void PaintAreaState::setBackgroundColor(Color backgroundColor) {
    this->backgroundColor = backgroundColor;
    backgroundColorDirty = true;
}
Color PaintAreaState::getBackgroundColor() {
    return backgroundColor;
}

/**
 * Apply dirty properties to the paint area.
 */
void PaintAreaState::apply() {
    if(backgroundColorDirty) {
        cout << "Updating backgroundColor " << backgroundColor.r << "," << backgroundColor.g << "," << backgroundColor.b << "," << backgroundColor.a << endl;
        backgroundColorDirty = false;
        SDL_FillRect(screen, NULL, SDL_MapRGB(screen->format, backgroundColor.r, backgroundColor.g, backgroundColor.b));
    }
}