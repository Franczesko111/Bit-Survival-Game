#pragma once
#include "../../Data.hpp"

struct Spritesheet
{
    Rectangle source;
    Rectangle dest;
    Vector2 origin;
};

class Player
{
    public:
        Player();
        ~Player();
        void Draw();
        void Update();
    private:
        short int x, y;
        Texture2D texture;
        Spritesheet sheet_head, sheet_legs;
};