
//******************************************************
// Classes and functions that don't fit nicely anywhere else
// Author: Jonas Yakimischak - Poorwill Games
//******************************************************

#ifndef PAINT_UTIL_H
#define PAINT_UTIL_H

#include <iostream>
#include <SDL/SDL.h>
#include "SDL_gfxPrimitives.h"
#include <unistd.h>
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


#endif
