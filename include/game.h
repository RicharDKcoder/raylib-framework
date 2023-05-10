#ifndef GAME_H_
#define GAME_H_
#include "player.h"
class Game
{
  public:
    Game();
    Game(Game &&) = default;
    Game(const Game &) = default;
    Game &operator=(Game &&) = default;
    Game &operator=(const Game &) = default;
    ~Game();

    void Run();

  protected:
    void Init();
    // 处理
    void Process();
    // 物理处理
    void PhysicsProcess();

  private:
    Player player;
};

#endif // !GAME_H_