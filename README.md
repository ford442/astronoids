

## Dependencies

* SDL2
* SDL_Mixer2
* CMake
* Emscripten (for web builds)

## Build

### macOS and Linux

The project currently depends on SDL2 and SDL2_mixer, and builds are handled by CMake. Once those dependencies are installed (e.g. using Homebrew or apt), native macOS and Linux builds are relatively simple:

    mkdir build
    cd build
    cmake ..
    make

### Emscripten

The project can also be compiled to Javascript using Emscripten.

    mkdir embuild
    cd embuild
    emcmake cmake ..
    emmake make
    emrun asteroids.html

Emscripten builds are only supported on Linux and macOS systems.
