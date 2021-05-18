//
//  main.cpp
//  mathematics
//
//  Created by Panayotis Matsinopoulos on 18/5/21.
//

#include <iostream>
#include <numeric>
#include <list>

using namespace std;

void f() {
  list<double> lst { 1, 2, 3, 4, 5, 9999.99999 };
  double s = accumulate(lst.begin(), lst.end(), (double)0.0);
//  char str[80];
//  sprintf(str, "%f", s);
//  cout << str << endl;
  
  cout << format("{:.2}", s) << endl;
}

int main(int argc, const char * argv[]) {
  cout << "Matchmatics in CPP" << endl;
  
  f();
  
  return 0;
}
