//
//  main.cpp
//  Functors
//
//  Created by Panayotis Matsinopoulos on 8/4/21.
//

#include <iostream>
#include <vector>
using namespace std;

template<typename T>
class Less_than {
  const T val;
public:
  Less_than(const T& v):val(v) { }
  bool operator()(const T& x) const {
    return x < val;
  }
};

template<typename C, typename P>
int count(const C& c, P pred) {
  int result = 0;
  for(auto& x: c) {
    if(pred(x) == 1) {
      result++;
    }
  }
  return result;
}

int main(int argc, const char * argv[]) {
  Less_than<int> lt { 5 };
  
  bool result = lt(4);
  
  cout << "result " << result << endl;
  
  vector<int> v { 1, 8, 3, 7, 6 };
  int c = count<vector<int>>(v, Less_than<int>{7});
  
  cout << "count those that are less than 7: " << c << endl;
  
  c = count(v, [&](int a) { return 7 < a; });
  
  cout << "count those that are greater than 7: " << c << endl;
  
  return 0;
}
