#ifndef MOVEABLE_H_
#define MOVEABLE_H_
#include "raylib.h"
class Moveable
{
  public:
    Moveable();
    Moveable(Moveable &&) = default;
    Moveable(const Moveable &) = default;
    Moveable &operator=(Moveable &&) = default;
    Moveable &operator=(const Moveable &) = default;
    ~Moveable();

    void Move();

  private:
    Vector2 *point;
    float speed;
};

#endif // !MOVEABLE_H_