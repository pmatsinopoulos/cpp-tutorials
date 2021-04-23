//
//  main.cpp
//  Variadic Templates
//
//  Created by Panayotis Matsinopoulos on 8/4/21.
//

#include <iostream>
using namespace std;

template<typename T>
void g(T p) {
  cout << "g..." << p << endl;
}

void f() { }

template<typename T, typename... Tail>
void f(T head, Tail... tail) {
  cout << "f..." << endl;
  
  g(head); // do something to head
  f(tail...);
}

int main(int argc, const char * argv[]) {
  
  f(1, 2.2, "hello");
  
  return 0;
}
