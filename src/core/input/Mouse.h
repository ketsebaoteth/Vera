#pragma once

#include <cstdint>
#include <string>

namespace vera::core::input {

enum class VeraMouseButton : uint8_t {
    Left,
    Right,
    Middle,
    VeraButton4,
    VeraButton5,
    Count
};

enum class VeraCursorMode : uint8_t {
    Normal = 0,  // free-moving, visible
    Hidden,      // hidden but not confined (still generates absolute motion)
    Disabled     // hidden + confined + relative motion (for FPS-style look)
};

enum class VeraCursorShape : uint8_t {
    Arrow = 0,
    IBeam,
    Crosshair,
    Hand,
    HResize,
    VResize,
    CornerResizeNWSE,
    CornerResizeNESW,
    NotAllowed,
    Count
};

struct VeraInputDeviceInfo {
    std::string name;
    bool connected;
};

}  // namespace vera::core::input
