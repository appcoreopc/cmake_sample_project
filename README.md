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




