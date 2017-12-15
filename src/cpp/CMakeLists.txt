
CMAKE_MINIMUM_REQUIRED(VERSION 3.9.1)
PROJECT(pwpaint)

SET(CMAKE_C_COMPILER emcc)
SET(CMAKE_CXX_COMPILER em++)
#SET(CMAKE_CXX_STANDARD 11)

STRING(CONCAT EXPORTED_FUNCTIONS "-s "
    "EXPORTED_FUNCTIONS=\"["
        "'_main', "
        "'_init',"
        "'_setStandardWidth', "
        "'_setWindowSize', "
        "'_setDefaultCanvasSize', "
        "'_setInitialMargin', "
        "'_setCanvasSize',"
        "'_setDefaultBaseLayerColor',"
        "'_sayHello', "
        "'_drawDebug', "
        "'_setPaBackgroundColor' "
    "]\" "
    "-s USE_SDL=2 "
    "-s USE_SDL_IMAGE=2 "
#    "-s WASM=1 "
)
SET(CMAKE_CXX_FLAGS ${EXPORTED_FUNCTIONS})

FILE(GLOB sources src/*.cpp)
ADD_EXECUTABLE(pwpaint.html ${sources})


