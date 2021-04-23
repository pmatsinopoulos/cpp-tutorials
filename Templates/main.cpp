//
//  main.cpp
//  Templates
//
//  Created by Panayotis Matsinopoulos on 8/4/21.
//

#include <iostream>
#include "Vector.hpp"

using namespace std;

template<typename T>
void print_elements(const Vector<T>& v) {
  if (v.size() == 0) {
    cout << "no elements" << endl;
    return;
  }
  
  int i = 0;
  for(auto& e: v) {
    cout << "element i: " << i << " = " << e << endl;
    i++;
  }
}

int main(int argc, const char * argv[]) {

  Vector<char> vc(2);
  vc[0] = 'a';
  vc[1] = 'b';

  print_elements(vc);
  
  Vector<char> vc2(2);
  vc2 = vc;
  
  print_elements(vc2);
  
  Vector<char> vc3(move(vc2));
  
  print_elements(vc3);
  
  Vector<char> vc4(3);
  vc4[0] = '1';
  vc4[1] = '2';
  vc4[2] = '3';
  
  vc3 = move(vc4);
  
  print_elements(vc3);
  
  print_elements(vc4);
  
  vc4 = vc4;
  vc4 = move(vc4);
  
  return 0;
}
