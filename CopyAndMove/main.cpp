//
//  main.cpp
//  CopyAndMove
//
//  Created by Panayotis Matsinopoulos on 2/4/21.
//

#include <iostream>
using namespace std;
#include "Vector.hpp"

void print_elements(const Vector &v) {
  for(unsigned long i = 0; i < v.size(); i++) {
    cout << "Element: i " << i << " = " << v[i] << endl;
  }
}

int main(int argc, const char * argv[]) {
  Vector v1{1, 2};

  print_elements(v1);
//
  Vector v2 = v1; // copy constructor
//
  print_elements(v2);

  Vector v3(0);
  
  v3 = v2; // copy assignment
  
  print_elements(v3);
  
  Vector v4(0);
  
  v4 = v2 + v3; // move assignment

  print_elements(v4);
  
  return 0;
}
