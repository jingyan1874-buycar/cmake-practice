cmake_minimum_required(VERSION 3.5)

project(proto_test)

# 设置输出目录
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)     # 动态库输出到 lib 目录
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)     # 可执行文件输出到 bin 目录
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)     # 静态库输出到 lib 目录

find_package(Protobuf 3.21.12 REQUIRED)

if(Protobuf_FOUND)
    message("Protobuf库已经找到")
else()
    message("Protobuf库查找失败")
endif()

set(SRC_LIST
    src/main.cpp
)

add_library(family_library
    SHARED
    src/family.pb.cc
)

add_library(family::library ALIAS family_library)

target_include_directories(family_library
    PUBLIC
    include
)

add_executable(${PROJECT_NAME} ${SRC_LIST})

target_link_libraries(${PROJECT_NAME}
    PRIVATE
    family::library
    protobuf::libprotobuf
)