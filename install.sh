#!/bin/bash

set -e

command_exists() {
    command -v "$1" >/dev/null 2>&1
}

if ! command_exists cmake; then
    echo "Error: cmake is not installed. Please install cmake and try again."
    exit 1
fi

if ! command_exists make; then
    echo "Error: make is not installed. Please install make and try again."
    exit 1
fi

if [ -d "build" ]; then
    echo "Cleaning existing build directory..."
    rm -rf build/*
else
    echo "Creating build directory..."
    mkdir build
fi

cd build

echo "Configuring the project..."
cmake ..

echo "Building the project..."
cmake --build .

echo "Installing the project..."
sudo cmake --install .

echo "Installation complete."
echo "Run: "
echo "cd build and then ./15Puzzle"
