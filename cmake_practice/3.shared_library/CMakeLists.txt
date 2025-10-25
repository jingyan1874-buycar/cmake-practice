cmake_minimum_required(VERSION 3.5)

project(shared_program)

add_library(love_library SHARED
    src/love.cpp
)

add_library(love::library ALIAS love_library)

target_include_directories(love_library #这里不可以使用别名
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