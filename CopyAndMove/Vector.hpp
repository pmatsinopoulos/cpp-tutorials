//
//  Vector.hpp
//  containers
//
//  Created by Panayotis Matsinopoulos on 29/3/21.
//

#ifndef Vector_hpp
#define Vector_hpp

#include <initializer_list>

class Vector {
  double* elem;
  unsigned long sz;
private:
  void initialize_memory_from_copy(const Vector& b);
public:
  // numberOfElements in the vector
  Vector(unsigned long);
  Vector(std::initializer_list<double>);
  
  // copy constructor
  Vector(const Vector& b);
  // copy assignment
  Vector& operator=(const Vector& b);
  // move constructor
  Vector(Vector&& b); // && rvalue reference
  // move assignment
  Vector& operator=(Vector&& b);
  
  ~Vector();
  
  double& operator[](unsigned long) const;
  unsigned long size() const;
  void push_back(double);
};

Vector operator+(const Vector &a, const Vector &b);

#endif /* Vector_hpp */
