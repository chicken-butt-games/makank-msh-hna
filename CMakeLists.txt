cmake_minimum_required(VERSION 3.14)
project(MakankMshHna)

set(CMAKE_CXX_STANDARD 17)

add_executable(MakankMshHna main.cpp)

target_include_directories(MakankMshHna
    PUBLIC
    /Users/muhamedhassan/Dropbox/Work/Code/CLionProjects/NotAVegetable
    )

target_link_libraries(MakankMshHna
    /Users/muhamedhassan/Dropbox/Work/Code/CLionProjects/NotAVegetable/cmake-build-debug/libNotAVegetable.a
    )

