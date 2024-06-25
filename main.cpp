#include "GAME.hpp"

int main()
{
    InitWindow(512, 448, "Test");
    SetTargetFPS(60);

    GAME game;

    while(WindowShouldClose() == false) {
        BeginDrawing();
        game.Update();
        ClearBackground(LIGHTGRAY);
        game.Draw();
        EndDrawing();
    }

    CloseWindow();
    return 0;
}