cmake_minimum_required(VERSION 3.5)

project(include_header)

set(SRC_LIST 
    src/main.cpp 
    src/love.cpp
)

add_executable(${PROJECT_NAME} ${SRC_LIST})

target_include_directories(${PROJECT_NAME}
    PRIVATE
    ${PROJECT_SOURCE_DIR}/include
)