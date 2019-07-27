#pragma once
#include "hotkey.hpp"

#include <boost/signals2.hpp>

namespace spide2d {

struct window {
    window(int width, int height);

    boost::signals2::signal<void()> key_pressed;
    boost::signals2::signal<void()> key_released;

protected:
};

}  // namespace spide2d
