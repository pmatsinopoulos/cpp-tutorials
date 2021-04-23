//
//  Point.hpp
//  Unique PTR
//
//  Created by Panayotis Matsinopoulos on 2/4/21.
//

#ifndef Point_hpp
#define Point_hpp

class Point {
  int x;
  int y;
public:
  Point(int xx, int yy);
  void draw() const;
  ~Point();
};

#endif /* Point_hpp */
