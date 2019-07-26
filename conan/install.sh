#!/bin/sh
mkdir ../build
cd ../build
export CXX=clang++
export CC=clang
conan remote add bincrafters https://api.bintray.com/conan/bincrafters/public-conan
conan install ../conan --build missing
cd ../src
export PKG_CONFIG_PATH=$(realpath ../build/)
export BOOST_ROOT=$(pkg-config --variable=prefix boost)
meson ../build
ln -sf build/compile_commands.json compile_commands.json
