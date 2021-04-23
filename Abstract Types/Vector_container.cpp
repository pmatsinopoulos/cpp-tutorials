//
//  Vector_container.cpp
//  Abstract Types
//
//  Created by Panayotis Matsinopoulos on 2/4/21.
//

#include "Vector_container.hpp"

Vector_container::Vector_container(unsigned long s):v(s) {
}

Vector_container::Vector_container(std::initializer_list<double> double_list):v(double_list) {
}

double& Vector_container::operator[](unsigned long index) {
  return v[index];
}

unsigned long Vector_container::size() const {
  return v.size();
}

Vector_container::~Vector_container() { }

