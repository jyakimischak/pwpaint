
//******************************************************
// Handle drawing the layers
// Author: Jonas Yakimischak - Poorwill Games
//******************************************************

#include "Layers.h"

using namespace std;


Color defaultBaseLayerColor = Color(255, 255, 255, 255);


/**
 * Constructor
 */
Layers::Layers() {

}

/**
 * Setup the base layer and a single drawing layer for a new drawing based on the paintAreaState.
 */
void Layers::newDrawing() {
    cout << "layers newDrawing" << endl;
}

/**
 * Run through all the layers and draw them to the screen.
 */
void Layers::draw() {

    // SDL_BlitSurface(s,NULL,screen,&offsets);
}

/**
 * Draw the base layer (drawing surface that will end up transparent when the image is exported)
 */
void Layers::drawBaseLayer() {

    // SDL_Surface* s = SDL_CreateRGBSurface (
    //     0, // Uint32 flags,
    //     paintAreaState.canvasWidth, // int    width,
    //     paintAreaState.canvasHeight, // int    height,
    //     32, // int    depth,
    //     0, // Uint32 Rmask,
    //     0, // Uint32 Gmask,
    //     0, // Uint32 Bmask,
    //     100  // Uint32 Amask
    // );
    // SDL_FillRect(s, NULL, SDL_MapRGB(s->format, 255, 255, 255));
    // SDL_Rect offsets;
    // offsets.x=0;
    // offsets.y=0;
}



