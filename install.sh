#!/bin/bash

if ! [ -x "$(command -v cmake)" ]; then
  echo "Error: cmake is not installed." >&2
  exit 1
fi

mkdir -p build
cd build

cmake ..
make

sudo cp 15Puzzle /usr/local/bin/

echo "Installation complete! Run '15Puzzle' to start the game."