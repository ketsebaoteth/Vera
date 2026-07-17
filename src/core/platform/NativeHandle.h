#pragma once

#include <cstdint>

namespace vera::core::platform {

struct VeraNativeHandle {
    void* hwnd = nullptr;
    void* display = nullptr;
    uint64_t x11Window = 0;
    void* waylandSurface = nullptr;
};

}  // namespace vera::core::platform
