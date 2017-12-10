
//******************************************************
// Main PwPaint header file.  This holds the entrypoint and primary functionality.
// Author: Jonas Yakimischak - Poorwill Games
//******************************************************

using namespace std;

SDL_Surface* screen = NULL;
SDL_Event e;

void oneIter();
void handleInput();

extern "C" void setDisplaySize(int width, int height);
extern "C" void sayHello();