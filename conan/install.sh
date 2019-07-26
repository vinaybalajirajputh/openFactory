#!/bin/sh
mkdir ../build
cd ../build
export CXX=clang++
export CC=clang
conan install ../conan --build missing
cd ../src
export PKG_CONFIG_PATH=/home/andy/Projects/openFactory/build/
meson ../build
ln -s build/compile_commands.json compile_commands.json