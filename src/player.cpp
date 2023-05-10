#include "player.h"
#include <raylib.h>

Player::Player()
{
}

Player::~Player()
{
}

void Player::OnReady()
{
    this->point = Vector2{0, 0};
}

void Player::Process(float lastFrameTime)
{
    DrawTexture(this->texture, this->point.x, this->point.y, WHITE);
}

void Player::PhysicsProcess(float lastFrameTime)
{
}