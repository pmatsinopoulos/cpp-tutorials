//
//  main.cpp
//  Tour of C++ Containers and Algorithms
//
//  Created by Panayotis Matsinopoulos on 22/4/21.
//

#include <iostream>
#include <string>
using namespace std;

string compose(const string& name, const string& domain) {
  return name + "@" + domain;
}

int main(int argc, const char * argv[]) {
  // insert code here...
  cout << "Hello, World!\n";
  
  string s1 = "Hello";
  string s2 = "Peter";
  
  cout << (s1 + " " + s2) << endl;
  
  auto addr = compose("foo", "bar.com");
  
  cout << addr << endl;
  
  string name = "Niels Stroustrup";
  
  string s = name.substr(6, 10);
  
  cout << "s = " << s << endl;
  
  name.replace(0, 5, "nicholas");
  
  cout << "name = " << name << endl;
  
  name[0] = toupper(name[0]);
  
  cout << "name = " << name << endl;
  
  return 0;
}
