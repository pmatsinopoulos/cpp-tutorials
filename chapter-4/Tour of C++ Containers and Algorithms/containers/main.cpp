//
//  main.cpp
//  containers
//
//  Created by Panayotis Matsinopoulos on 23/4/21.
//

#include <iostream>
#include <vector>
#include "Contact.h"
using namespace std;
#include "Vec.h"

ostream& operator<<(ostream&os, const Contact& contact) {
  return cout << "{\"" << contact.name << ", " << contact.number << "}";
}

void print_phone_book(const vector<Contact> &phone_book) {
  for(const Contact& contact: phone_book) {
    cout << contact << endl;
  }
}

int main(int argc, const char * argv[]) {
  try {
    vector<Contact> phone_book = {
      {"David Hume", 123456},
      {"Karl Popper", 234567},
      {"Bertrand Arthur William Russell", 345678}
    };
    
    print_phone_book(phone_book);
    
    vector<int> v_of_ints(3, 5);
    for(const auto i: v_of_ints) {
      cout << i << endl;
    }
    
    phone_book.push_back({"Panos M", 50});
    print_phone_book(phone_book);
    
    Vec<int> v2(3, 5);
    try {
      cout << v2[3] << endl; // Throws error
    }
    catch(out_of_range) {
      cerr << "out of range error" << endl;
      return 1;
    }
    
    return 0;
  }
  catch(...) {
    cerr << "Unknown exception thrown" << endl;
    return 1;
  }
}
