
//******************************************************
// Author: Jonas Yakimischak - Poorwill Games
//******************************************************

#ifndef PAINT_AREA_STATE_H
#define PAINT_AREA_STATE_H

#include <iostream>
#include <SDL/SDL.h>
#include "SDL_gfxPrimitives.h"
#include <emscripten.h>
#include "PaintUtil.h"
#include "Layers.h"

extern SDL_Surface* screen;

/**
 * That state that is held and interacted with for the paint area.
 */
class PaintAreaState {
    public:
        bool screenSizeChanged;
        bool redraw;
        Color backgroundColor;
        int windowWidth;
        int windowHeight;
        int canvasWidth;
        int canvasHeight;

        Layers layers;

        PaintAreaState();
        void newDrawing();
        void newDrawing(int width, int height);
        void apply();
        void drawCanvas();
};
extern PaintAreaState paintAreaState;

#endif

