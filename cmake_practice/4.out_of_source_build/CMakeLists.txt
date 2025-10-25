cmake_minimum_required(VERSION 3.5)

project(out_build_program)

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/include/shared) #动态库放置目录
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin) #可执行文件放置目录

add_library(love_library SHARED
    src/love.cpp
)

add_library(love::library ALIAS love_library)

target_include_directories(love_library
    PUBLIC
    ${PROJECT_SOURCE_DIR}/include
)

add_executable(${PROJECT_NAME}
    src/main.cpp
)

target_link_libraries(${PROJECT_NAME}
    PRIVATE
    love::library
)