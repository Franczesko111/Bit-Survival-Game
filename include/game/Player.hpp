#pragma once
#include "../raylib/raylib.h"

class Player
{
    public:
        Player();
        void Draw();
        void Update();
    private:
        short int x, y;
};