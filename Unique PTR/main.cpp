//
//  main.cpp
//  unique ptr
//
//  Created by Panayotis Matsinopoulos on 15/5/21.
//

#include <iostream>
#include <memory>
using namespace std;

class MyAwesomeClass {
public:
  MyAwesomeClass() {
    cout << "MyAwesomeClass constructor" << endl;
  }
  ~MyAwesomeClass() {
    cout << "MyAwesomeClass destructor" << endl;
  }
};

unique_ptr<MyAwesomeClass> f() {
  return unique_ptr<MyAwesomeClass>{ new MyAwesomeClass() };
}

int main(int argc, const char * argv[]) {
  // insert code here...
  cout << "Hello, World!" << endl;
  
  unique_ptr<int> pToInt { new int };
  *pToInt = 5;
  
  cout << *pToInt << endl;
  
  unique_ptr<MyAwesomeClass> pMyAwesomeClass { new MyAwesomeClass() };
  
  unique_ptr<MyAwesomeClass> p2MyAwesomeClass = f();
  
  return 0;
}
