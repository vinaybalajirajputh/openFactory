#pragma once
#include "hotkeys.hpp"

#include <boost/signals2.hpp>

namespace spide2d {

struct window {
    window(int width, int height, hotkeys h);

    boost::signals2::signal<void()> key_pressed;
    boost::signals2::signal<void()> key_released;

protected:
    hotkeys hotkeys_;
};

}  // namespace spide2d
