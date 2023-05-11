#ifndef ANIMATION_H_
#define ANIMATION_H_
#include "raylib.h"
class Animation
{
  public:
    Animation(Texture2D texture, int frameSize, float frameTimeLimit);
    Animation(Animation &&) = default;
    Animation(const Animation &) = default;
    Animation &operator=(Animation &&) = default;
    Animation &operator=(const Animation &) = default;
    ~Animation();

    // 播放动画
    void Play();

  private:
    // 动画的位置
    Vector2 *point;
    // 当前帧画面播放时间
    float frameTimeBuffer;
    // 每帧动画时间限制
    float frameTimeLimit;
    // 当前播放的帧索引,从0开始
    int frameIndex;
    // 动画贴图
    Texture2D texture;
    // 动画帧数
    int frameSize;
    // 贴图每帧画面宽高
    float frameWidth;
    float frameHeight;
};

#endif // !ANIMATION_H_