add_library(libmath STATIC MyMath.h MyMath.cpp)

include_directories(${CMAKE_SOURCE_DIR}/../include)
add_definitions(-DEXPMODULE)