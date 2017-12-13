
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
#include "PaintUtil.h"
#include "PaintAreaState.h"
#include "Layers.h"

extern bool hasBeenInitialized;
extern int standardWidth;
extern int defaultCanvasWidth;
extern int defaultCanvasHeight;
extern int initialMargin;
extern Color defaultBaseLayerColor;
extern PaintAreaState paintAreaState;

extern "C" void init();
extern "C" void setPaBackgroundColor(int r, int g, int b);
extern "C" void setStandardWidth(int width);
extern "C" void setWindowSize(int width, int height);
extern "C" void setDefaultCanvasSize(int width, int height);
extern "C" void setInitialMargin(int margin);
extern "C" void setCanvasSize(int width, int height);
extern "C" void setdefaultBaseLayerColor(int r, int g, int b);

//debug
extern "C" void sayHello();
extern "C" void drawDebug();


#endif
