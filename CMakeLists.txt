cmake_minimum_required(VERSION 3.21)
project(WraithSandbox VERSION 0.0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)

add_subdirectory(external/WraithEngine)

add_executable(${PROJECT_NAME} src/Main.cpp)

target_link_libraries(${PROJECT_NAME} WraithEngine)
target_include_directories(${PROJECT_NAME} PRIVATE WraithEngine)
