cmake_minimum_required(VERSION 3.10)
project(15Puzzle)

set(CMAKE_CXX_STANDARD 17)

set(SFML_DIR "$(brew --prefix sfml)/lib/cmake/SFML")

find_package(SFML 2.5 COMPONENTS graphics window system REQUIRED)

add_executable(15Puzzle main.cpp)
target_link_libraries(15Puzzle sfml-graphics sfml-window sfml-system)