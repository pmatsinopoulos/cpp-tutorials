//
//  main.cpp
//  pairs and tuples
//
//  Created by Panayotis Matsinopoulos on 16/5/21.
//

#include <iostream>
#include <string>
#include <utility>

using namespace std;

int main(int argc, const char * argv[]) {

  tuple<string, int, double> t1 { "Sild", 123, 3.14 };
  
  auto t2 = make_tuple(string("Herring"), 10, 1.23);
  
  string s = get<0>(t2);
  
  int x = get<1>(t2);
  
  double d = get<2>(t2);
  
  return 0;
}
