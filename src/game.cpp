#include "game.h"
#include "raylib.h"

Game::Game()
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 450;
    InitWindow(screenWidth, screenHeight, "raylib [core] example - 2d camera");
    SetTargetFPS(60); // Set our game to run at 60 frames-per-second
}

Game::~Game()
{
    CloseWindow(); // Close window and OpenGL context
}

void Game::Run()
{
    // Main game loop
    while (!WindowShouldClose()) // Detect window close button or ESC key
    {
        BeginDrawing();

        ClearBackground(RAYWHITE);

        EndDrawing();
        //----------------------------------------------------------------------------------
    }
}