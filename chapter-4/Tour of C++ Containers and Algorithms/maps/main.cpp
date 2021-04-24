//
//  main.cpp
//  maps
//
//  Created by Panayotis Matsinopoulos on 24/4/21.
//

#include <iostream>
#include <map>
#include "Entry.h"

using namespace std;

ostream& operator<<(ostream& os, const Entry& entry) {
  return cout << "{\"" << entry.name << "\"," << entry.number << "}";
}

void print_phone_book(const map<string, int>& phone_book) {
  for(auto const &[key, val]: phone_book) {
    Entry e = { key, val };
    cout << e << endl;
  }
}

int main(int argc, const char * argv[]) {
  cout << __cplusplus << endl;
  
  map<string, int> phone_book = {
    {"David Hume", 123456},
    {"Karl Popper", 234567},
    {"Bertrand Arthur William Russell", 345678}
  };
    
  print_phone_book(phone_book);
  
  cout << phone_book["Karl Popper"] << endl;
  
  return 0;
}
