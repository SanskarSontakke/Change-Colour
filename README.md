# Change Colour Library
> A lightweight C/C++ library for changing terminal text colors using ANSI escape codes.

![Change Colour Demo](change-color-demo.png)

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](LICENSE)
[![Language: C](https://img.shields.io/badge/Language-C-blue.svg)]()

## What it does

Provides functions to set terminal text foreground colors (8 standard ANSI colors), text styles (normal or bold), and reset formatting to default. Works from both C and C++ code. The library generates ANSI escape sequences at runtime and is compiled into a static library for easy linking.

## Why I built it

Learning project to understand ANSI escape sequences, C library structure, and how to write header-only logic that works across both C and C++.

## Tech stack

- C (core library)
- ANSI escape codes (terminal control)
- Make (build system)

## Getting started

Clone the repository:

```bash
git clone https://github.com/SanskarSontakke/Change-Colour-C-Lib.git
cd Change-Colour-C-Lib
```

Build the library and demo programs:

```bash
make
```

Run the C demo:

```bash
./demo
```

Run the C++ demo:

```bash
./demo_cpp
```

## How it works

The library defines two enums (`TextColor` for 8 ANSI colors and `TextStyle` for normal/bold) and a core function `change_colour(color, style)` that constructs and prints ANSI escape sequences (`\033[Xm` format). Helper functions like `change_colour_to_red()` wrap the core function. The `reset_colour()` function sends the reset sequence (`\033[0m`).

**File structure:**
- `lib/change_colour.h`: Function prototypes, enums, C++ extern "C" wrappers
- `lib/change_colour.c`: Implementation
- `demo.c` and `demo.cpp`: Example programs showing usage in C and C++

## Results / status

Working demo. Both C and C++ examples compile and run successfully.

## License

MIT © 2026 Sanskar Sontakke
