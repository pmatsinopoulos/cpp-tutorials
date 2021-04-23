//
//  Shape.hpp
//  Class Hierarchies
//
//  Created by Panayotis Matsinopoulos on 2/4/21.
//

#ifndef Shape_hpp
#define Shape_hpp

#include "Point.hpp"

class Shape {
public:
  virtual Point center() const = 0;
  virtual void move(Point to) = 0;
  virtual void draw() const = 0;
  virtual void rotate(int angle) = 0;
  virtual ~Shape();
};

#endif /* Shape_hpp */
