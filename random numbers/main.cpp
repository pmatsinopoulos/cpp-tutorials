//
//  main.cpp
//  random numbers
//
//  Created by Panayotis Matsinopoulos on 18/5/21.
//

#include <iostream>
#include <random>
#include <vector>

using namespace std;

class Rand_int {
  random_device r;
  default_random_engine re;
  uniform_int_distribution<int> dist;
public:
  Rand_int(int s, int e):dist { s, e } {
    re.seed(r());
  }
  int operator()() {
    return dist(re);
  }
};

int main(int argc, const char * argv[]) {
  vector<int> histogram(5);
  Rand_int rnd { 0, 4 };
  
  for (int i = 0; i != 200; i++) {
    histogram[rnd()]++;
  }
  
  for (int j = 0; j < histogram.size(); j++) {
    cout << j << " : ";
    for (int k = 1; k <= histogram[j]; k++) {
      cout << "*";
    }
    cout << endl;
  }
  
  return 0;
}
