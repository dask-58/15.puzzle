cmake_minimum_required(VERSION 3.10)
project(15Puzzle)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(SFML 2.5 COMPONENTS graphics window system REQUIRED)

file(GLOB_RECURSE SOURCES "src/*.cpp")

add_executable(${PROJECT_NAME} ${SOURCES})

target_include_directories(${PROJECT_NAME} PRIVATE include)

target_link_libraries(${PROJECT_NAME} PRIVATE sfml-graphics sfml-window sfml-system)

file(COPY Images DESTINATION ${CMAKE_BINARY_DIR})

install(TARGETS ${PROJECT_NAME} DESTINATION bin)
install(DIRECTORY Images DESTINATION bin)