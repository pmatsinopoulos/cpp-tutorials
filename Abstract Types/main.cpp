//
//  main.cpp
//  Abstract Types
//
//  Created by Panayotis Matsinopoulos on 2/4/21.
//

#include <iostream>
#include "Container.hpp"
#include "Vector_container.hpp"
#include "List_container.hpp"
using namespace std;

void use(Container &c) {
  const unsigned long sz = c.size();
  for (unsigned long i = 0; i < sz; i++) {
    cout << "Element on position i: " << i << ", is: " << c[i] << endl;
  }
}
#include "Vector.hpp"

int main(int argc, const char * argv[]) {
  
  cout << "Starting Abstract Types..." << endl;
  
  Vector_container vc {1.2, 3.5};
  cout << "...Calling use for Vector_container" << endl;
  
  use(vc);
  
  List_container lc {3.8, 4.7};
  cout << "...Calling use for List_container" << endl;
  
  use(lc);

  return 0;
}
