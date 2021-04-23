//
//  main.cpp
//  Input output of User-Defined Types
//
//  Created by Panayotis Matsinopoulos on 23/4/21.
//

#include <iostream>
using namespace std;

struct Contact {
  string name;
  int number;
};

ostream& operator<<(ostream& os, const Contact& c) {
  return os << "{\"" << c.name << "\", " << c.number << "}";
}

istream& operator>>(istream& is, Contact& contact) {
  // read {"name",number} pair.
  char c, c2;
  if (is >> c && c == '{' && is >> c2 && c2 == '"') {
    string name = "";
    while(is.get(c) && c != '"') {
      name += c;
    }
    if (is >> c && c == ',') {
      int number = 0;
      if (is >> number >> c && c == '}') {
        contact = {name, number};
        return is;
      }
    }
  }
  is.setf(ios_base::failbit);
  return is;
}

int main(int argc, const char * argv[]) {
  
  Contact c;
  c.name = "Panos Matsinopoulos";
  c.number = 36;
  
  cout << c << endl;
  
  for(Contact contact; cin >> contact;) {
    cout << "Read contact: " << contact << endl;
  }
  
  cout << "...bye" << endl;
  
  return 0;
}
