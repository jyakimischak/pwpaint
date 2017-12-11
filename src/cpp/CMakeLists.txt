
CMAKE_MINIMUM_REQUIRED(VERSION 3.9.1)
PROJECT(pwpaint)

SET(CMAKE_C_COMPILER emcc)
SET(CMAKE_CXX_COMPILER em++)
#SET(CMAKE_CXX_STANDARD 11)

STRING(CONCAT EXPORTED_FUNCTIONS "-s EXPORTED_FUNCTIONS=\"["
    "'_main',"
    "'_setStandardWidth',"
    "'_setWindowSize',"
    "'_sayHello',"
    "'_drawDebug',"
    "'_setPaBackgroundColor'"
"]\"")
SET(CMAKE_CXX_FLAGS ${EXPORTED_FUNCTIONS})

FILE(GLOB sources src/*.cpp)
ADD_EXECUTABLE(pwpaint.html ${sources})


