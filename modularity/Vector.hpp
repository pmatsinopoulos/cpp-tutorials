//
//  Vector.hpp
//  CPP Tutorials
//
//  Created by Panayotis Matsinopoulos on 14/3/21.
//

#ifndef Vector_hpp
#define Vector_hpp

class Vector {
public:
  // constructor
  Vector(int s);
  double& operator[](int i);
  int size();
private:
  int sz;
  double* elem;
};

#endif /* Vector_hpp */
