
//******************************************************
// Author: Jonas Yakimischak - Poorwill Games
//******************************************************

#ifndef PAINT_AREA_STATE_H
#define PAINT_AREA_STATE_H

#include <iostream>
#include <SDL2/SDL.h>
// #include "SDL_gfxPrimitives.h"
#include <emscripten.h>
#include "PaintUtil.h"

extern SDL_Surface* screenPtr;
extern Color defaultBaseLayerColor;


/**
 * That state that is held and interacted with for the paint area.
 */
class PaintAreaState {
    public:
        bool screenSizeChanged;
        bool redraw;
        int windowWidth;
        int windowHeight;
        int canvasWidth;
        int canvasHeight;
        Color baseLayerColor;

        // Layers layers;

        PaintAreaState();
        void newDrawing();
        void newDrawing(int width, int height);
        void apply();

    private:
        SDL_Surface* baseLayerSurfacePtr;

        void drawBaseLayer();
        void drawOtherLayers();
        void drawCanvas();
};
extern PaintAreaState paintAreaState;

#endif

