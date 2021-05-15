//
//  main.cpp
//  returning results
//
//  Created by Panayotis Matsinopoulos on 15/5/21.
//

#include <iostream>
#include <thread>
#include <vector>
using namespace std;

void f (const vector<double> & v, double *res) {
  *res = 8.5;
}


class F {
private:
  double *res = NULL;
  vector<double> vec;
public:
  F(const vector<double> &v, double *r): res { r }, vec {v  } {
    
  }
  void operator()() {
    *res = 8.3;
  }
};

int main(int argc, const char * argv[]) {
  vector<double> some_vec { 1, 1.2 };
  double result = 0.0;
  
  thread t1 { f, some_vec, &result };
  
  t1.join();
  
  cout << "result = " << result << endl;
  
  thread t2 { F { some_vec, &result } };
  
  t2.join();
  
  cout << "result = " << result << endl;
  
  return 0;
}
