//
//  Circle.cpp
//  Class Hierarchies
//
//  Created by Panayotis Matsinopoulos on 2/4/21.
//

#include <iostream>
#include "Circle.hpp"
#include "Point.hpp"

using namespace std;

Circle::Circle(Point c, int r):cntr(c), radius(r) { }

Circle::~Circle() {
  cout << "Circle destructor" << endl;
}

Point Circle::center() const {
  return cntr;
}

void Circle::move(Point to) {
  cntr = to;
}

void Circle::draw() const {
  cout << "Drawing circle on point (x, y): (" << cntr.x << ", " << cntr.y << ")" << endl;
}

void Circle::rotate(int angle) {
  cout << "Rotating circle does not change its shape" << endl;
}


