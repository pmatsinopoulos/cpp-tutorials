//
//  main.cpp
//  o
//
//  Created by Panayotis Matsinopoulos on 22/4/21.
//

#include <iostream>
using namespace std;
#include <stdio.h>

int main(int argc, const char * argv[]) {
  // insert code here...
  cout << "Hello, World!" << endl;
  string in;
  int b = 'b';
  char c = 'c';

  cout << 'a' << b << c << endl;

  cout << "give an integer: ";
  getline(cin, in);
  sscanf((const char *)in.c_str(), "%d", &b);
  cout << "integer given is: " << b << endl;

  double d;
  cout << "give a double: ";
  getline(cin, in);
  sscanf((const char *)in.c_str(), "%le", &d);
  cout << "double given is: " << d << endl;
  
  string s;
  cout << "give a string: ";
  getline(cin, s);
  cout << "string given is: " << s << endl;
  
  return 0;
}
