//
//  main.cpp
//  thread examples
//
//  Created by Panayotis Matsinopoulos on 15/5/21.
//

#include <iostream>
#include <thread>
#include <vector>
using namespace std;

void f(vector<double> *v) {
  cout << "I am f function()" << endl;
}

class F {
public:
  vector<double>* v;
  F(vector<double>* vv): v { vv } {
    
  }
  void operator()() {
    cout << "I am a function object" << endl;
  }
};

int main(int argc, const char * argv[]) {
  
  vector<double> some_vec { 1, 2, 3, 4, 5, 7 , 8, 9 };
  vector<double> vec2 { 10, 11, 12, 13, 14};

  thread t1 { f, &some_vec };
  thread t2 { F{ &vec2 } };
  
  t1.join();
  t2.join();

  return 0;
}
