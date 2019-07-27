#pragma once
#include <string>

namespace spide2d {

struct key {
    /**
     * Returns a human readable string representation of this key.
     */
    [[nodiscard]] std::string human_readable() const;

    /**
     * @brief Creates a key corresponding to #key_name.
     *
     */
    [[nodiscard]] static key create_from_human_readable(std::string_view key_name);

private:
    key() = default;
};

}  // namespace spide2d