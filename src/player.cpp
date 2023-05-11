#include "player.h"
#include <raylib.h>

Player::Player()
{
    this->OnReady();
}

Player::~Player()
{
}

void Player::OnReady()
{
    this->point = Vector2{100, 100};
    this->texture = LoadTexture("resources/characters/player.png");
}

void Player::Process(float lastFrameTime)
{
    // DrawTexture(this->texture, this->point.x, this->point.y, WHITE);
    DrawTextureRec(this->texture, Rectangle{0, 0, 64, 64}, Vector2{this->point.x, this->point.y}, WHITE);
}

void Player::PhysicsProcess(float lastFrameTime)
{
}