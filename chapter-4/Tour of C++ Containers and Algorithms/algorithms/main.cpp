//
//  main.cpp
//  algorithms
//
//  Created by Panayotis Matsinopoulos on 24/4/21.
//

#include <iostream>
#include "Entry.h"
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

ostream& operator<<(ostream& os, const Entry& entry) {
  return cout << "{\"" << entry.name << "\"," << entry.number << "}";
}

bool operator<(const Entry& a, const Entry& b) {
  return a.name < b.name;
}

bool operator>(const Entry& a, const Entry& b) {
  return a.name > b.name;
}

bool operator==(const Entry& a, const Entry& b) {
  return a.name == b.name;
}

list<Entry> f(vector<Entry>& v_entries) {
  sort(v_entries.begin(), v_entries.end());
  list<Entry> result;
  unique_copy(v_entries.begin(), v_entries.end(), back_inserter(result));
  
  return result;
}

int main(int argc, const char * argv[]) {

  vector<Entry> v_entries {
    {"David", 123456},
    {"Mary", 3636727},
    {"David", 123456},
    {"Panos", 32321}
  };
  
  for(auto entry: v_entries) {
    cout << entry << endl;
  }
  
  list<Entry> l_entries;
  
  l_entries = f(v_entries);
  
  for(auto entry: l_entries) {
    cout << entry << endl;
  }
  
  return 0;
}
