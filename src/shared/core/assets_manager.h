#pragma once

#include <vfs/path.h>
namespace mizui::core {
    class AssetsManager {
    public:
        AssetsManager() = default;
        void initialize(const vfs::Path& baseDir);

        vfs::Path root;
        vfs::Path logs;
        vfs::Path keys;
        vfs::Path games; // Default path for the games
    };
}
