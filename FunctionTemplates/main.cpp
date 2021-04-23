//
//  main.cpp
//  FunctionTemplates
//
//  Created by Panayotis Matsinopoulos on 8/4/21.
//

#include <iostream>
#include <vector>
using namespace std;

template<typename Container, typename Value>
Value sum(const Container& c, Value v) {
  for(auto& x: c) {
    v += x;
  }
  return v;
}

int main(int argc, const char * argv[]) {
  cout << "Starting..." << endl;
  
  vector<int> vecIntegers;
  vecIntegers.push_back(3);
  vecIntegers.push_back(4);
  
  int initialValue = 8;
  
  int sum_result = sum<vector<int>, int>(vecIntegers, initialValue);
  
  cout << "Sum result is " << sum_result << endl;
  
  return 0;
}
