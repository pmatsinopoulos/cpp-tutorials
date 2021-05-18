//
//  main.cpp
//  random numbers
//
//  Created by Panayotis Matsinopoulos on 18/5/21.
//

#include <iostream>
#include <random>

using namespace std;
using my_engine = default_random_engine;
using my_distribution = uniform_int_distribution<>;

int main(int argc, const char * argv[]) {
  my_engine re {}; // the default engine
  my_distribution one_to_six { 1, 6 };
  auto die = bind(one_to_six, re);
  
  int x = die();
  
  cout << x << endl;
    
  return 0;
}
