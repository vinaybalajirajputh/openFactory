
spide2d_include_dirs = include_directories('include')

source_files = [
    'src/backend_sdl/sdlwindow.cpp',
    'src/backend_sdl/sdlwindow.hpp',
    'src/hotkeys.cpp',
    'src/window.cpp',
]

libspide2d = static_library('spide2d', 
    source_files, 
    dependencies: [
        eigen,
        spdlog,
        sdl2,
        opengl,
        glad_dependency,
        libdl,
        boost
    ], 
    include_directories: spide2d_include_dirs, 
    install: true
)

