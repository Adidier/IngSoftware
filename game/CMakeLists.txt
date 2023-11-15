cmake_minimum_required(VERSION 3.0.0)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(Tank)

include_directories("../ExternalLibs/SDL2/include")
include_directories("../ExternalLibs/SDL2_image/include")

add_library(Vector "src/Vector.cpp")

include_directories("include")

ADD_EXECUTABLE(Tank "main.cpp") 


link_directories("../ExternalLibs/SDL2-2.24.1/lib/x86")
link_directories("../ExternalLibs/SDL2_image-2.6.2/lib/x86")
 
target_link_libraries(Tank "SDL2" "SDL2_image" "SDL2main")
