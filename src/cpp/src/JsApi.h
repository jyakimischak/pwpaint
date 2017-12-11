
//******************************************************
// Functions exposed through to JavaScript
// Author: Jonas Yakimischak - Poorwill Games
//******************************************************

#ifndef JS_API_H
#define JS_API_H

#include <iostream>
#include <SDL/SDL.h>
#include "SDL_gfxPrimitives.h"
#include <emscripten.h>

extern int standardWidth;
extern PaintAreaState paintAreaState;

extern "C" void setPaBackgroundColor(int r, int g, int b);
extern "C" void setStandardWidth(int width);
extern "C" void setWindowSize(int width, int height);

//debug
extern "C" void sayHello();
extern "C" void drawDebug();


#endif
