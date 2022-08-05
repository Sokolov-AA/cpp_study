cmake_minimum_required (VERSION 2.6)



project (BTtB_and_SS2)
set(CMAKE_CPP_COMPILER g++)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -O3")


set(SOURCES
    src/main.cpp
)

add_executable(BTtB_and_SS2 ${SOURCES})


target_include_directories(BTtB_and_SS2
    PRIVATE 
        ${PROJECT_SOURCE_DIR}/include
)

