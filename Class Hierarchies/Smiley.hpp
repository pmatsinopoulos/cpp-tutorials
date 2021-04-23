//
//  Smiley.hpp
//  Class Hierarchies
//
//  Created by Panayotis Matsinopoulos on 2/4/21.
//

#ifndef Smiley_hpp
#define Smiley_hpp

#include <vector>
using namespace std;

#include "Circle.hpp"

class Smiley : public Circle {
  vector<Shape *> eyes;
  Shape* mouth;
public:
  Smiley(Point p, int r);
  ~Smiley();
//  void move(Point to);
  void draw() const;
  void rotate(int angle);
  
  void add_eye(Shape* s);
  void set_mouth(Shape *s);
  virtual void wink(int index_of_eye);
};

#endif /* Smiley_hpp */
