//
//  main.cpp
//  find all
//
//  Created by Panayotis Matsinopoulos on 24/4/21.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

template<typename C, typename V>
vector<typename C::iterator> find_all(C& c, const V v) {
  vector<typename C::iterator> result;
  for(auto p = c.begin(); p != c.end(); ++p) {
    if (*p == v) {
      result.push_back(p);
    }
  }
  return result;
}

int main(int argc, const char * argv[]) {
  string s { "Panos Matsinopoulos" };
  
  vector<string::iterator> v;
  v = find_all<string, char>(s, 'a');

  for (auto i: v) {
    cout << (*i) << endl;
  }
  return 0;
}
