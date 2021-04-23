//
//  Vector.cpp
//  containers
//
//  Created by Panayotis Matsinopoulos on 29/3/21.
//

#include <algorithm>
#include <cstring>
#include <iostream>
#include "Vector.hpp"

using namespace std;

Vector::Vector(unsigned long numberOfElements)
:elem { new double[numberOfElements] },
sz { numberOfElements } {
  for (unsigned long i = 0; i <= sz; i++) {
    elem[i] = 0;
  }
}

Vector::Vector(std::initializer_list<double> double_list)
:elem{ new double[double_list.size()] }, sz{ double_list.size() } {
  copy(double_list.begin(), double_list.end(), elem);
}

Vector::Vector(const Vector& b) {
  cout << "Vector copy constructor" << endl;
  
  initialize_memory_from_copy(b);
}

Vector& Vector::operator=(const Vector& b) {
  cout << "Vector copy assignment" << endl;
  
  this->~Vector();
  
  initialize_memory_from_copy(b);
  
  return *this;
}

Vector::Vector(Vector&& b) {
  cout << "Vector move constructor" << endl;
  *this = std::move(b);
}

Vector& Vector::operator=(Vector&& b) {
  cout << "Vector move assignment" << endl;
  
  if (this != &b) { // avoid move to itself
    this->~Vector();
    elem = b.elem;
    sz = b.sz;
    b.elem = nullptr;
    b.sz = 0;
  }
  return *this;
}

void Vector::initialize_memory_from_copy(const Vector& b) {
  sz = b.size();
  elem = new double[sz];
  
  std::memcpy(elem, b.elem, sz * sizeof(double));
}

Vector::~Vector() {
  if (elem != nullptr) {
    delete[] elem;
  }
}

double& Vector::operator[](unsigned long index) const {
  return elem[index];
}

unsigned long Vector::size() const {
  return sz;
}

void Vector::push_back(double elementToAdd) {
  
}

Vector operator+(const Vector &a, const Vector &b) {
  cout << "Vector + operator" << endl;
  
  assert(a.size() == b.size());
  
  Vector res(a.size());
  for(unsigned long i = 0; i < res.size(); i++) {
    res[i] = a[i] + b[i];
  }
  cout << "Vector about to return the result of addition operator" << endl;
  
  return res;
}

