//
//  main.cpp
//  lists
//
//  Created by Panayotis Matsinopoulos on 24/4/21.
//

#include <iostream>
#include <list>
#include "Entry.h"

using namespace std;

ostream& operator<<(ostream& os, const Entry& entry) {
  return cout << "{\"" << entry.name << "\"," << entry.number << "}";
}

void print_phone_book(const list<Entry>& phone_book) {
  for (auto entry: phone_book) {
    cout << entry << endl;
  }
}

int get_number(const list<Entry>& phone_book, const string name) {
  for(auto entry: phone_book) {
    if (entry.name == name) {
      return entry.number;
    }
  }
  return -1;
}

int get_number2(const list<Entry>& phone_book, const string name) {
  for (auto entry = phone_book.begin(); entry != phone_book.end(); entry++) {
    if (entry->name == name) {
      return entry->number;
    }
  }
  return -1;
}

int main(int argc, const char * argv[]) {
  list<Entry> phone_book = {
    {"David Hume", 123456},
    {"Karl Popper", 234567},
    {"Bertrand Arthur William Russell", 345678}
  };
  
  print_phone_book(phone_book);
  
  cout << get_number(phone_book, "Karl Popper") << endl;
  cout << get_number2(phone_book, "Bertrand Arthur William Russell") << endl;
  
  return 0;
}
