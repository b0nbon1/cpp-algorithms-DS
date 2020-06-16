#include <iostream>
#include "header.h"

// we are using makefile to compile
/*
  run `make` to produce execuatables
  run `make clean` to remove compiled and execuatables
*/

int main()
{
  Rectangle rectangle;
  rectangle.length = 5;
  rectangle.width = 20;
  std::cout << utilz::area(rectangle.length, rectangle.width) << std::endl;

  std::cout << utilz::area(rectangle.length) << std::endl;

  std::cout << utilz::area(rectangle) << std::endl;
}
