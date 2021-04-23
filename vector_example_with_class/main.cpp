//
//  main.cpp
//  Vector with classes
//
//  Created by Panayotis Matsinopoulos on 12/3/21.
//

#include <iostream>
using namespace std;

class Vector {
public:
  Vector(int s): // constructor
  elem {
    new double[s]
  },
  sz {
    s
  }
  { }

  double& operator[](int i) {
    return elem[i];
  }

  int size() {
    return sz;
  }

private:
  double* elem;
  int sz;
};

double read_and_sum(int s) {
  Vector v(s);
  for (int i = 0; i < v.size(); i++) {
    cin >> v[i];
  }
   
  double sum = 0;
  for (int i = 0; i < v.size(); i++) {
    sum += v[i];
  }
  return sum;
}

int main() {
  double result = read_and_sum(6);
  
  cout << "result: " << result << endl;
  
  return 0;
}
