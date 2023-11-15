cmake_minimum_required(VERSION 3.0.0)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(Tank)

include_directories("ExternalLibs/SDL2/include")
include_directories("ExternalLibs/SDL2_image/include")
include_directories("include")

set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})

ADD_EXECUTABLE(Tank "main.cpp"
		    "src/Box.cpp"
		    "src/BoxData.cpp"
		    "src/Vector.cpp"
		    "src/Map.cpp") 
 
target_link_libraries(Tank "../ExternalLibs/SDL2/lib/x64/SDL2" "../ExternalLibs/SDL2_image/lib/x64/SDL2_image" "../ExternalLibs/SDL2/lib/x64/SDL2main")
