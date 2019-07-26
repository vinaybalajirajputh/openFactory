#include <spide2d/window.hpp>

namespace spide2d {

window::window(const int width, const int height, hotkeys h) : hotkeys_(std::move(h)) {}

}  // namespace spide2d
