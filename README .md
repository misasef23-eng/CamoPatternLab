# CamoPatternLab

**Explore. Generate. Create.**

CamoPatternLab is a C++-based pixel pattern processing tool focused on
camouflage pattern reconstruction, color customization, and
pixel-perfect image scaling.

The project is designed to turn source images into clean, customizable
pixel patterns while preserving the sharp edges that define pixel art.

## Features

-   **Pattern Reconstruction** --- Convert source images into
    pixel-based patterns.
-   **Color Quantization** --- Reduce an image to a configurable set of
    dominant colors.
-   **Color Palette Editor** --- Customize the colors used in a pattern.
-   **Pixel Scaling** --- Resize patterns with Nearest Neighbor
    interpolation to preserve crisp pixel boundaries.
-   **PNG Export** --- Save generated patterns as PNG images.

## Built With

-   **C++**
-   **OpenCV 5**
-   **GCC / Clang**
-   **pkg-config**

## Requirements

-   A C++17-compatible compiler
-   OpenCV 5
-   pkg-config

## Installation

### macOS (Homebrew)

Install OpenCV:

``` bash
brew install opencv
```

If `pkg-config` cannot find OpenCV, add Homebrew's pkg-config directory
to `PKG_CONFIG_PATH`:

``` bash
export PKG_CONFIG_PATH="$(brew --prefix)/lib/pkgconfig:$PKG_CONFIG_PATH"
```

Verify the installation:

``` bash
pkg-config --modversion opencv5
```

## Build

Compile the source file with:

``` bash
g++ -std=c++17 main.cpp -o camopatternlab $(pkg-config --cflags --libs opencv5)
```

Adjust the source file name and build command to match your project
structure.

## Project Vision

CamoPatternLab aims to grow from an image-processing utility into a
flexible workspace for camouflage pattern design and procedural pattern
generation.

Potential areas of future development include:

-   Procedural pattern generation
-   Seed-based pattern reproducibility
-   Advanced palette management
-   Pattern density and resolution controls
-   Additional export formats

## License

No license has been specified yet.
