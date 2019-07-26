#!/bin/sh
mkdir ../build
cd ../build
export CXX=clang++
export CC=clang
conan install ../conan --build missing
cd ../src
export PKG_CONFIG_PATH=$(realpath ../build/)
export BOOST_ROOT=$(pkg-config --variable=prefix boost)
meson ../build
ln -s build/compile_commands.json compile_commands.json
