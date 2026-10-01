#pragma once
#include "../Character/Hero/Pig/Pig.hpp"
class Game {
    private:
        Pig *player = nullptr;

    public:
        Game() {}
        ~Game();
        void run();

        void start();
};