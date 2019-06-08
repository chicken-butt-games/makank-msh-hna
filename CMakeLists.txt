cmake_minimum_required(VERSION 3.14)
project(MakankMshHna VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 17)


add_executable(MakankMshHna src/main.cpp)

target_include_directories(
        MakankMshHna
        PUBLIC
        ../NotAVegetable/src
        ../NotAVegetable/vendor/spdlog/include
        )

target_link_libraries(
        MakankMshHna
        PRIVATE
        /Users/muhamedhassan/Dropbox/Work/Code/CLionProjects/NotAVegetable/bin/cmake-build-debug/libNotAVegetable.dylib
)

