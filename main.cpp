#include "GAME.hpp"

int main()
{
    InitWindow(800, 600, "Bit Survival Game");
    SetTargetFPS(60);

    GAME game;

    while(WindowShouldClose() == false) {
        BeginDrawing();

        game.Update();

        ClearBackground(LIGHTGRAY);

        DrawLine(GetScreenWidth() / 2, 0, GetScreenWidth() / 2, GetScreenHeight(), RED);
        DrawLine(0, GetScreenHeight() / 2, GetScreenWidth(), GetScreenHeight() / 2, BLUE);
        game.Draw();
        DrawFPS(8, 8);
        
        EndDrawing();
    }

    CloseWindow();
    return 0;
}