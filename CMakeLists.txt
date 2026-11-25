cmake_minimum_required(VERSION 3.16)
project(my_project LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_library(matrix_lib STATIC src/matrix_lib.cpp)
target_include_directories(matrix_lib PUBLIC include)
target_compile_options(matrix_lib PRIVATE -Wall -Wextra -Wpedantic)

add_executable(app main.cpp)
target_link_libraries(app PRIVATE matrix_lib)
target_compile_options(app PRIVATE -Wall -Wextra -Wpedantic)
