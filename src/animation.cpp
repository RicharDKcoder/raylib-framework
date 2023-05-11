#include "animation.h"
#include <raylib.h>

Animation::Animation(Texture2D texture, int frameSize, float frameTimeLimit)
{
    this->frameWidth = float(this->texture.width) / frameSize;
    this->frameHeight = this->texture.height;
    this->frameSize = frameSize;
    this->frameTimeLimit = frameTimeLimit;
    this->frameTimeBuffer = 0;
    this->frameIndex = 0;
}

Animation::~Animation()
{
}

void Animation::Play()
{
    // 获取上一帧的时间
    float lastFramTime = GetFrameTime();
    this->frameTimeBuffer += lastFramTime;
    // 超过了每帧播放的时间限制,则切换到下一帧的画面
    if (this->frameTimeBuffer > this->frameTimeLimit)
    {
        this->frameIndex += 1;
        if (this->frameIndex > this->frameSize - 1)
        {
            this->frameIndex = 0;
        }
        this->frameTimeBuffer -= this->frameTimeLimit;
    }
    float x = this->frameIndex * this->frameWidth;
    // 绘制当前帧画面
    DrawTextureRec(this->texture, Rectangle{x, 0, this->frameWidth, this->frameHeight}, *this->point, WHITE);
}