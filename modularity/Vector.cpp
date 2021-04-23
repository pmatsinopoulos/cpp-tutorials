//
//  Vector.cpp
//  CPP Tutorials
//
//  Created by Panayotis Matsinopoulos on 14/3/21.
//

#include <stdexcept>
#include "Vector.hpp"
using namespace std;

Vector::Vector(int s)
{
  if (s < 0) throw length_error {"This is not acceptable length"};
  elem = new double[s];
  sz = s;
}

double& Vector::operator[](int i) {
  if(i < 0 || i >= sz) {
    throw out_of_range {"Vector::operator[]"};
  }
  return elem[i];
}

int Vector::size() {
  return sz;
}
