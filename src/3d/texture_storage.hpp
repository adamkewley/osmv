#pragma once

#include "src/3d/gpu_data_reference.hpp"

namespace gl {
    struct Texture_2d;
}

namespace osmv {
    class Texture_storage final {
        struct Impl;
        Impl* impl;

    public:
        Texture_storage();
        Texture_storage(Texture_storage const&) = delete;
        Texture_storage(Texture_storage&&) = delete;
        Texture_storage& operator=(Texture_storage const&) = delete;
        Texture_storage& operator=(Texture_storage&&) = delete;
        ~Texture_storage() noexcept;

        [[nodiscard]] gl::Texture_2d& lookup(Texture_reference) const;
        [[nodiscard]] Texture_reference allocate(gl::Texture_2d&&);
    };
}
