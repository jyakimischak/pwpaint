
//******************************************************
// Author: Jonas Yakimischak - Poorwill Games
//******************************************************

#ifndef PAINT_MAIN_H
#define PAINT_MAIN_H


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

extern "C" void setDisplaySize(int width, int height);
extern "C" void sayHello();
extern "C" void drawDebug();

#endif
