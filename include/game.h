#ifndef GAME_H_
#define GAME_H_
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

  private:
};

#endif // !GAME_H_