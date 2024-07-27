#include <core/assets_manager.h>

namespace mizui::core {
    void AssetsManager::initialize(const vfs::Path& baseDir) {
        root = baseDir;

        logs = root / "logs";
        keys = root / "keys";
        games = root / "games";
    }
}
