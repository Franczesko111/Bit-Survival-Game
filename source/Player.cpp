#include "../include/game/Player.hpp"


// * PUBLIC FUNCTIONS
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
    Texture(&sheet_head, -14);

    sheet_legs.source = Rectangle{PLAYER_WIDTH * 2, 0, PLAYER_WIDTH, PLAYER_HEIGHT};
    Texture(&sheet_legs, 14);
}


// * PRIVATE FUNCTIONS
void Player::Texture(Spritesheet *data, char offset)
{
    data->dest = Rectangle{(float)x, (float)y+offset, data->source.width * GAME_SCALE, data->source.height * GAME_SCALE};
    data->origin = Vector2{data->dest.width/2, data->dest.height/2};
}