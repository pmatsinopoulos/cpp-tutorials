//
//  main.cpp
//  PassObjectByReference
//
//  Created by Panayotis Matsinopoulos on 25/3/21.
//

#include <iostream>
using namespace std;

struct A {
  int a;
};

void incrementLocalCopy(A a) {
  a.a += 1;
}

void incrementByReference(A &a) {
  a.a += 1;
}

int main(int argc, const char * argv[]) {

  A a;
  a.a = 1;
  
  cout << "a member has the value: " << a.a << endl;
  
  incrementLocalCopy(a);
  
  cout << "after incrementLocalCopy: a member has the value: " << a.a << endl;
  
  incrementByReference(a);
  
  cout << "after incrementByReference: a member has the value: " << a.a << endl;
  
  return 0;
}
