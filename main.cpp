#include "include/raylib.h"

int main()
{
    InitWindow(256, 240, "Test");
    SetTargetFPS(60);

    while(WindowShouldClose() == false) {
        BeginDrawing();

        ClearBackground(LIGHTGRAY);

        EndDrawing();
    }

    CloseWindow();
    return 0;
}