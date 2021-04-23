//
//  main.cpp
//  Unique PTR
//
//  Created by Panayotis Matsinopoulos on 2/4/21.
//

#include <iostream>
#include <memory>
#include "Point.hpp"
using namespace std;

int main(int argc, const char * argv[]) {

  Point *p = new Point {1, 2};
  unique_ptr<Point> p2 = make_unique<Point>(3, 4);
  p->draw();
  p2->draw();

  return 0;
}
