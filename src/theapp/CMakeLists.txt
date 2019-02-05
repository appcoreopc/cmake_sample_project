include_directories(${CMAKE_SOURCE_DIR}/../include)
include_directories(${CMAKE_SOURCE_DIR}/libutil)
include_directories(${CMAKE_SOURCE_DIR}/sharedmod)
include_directories(${CMAKE_SOURCE_DIR}/mymath)

link_directories(${CMAKE_LIBRARY_OUTPUT_DIRECTORY})

add_executable(theapp main.cpp)

target_link_libraries(theapp debug sharedmod.lib)
target_link_libraries(theapp optimized sharedmod.lib)

#target_link_libraries(theapp debug sharedmod.lib libmath.lib)
#target_link_libraries(theapp optimized sharedmod.lib libmath.lib)