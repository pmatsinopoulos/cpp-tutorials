//
//  main.cpp
//  regular expressions
//
//  Created by Panayotis Matsinopoulos on 18/5/21.
//

#include <iostream>
#include <regex>
#include <string>

using namespace::std;

int main(int argc, const char * argv[]) {
  cout << "Regular Expressions: " << endl;
  
  regex pat (R"(\w{2}\s*\d{5}(-\d{4})?)");
  
  int lineno = 0;
  for(string line; getline(cin, line);) {
    lineno++;
    smatch matches;
    if (regex_search(line, matches, pat)) {
      cout << lineno << ":" <<  matches[0] << endl;
    }
  }
  
  return 0;
}
