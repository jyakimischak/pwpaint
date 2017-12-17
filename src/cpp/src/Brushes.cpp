
//******************************************************
// The brushes and their textures.
// Author: Jonas Yakimischak - Poorwill Games
//******************************************************

#include "Brushes.h"

using namespace std;

map<string, Brush> brushes;


/**
 * Load all of the default brushes.
 */
void loadDefaultBrushes() {
    brushes["TestBrush"] = Brush("TestBrush", "images/brushes/TestBrush.png");
}


//******************************************************************************************************************************
// Brush
//******************************************************************************************************************************

/**
 * Constructor
 */
Brush::Brush() {
    name = "NOT_SET";
    fileName = "NOT_SET";
}

/**
 * Constructor
 */
Brush::Brush(string name, string fileName) {
    this->name = name;
    this->fileName = fileName;

    SDL_Surface* tempSurPtr = IMG_Load(fileName.c_str());
    texturePtr = SDL_CreateTextureFromSurface(rendererPtr, tempSurPtr);
    if(texturePtr == NULL) {
        SDL_FreeSurface(tempSurPtr);
        logoss << "Could not load brush " << name << " file " << fileName << ": " << SDL_GetError();
        pwLog.error("Brushes", "Brush", "Brush");
        return;
    }
    SDL_FreeSurface(tempSurPtr);
}


// bool TextureManager::load(std::string fileName, std::string id, SDL_Renderer* pRenderer)
// {
//   SDL_Surface* pTempSurface = IMG_Load(fileName.c_str());

//   if(pTempSurface == 0)
//   {
//     return false;
//   }

//   SDL_Texture* pTexture = 
//   SDL_CreateTextureFromSurface(pRenderer, pTempSurface);

//   SDL_FreeSurface(pTempSurface);

//   // everything went ok, add the texture to our list
//   if(pTexture != 0)
//   {
//     m_textureMap[id] = pTexture;
//     return true;
//   }

//   // reaching here means something went wrong
//   return false;
// }


