<p align="center">
  <img src="https://avatars.githubusercontent.com/u/140686560?v=4" alt="Logo" width="150">
</p>

<h1 align="center">dask-58.github.io</h1>

<p align="center">
  <a href="https://choosealicense.com/licenses/mit/">
    <img src="https://img.shields.io/badge/License-MIT-green.svg" alt="MIT License">
  </a>
  <img src="https://img.shields.io/github/repo-size/dask-58/15.puzzle" alt="GitHub repo size">
  <img src="https://img.shields.io/github/languages/top/dask-58/15.puzzle" alt="GitHub top language">
  <img src="https://img.shields.io/twitter/follow/dask_58" alt="Twitter Follow">
</p>

Make sure you have the following installed.

* CMake (version 3.10 or later)
* SFML (version 2.5 or later)
* C++17 compatible compiler

## Installation

### On Unix-like systems (Linux, macOS)

1. Clone the repository:
   ```bash
      git clone https://github.com/dask-58/15.puzzle.git && cd 15.puzzle
   ```

2. Run the installation script:
   ```bash
    ./install.sh
   ```

   This script will build and install the game for you.

### On Windows

1. Clone the repository:
   ```bash
      git clone git clone https://github.com/dask-58/15.puzzle.git
      cd 15.puzzle
   ```

2. Create a build directory:
   ```bash
      mkdir build
      cd build
   ```

3. Configure the project:
   ```bash
      cmake ..
   ```

4. Build the project:
   ```bash
      cmake --build .
   ```

5. Install the project:
   ```bash
      cmake --install .
   ```
