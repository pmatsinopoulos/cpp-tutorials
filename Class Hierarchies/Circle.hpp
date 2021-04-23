//
//  Circle.hpp
//  Class Hierarchies
//
//  Created by Panayotis Matsinopoulos on 2/4/21.
//

#ifndef Circle_hpp
#define Circle_hpp

#include "Shape.hpp"

class Circle : public Shape {
  Point cntr;
  int radius;
public:
  Circle(Point center, int radius);
  Point center() const;
  void move(Point to);
  void draw() const;
  void rotate(int angle);
  ~Circle();
};

#endif /* Circle_hpp */
