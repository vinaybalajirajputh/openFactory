#pragma once

#include <memory>
#include <spdlog/spdlog.h>
#include <spide2d/window.hpp>

namespace of {

/**
 * @brief This class countains all top-level elements that are specific to a new or restored game.
 *
 */
struct game {
public:
    game(std::unique_ptr<spide2d::window> window);

private:
    void setupLogging();

    std::unique_ptr<spide2d::window> window_;
};

}  // namespace of