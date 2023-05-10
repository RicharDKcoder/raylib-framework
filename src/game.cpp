#include "game.h"
#include "player.h"
#include "raylib.h"

Game::Game()
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 450;
    InitWindow(screenWidth, screenHeight, "raylib [core] example - 2d camera");
    SetTargetFPS(60); // Set our game to run at 60 frames-per-second
    this->Init();
}

Game::~Game()
{
    CloseWindow(); // Close window and OpenGL context
}

void Game::Init()
{
    // this->player = Player();
}

void Game::Run()
{
    // Main game loop
    while (!WindowShouldClose()) // Detect window close button or ESC key
    {
        BeginDrawing();

        ClearBackground(RAYWHITE);
        this->PhysicsProcess();
        this->Process();
        EndDrawing();
        //----------------------------------------------------------------------------------
    }
}

void Game::Process()
{
    float lastFrameTime = GetFrameTime();
    this->player.Process(lastFrameTime);
}

void Game::PhysicsProcess()
{
    float lastFrameTime = GetFrameTime();
    this->player.PhysicsProcess(lastFrameTime);
}