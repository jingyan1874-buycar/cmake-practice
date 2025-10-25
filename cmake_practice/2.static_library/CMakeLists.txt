cmake_minimum_required(VERSION 3.5)

project(static_program)

add_library(love_library
    STATIC
    src/love.cpp
)

target_include_directories(love_library
    PUBLIC
    ${PROJECT_SOURCE_DIR}/include
)

add_executable(${PROJECT_NAME} 
    src/main.cpp
)

target_link_libraries(${PROJECT_NAME}
    PRIVATE
    love_library
)