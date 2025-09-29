#!/bin/bash

set -e

# Directories
SRC_DIR="$(pwd)"
BUILD_DIR="$SRC_DIR/build"
OUT_DIR="$SRC_DIR/bin"

# Clean old stuff
rm -rf "$BUILD_DIR"
mkdir -p "$BUILD_DIR"
mkdir -p "$OUT_DIR"

# Configure & build
cmake -S "$SRC_DIR" -B "$BUILD_DIR"
cmake --build "$BUILD_DIR"

# Copy executables out (from build/bin to top-level bin)
if [ -d "$BUILD_DIR/bin" ]; then
  cp -r "$BUILD_DIR/bin/"* "$OUT_DIR/"
fi

# Remove build directory
rm -rf "$BUILD_DIR"

echo "✅ Build complete. Executable are in $OUR_DIR/"
