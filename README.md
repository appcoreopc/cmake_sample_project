Cmake sample build project. 

Codes are placed into their own directory  and it can be compile individually by executing the following command (except theappp).

1. cmake . 
2. msbuild ALL_build.vcproj

src-> Libutil 
src-> theappp  
src-> mymath
src-> sharedmod 

To link all these files together, you need to setup CMakeLists.txt in theApp - where objects file are linked together to form an executable.
This has been tested in cmake + vs2017. 


Since the CMakeLists.txt for object libraries are pretty standard, you can go through yourself. 

We only talk about (cmake_sample_project/src/theapp/CMakeLists.txt) 

Noticed we have 

include_directories(${CMAKE_SOURCE_DIR}/mymath) - which is used for headers compilation. 

next you will noticed "target_link_libraries" which is used by linker for function / method linking purposes. You have to get libmath.lib right, which is the name given to our  myMath library. Please take a look at the CMakeLists.txt in MyMath folder.

target_link_libraries(theapp debug sharedmod.lib libmath.lib)




