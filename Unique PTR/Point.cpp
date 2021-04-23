//
//  Point.cpp
//  Unique PTR
//
//  Created by Panayotis Matsinopoulos on 2/4/21.
//

#include <iostream>
#include "Point.hpp"

using namespace std;

Point::Point(int xx, int yy):x{xx}, y{yy} { }
Point::~Point() {
  cout << "destructing myself as a Point x, y: " << x << ", " << y << endl;
}

void Point::draw() const {
  cout << "Drawing x, y: " << x << ", " << y << endl;
}
