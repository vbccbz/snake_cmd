#include <conio.h>

#pragma once

class Keyboard {
 public:
  Keyboard();
  ~Keyboard();

  enum class keys { left, right, up, down, any, esc, none };
  keys key;  //???????????????????? Why can't go before?

  void input(void);  ///////////???????? Keyboard::key ?

 private:
};
