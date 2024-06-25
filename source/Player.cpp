#include "../include/game/Player.hpp"

Player::Player()
{
    x = GetScreenWidth() / 2 - 32;
    y = GetScreenHeight() / 2 -32;
}

void Player::Draw()
{
    DrawRectangle(x, y, 64, 64, RED);
}

void Player::Update()
{
    x += (IsKeyDown(KEY_D) - IsKeyDown(KEY_A)) * 4;
    y += (IsKeyDown(KEY_S) - IsKeyDown(KEY_W)) * 4;
}