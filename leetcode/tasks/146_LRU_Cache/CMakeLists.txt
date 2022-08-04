cmake_minimum_required (VERSION 2.6)



project (LRU)
set(CMAKE_CPP_COMPILER g++)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -O3")


set(SOURCES
    src/LRUCache.cpp
    src/main.cpp
)

add_executable(LRU ${SOURCES})


target_include_directories(LRU
    PRIVATE 
        ${PROJECT_SOURCE_DIR}/include
)

