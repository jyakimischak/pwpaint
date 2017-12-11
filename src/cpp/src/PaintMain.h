
//******************************************************
// Author: Jonas Yakimischak - Poorwill Games
//******************************************************

#ifndef PAINT_MAIN_H
#define PAINT_MAIN_H

#include <iostream>
#include <SDL/SDL.h>
#include "SDL_gfxPrimitives.h"
#include <emscripten.h>


class Color {
    public:
        int r;
        int g;
        int b;
        int a;
        Color();
        Color(int r, int g, int b, int a);
};

extern SDL_Surface* screen;

//***********************************************************************************************
// PwPaint.cpp main
//***********************************************************************************************

void oneIter();
void handleInput();


#endif
