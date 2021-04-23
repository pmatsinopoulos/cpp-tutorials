//
//  main.cpp
//  Class Hierarchies
//
//  Created by Panayotis Matsinopoulos on 2/4/21.
//

#include <iostream>
#include <vector>
#include "Shape.hpp"
#include "Circle.hpp"
#include "Smiley.hpp"

using namespace std;

void rotate_all(vector<Shape *>& v, int angle) {
  for(auto pShape : v) {
    pShape->rotate(angle);
  }
}

void draw_all(vector<Shape *>& v) {
  for (auto pShape: v) {
    pShape->draw();
  }
}

int main(int argc, const char * argv[]) {
  cout << "Starting class hierarchies:..." << endl;
  
  Point p {1, 2};
  int r = 8;
  Circle c(p, r);

  Circle c2(p, r);
  
  Point p2 {8, 9};
  c2.move(p2);
  
  Point p3 {10, 11};
  Smiley smiley1(p3, 15);
  
  Point eyePoint {20, 21};
  Circle* eye1 = new Circle(eyePoint, 2);

  Point eyePoint2 {21, 22};
  Circle* eye2 = new Circle(eyePoint2, 2);

  smiley1.add_eye(eye1);
  smiley1.add_eye(eye2);
  
  Point mouthPoint {30, 13};
  Circle* mouthCircle = new Circle(mouthPoint, 3);
  smiley1.set_mouth(mouthCircle);
  
  vector<Shape *> vpShape;
  vpShape.push_back(&c);
  vpShape.push_back(&c2);
  vpShape.push_back(&smiley1);
  
  rotate_all(vpShape, 10);
  draw_all(vpShape);
  
  cout << "------------- FINISHING main by destructing....." << endl;
  
  return 0;
}
