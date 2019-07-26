#include "game.hpp"

#include <spdlog/sinks/stdout_color_sinks.h>

namespace of {

game::game(std::unique_ptr<spide2d::window> window) : window_(std::move(window)) {
    setupLogging();
}

void game::setupLogging() {
    auto console = spdlog::stdout_color_mt("game_logger");
    console->info("Logger created.");
}

}  // namespace of
