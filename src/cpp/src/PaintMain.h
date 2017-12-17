
//******************************************************
// Author: Jonas Yakimischak - Poorwill Games
//******************************************************

#ifndef PAINT_MAIN_H
#define PAINT_MAIN_H

#include <iostream>
#include <SDL2/SDL.h>
// #include "SDL_gfxPrimitives.h"
#include <unistd.h>
#include <emscripten.h>
#include "PwLog.h"
#include "PaintUtil.h"
#include "PaintAreaState.h"
#include "Brushes.h"

extern PwLog pwLog;
extern SDL_Surface* screenPtr;
extern SDL_Renderer *rendererPtr;

//***********************************************************************************************
// PwPaint.cpp main
//***********************************************************************************************

void oneIter();
void handleInput();


#endif
