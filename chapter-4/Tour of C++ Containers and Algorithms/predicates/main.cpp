//
//  main.cpp
//  predicates
//
//  Created by Panayotis Matsinopoulos on 24/4/21.
//

#include <iostream>
#include <map>
#include <string>

using namespace std;

struct Greater_than {
  int val;
  Greater_than(int v): val{v} {}
  bool operator()(const pair<string, int>& r) {
    return r.second > val;
  }
};

pair<string, int> f(map<string, int>& m) {
  auto p = find_if(m.begin(), m.end(), Greater_than{42});
  return *p;
}

ostream& operator<<(ostream& os, pair<string, int> p) {
  return cout << p.first << ": " << p.second;
}

int main(int argc, const char * argv[]) {

  map<string, int> m {
    {"a", 13},
    {"b", 3},
    {"c", 43},
    {"d", 40}
  };
  
  pair<string, int> p = f(m);
  
  cout << p << endl;
  
  return 0;
}
