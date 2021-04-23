//
//  main.cpp
//  CPP Tutorials
//
//  Created by Panayotis Matsinopoulos on 14/3/21.
//

#include <cmath>
#include <iostream>
#include <stdexcept>
using namespace std;
#include "Vector.hpp"

double sqrt_sum(Vector &v) {
  double sum = 0;
  for(int i = 0; i < v.size(); i++) {
    sum += sqrt(v[i]);
  }
  return sum;
}

int main () {
  cout << "Will use Vector.hpp" << endl;
  int size = 3;
  Vector v(size);
  for(int i = 0; i < size; i++) {
    v[i] = i;
  }
  cout << "Sum of squares is: " << sqrt_sum(v) << endl;
  
  try {
    v[2000] = 1;
  }
  catch (out_of_range) {
    cout << "Hey!!!! this is not a valid position for the vector" << endl;
  }
  
  try {
    Vector v2(-10);
  }
  catch (length_error) {
    cout << "Hey!!! You can't initialize Vector with this size" << endl;
  }
  
  return 0;
}
