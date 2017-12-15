
//******************************************************
// State functions for the paint area
// Author: Jonas Yakimischak - Poorwill Games
//******************************************************

#include "PaintAreaState.h"

using namespace std;

int standardWidth = 0;
int defaultCanvasWidth = 0;
int defaultCanvasHeight = 0;
int initialMargin = 0;
PaintAreaState paintAreaState;
Color backgroundColor = Color(100, 100, 100, 255);
Color defaultBaseLayerColor = Color(255, 255, 255, 255);;



//***********************************************************************************************
// PaintAreaState
//***********************************************************************************************

PaintAreaState::PaintAreaState() {
    screenSizeChanged = false;
    redraw = false;
    canvasWidth = defaultCanvasWidth;
    canvasHeight = defaultCanvasHeight;
}


/**
 * Start up a new drawing, with all the defaults.
 */
void PaintAreaState::newDrawing() {
    newDrawing(defaultCanvasWidth, defaultCanvasHeight);
    screenSizeChanged = true;
    redraw = true;
}

/**
 * Start up a new drawing, with given dimensions.
 */
void PaintAreaState::newDrawing(int width, int height) {
    cout << "New drawing" << endl;
    redraw = false;
    canvasWidth = width;
    canvasHeight = height;

    baseLayerColor = defaultBaseLayerColor;
    baseLayerSurfacePtr = SDL_CreateRGBSurface (
        0, // Uint32 flags,
        100,
        100,
        // paintAreaState.canvasWidth, // int    width,
        // paintAreaState.canvasHeight, // int    height,
        32, // int    depth,
        0, // Uint32 Rmask,
        0, // Uint32 Gmask,
        0, // Uint32 Bmask,
        100  // Uint32 Amask
    );
}


/**
 * Apply any dirty properties in the paint area state to the screen.
 */
void PaintAreaState::apply() {
    if(screenSizeChanged) {
        screenSizeChanged = false;
        cout << "Updating window width and height " << windowWidth << ", " << windowHeight << endl;
        // screen = SDL_SetVideoMode(windowWidth, windowHeight, 32, SDL_SWSURFACE);
        SDL_FillRect(screenPtr, NULL, SDL_MapRGB(screenPtr->format, backgroundColor.r, backgroundColor.g, backgroundColor.b));
    }
    if(redraw) {
        redraw = false;
        cout << "redraw" << endl;
        drawCanvas();

        // SDL_FillRect(screen, NULL, SDL_MapRGB(screen->format, backgroundColor.r, backgroundColor.g, backgroundColor.b));
        // filledEllipseRGBA(screen,
        //                     windowWidth / 2, windowHeight / 2,
        //                     25, 25,
        //                     0, 255, 0, 255);
    }
}

/**
 * Draw all the layers of the canvas.
 */
void PaintAreaState::drawCanvas() {
    SDL_FillRect(baseLayerSurfacePtr, NULL, SDL_MapRGB(baseLayerSurfacePtr->format, 255, 255, 255));
    SDL_Rect offsets;
    offsets.x=0;
    offsets.y=0;
    SDL_BlitSurface(baseLayerSurfacePtr, NULL, screenPtr, &offsets);
}










// //******************************************************
// // Handle drawing the layers
// // Author: Jonas Yakimischak - Poorwill Games
// //******************************************************

// #include "Layers.h"

// using namespace std;


// Color defaultBaseLayerColor = Color(255, 255, 255, 255);

// /**
//  * Constructor
//  */
// Layers::Layers() {

// }

// /**
//  * Setup the base layer and a single drawing layer for a new drawing based on the paintAreaState.
//  */
// void Layers::newDrawing() {
//     cout << "layers newDrawing" << endl;
//     baseLayerColor = defaultBaseLayerColor;
//     baseLayerSurface = SDL_CreateRGBSurface (
//         0, // Uint32 flags,
//         100,
//         100,
//         // paintAreaState.canvasWidth, // int    width,
//         // paintAreaState.canvasHeight, // int    height,
//         32, // int    depth,
//         0, // Uint32 Rmask,
//         0, // Uint32 Gmask,
//         0, // Uint32 Bmask,
//         100  // Uint32 Amask
//     );
    
// }

// /**
//  * Run through all the layers and draw them to the screen.
//  */
// void Layers::draw() {
//         // SDL_FillRect(screen, NULL, SDL_MapRGB(screen->format, baseLayerColor.backgroundColor.r, paintAreaState.backgroundColor.g, paintAreaState.backgroundColor.b));

//     // SDL_BlitSurface(s,NULL,screen,&offsets);
// }

// /**
//  * Draw the base layer (drawing surface that will end up transparent when the image is exported)
//  */
// void Layers::drawBaseLayer() {
//     // SDL_Surface* s = SDL_CreateRGBSurface (
//     //     0, // Uint32 flags,
//     //     paintAreaState.canvasWidth, // int    width,
//     //     paintAreaState.canvasHeight, // int    height,
//     //     32, // int    depth,
//     //     0, // Uint32 Rmask,
//     //     0, // Uint32 Gmask,
//     //     0, // Uint32 Bmask,
//     //     100  // Uint32 Amask
//     // );



//     // SDL_Surface* s = SDL_CreateRGBSurface (
//     //     0, // Uint32 flags,
//     //     paintAreaState.canvasWidth, // int    width,
//     //     paintAreaState.canvasHeight, // int    height,
//     //     32, // int    depth,
//     //     0, // Uint32 Rmask,
//     //     0, // Uint32 Gmask,
//     //     0, // Uint32 Bmask,
//     //     100  // Uint32 Amask
//     // );
//     // SDL_FillRect(s, NULL, SDL_MapRGB(s->format, 255, 255, 255));
//     // SDL_Rect offsets;
//     // offsets.x=0;
//     // offsets.y=0;
// }



