
//******************************************************
// Handle drawing the layers
// Author: Jonas Yakimischak - Poorwill Games
//******************************************************

#ifndef LAYERS_H
#define LAYERS_H


#include <iostream>
#include <SDL/SDL.h>
#include "SDL_gfxPrimitives.h"
#include <emscripten.h>
#include "PaintUtil.h"

extern Color defaultBaseLayerColor;

class Layers {
    public:
        Color baseLayerColor;
        SDL_Surface baseLayerSurface;

        Layers();
        void newDrawing();
        void draw();
    private:
        void drawBaseLayer();
};


#endif
