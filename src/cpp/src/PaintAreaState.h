
//******************************************************
// Author: Jonas Yakimischak - Poorwill Games
//******************************************************

#ifndef PAINT_AREA_STATE_H
#define PAINT_AREA_STATE_H

#include <iostream>
#include <SDL/SDL.h>
#include "SDL_gfxPrimitives.h"
#include <emscripten.h>

/**
 * That state that is held and interacted with for the paint area.
 */
class PaintAreaState {
    public:
        PaintAreaState();

        void setBackgroundColor(Color backgroundColor);
        Color getBackgroundColor();

        void setWindowWidth(int width);
        int getWindowWidth();

        void setWindowHeight(int height);
        int getWindowHeight();

        void apply();
    private:
        Color backgroundColor;
        bool backgroundColorDirty;
        int windowWidth;
        bool windowWidthDirty;
        int windowHeight;
        bool windowHeightDirty;
};
extern PaintAreaState paintAreaState;

#endif

