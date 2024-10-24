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
