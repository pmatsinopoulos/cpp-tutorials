//
//  main.cpp
//  Unorderd Maps
//
//  Created by Panayotis Matsinopoulos on 24/4/21.
//

#include <iostream>
#include <unordered_map>
#include "Entry.h"

using namespace std;

int get_number(unordered_map<string, int>& phone_book, const string& name) {
  return phone_book[name];
}

int main(int argc, const char * argv[]) {
  unordered_map<string, int> phone_book {
    {"David Hume", 123456},
    {"Karl Popper", 234567},
    {"Bertrand Arthur William Russel", 345678}
  };
  
  phone_book["Karl Popper"];

  cout << get_number(phone_book, "Karl Popper") << endl;
  
  return 0;
}
