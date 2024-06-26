#include "../include/game/Player.hpp"

Player::Player()
{
    x = GetScreenWidth() / 2 + 2;
    y = GetScreenHeight() / 2;
    texture = LoadTexture("images/Player_Spritesheet.png");
}

Player::~Player()
{
    UnloadTexture(texture);
}

void Player::Draw()
{
    DrawTexturePro(texture, sheet_head.source, sheet_head.dest, sheet_head.origin, 0.0f, WHITE);
    DrawTexturePro(texture, sheet_legs.source, sheet_legs.dest, sheet_legs.origin, 0.0f, WHITE);
}

void Player::Update()
{
    x += (IsKeyDown(KEY_D) - IsKeyDown(KEY_A)) * GAME_SCALE;
    y += (IsKeyDown(KEY_S) - IsKeyDown(KEY_W)) * GAME_SCALE;

    sheet_head.source = Rectangle{0, 0, PLAYER_WIDTH, PLAYER_HEIGHT};
    sheet_head.dest = Rectangle{(float)x, (float)y-14, sheet_head.source.width * GAME_SCALE, sheet_head.source.height * GAME_SCALE};
    sheet_head.origin = Vector2{sheet_head.dest.width/2, sheet_head.dest.height/2};

    sheet_legs.source = Rectangle{PLAYER_WIDTH * 2, 0, PLAYER_WIDTH, PLAYER_HEIGHT};
    sheet_legs.dest = Rectangle{(float)x, (float)y+14, sheet_legs.source.width * GAME_SCALE, sheet_legs.source.height * GAME_SCALE};
    sheet_legs.origin = Vector2{sheet_legs.dest.width/2, sheet_legs.dest.height/2};
}