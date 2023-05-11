#include "moveable.h"
#include "raymath.h"
#include <raylib.h>

Moveable::Moveable()
{
}

Moveable::~Moveable()
{
}

void Moveable::Move()
{
    float x = 0;
    float y = 0;
    float lastFrameTime = GetFrameTime();
    float distance = this->speed * lastFrameTime;
    if (IsKeyDown(KEY_W))
    {
        y = -distance;
    }
    if (IsKeyDown(KEY_S))
    {
        y = distance;
    }
    if (IsKeyDown(KEY_A))
    {
        x = -distance;
    }
    if (IsKeyDown(KEY_D))
    {
        x = distance;
    }
    Vector2 increment = Vector2Normalize(Vector2{x, y});
    this->point->x += increment.x;
    this->point->y += increment.y;
}