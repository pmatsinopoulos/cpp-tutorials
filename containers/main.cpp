//
//  main.cpp
//  containers
//
//  Created by Panayotis Matsinopoulos on 29/3/21.
//

#include <iostream>
#include "Vector.hpp"

#define NUMBER_OF_ELEMENTS 5

using namespace std;

int main(int argc, const char * argv[]) {
  Vector v(NUMBER_OF_ELEMENTS);
  cout << "Vector container starting..." << endl;
  
  for (int i = 0; i < v.size(); i++) {
    cout << "Item i: " << i << " = " << v[i] << endl;
  }
  
  v[3] = 8;

  for (int i = 0; i < v.size(); i++) {
    cout << "Item i: " << i << " = " << v[i] << endl;
  }
  
  Vector v2{1.3, 2.8};
  for (int i = 0; i < v2.size(); i++) {
    cout << "Item i: " << i << " = " << v2[i] << endl;
  }
  

  return 0;
}
