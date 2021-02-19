#pragma once

#include "screen.hpp"

#include <SDL_events.h>

namespace osmv {
    struct Splash_screen_impl;

    class Splash_screen final : public Screen {
        Splash_screen_impl* impl;

    public:
        Splash_screen();
        Splash_screen(Splash_screen const&) = delete;
        Splash_screen(Splash_screen&&) = delete;
        Splash_screen& operator=(Splash_screen const&) = delete;
        Splash_screen& operator=(Splash_screen&&) = delete;
        ~Splash_screen() noexcept override;

        bool on_event(SDL_Event const&) override;
        void draw() override;
    };
}