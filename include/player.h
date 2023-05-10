#ifndef PLAY_H_
#define PLAY_H_
#include "raylib.h"
class Player
{
  public:
    Player();
    Player(Player &&) = default;
    Player(const Player &) = default;
    Player &operator=(Player &&) = default;
    Player &operator=(const Player &) = default;
    ~Player();

    // 初始化
    void OnReady();
    // 处理
    void Process(float lastFrameTime);
    // 物理处理
    void PhysicsProcess(float lastFrameTime);

  private:
    // 坐标位置
    Vector2 point;
    // 贴图
    Texture2D texture;
    // 轮廓
    Vector2 outline[];
};

#endif // !PLAY_H_