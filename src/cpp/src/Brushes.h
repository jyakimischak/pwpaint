
//******************************************************
// The brushes and their textures.
// Author: Jonas Yakimischak - Poorwill Games
//******************************************************

#ifndef BRUSHES_H
#define BRUSHES_H

#include <iostream>
#include <sstream>
#include <SDL2/SDL.h>
#include <SDL_image.h>
#include <emscripten.h>
#include <map>
#include "PwLog.h"

extern PwLog pwLog;
extern std::ostringstream logoss;

void loadDefaultBrushes();

/**
 * Holds a brush definition, texture, etc.
 */
class Brush {
    public:
        std::string name;
        std::string fileName;
        SDL_Texture* texturePtr;

        Brush();
        Brush(std::string name, std::string fileName);
    private:
        void load();
};

extern std::map<std::string, Brush> brushes;
extern SDL_Renderer *rendererPtr;

#endif
