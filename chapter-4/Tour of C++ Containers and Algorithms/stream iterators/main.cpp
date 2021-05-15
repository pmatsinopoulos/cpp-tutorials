//
//  main.cpp
//  stream iterators
//
//  Created by Panayotis Matsinopoulos on 24/4/21.
//

#include <iostream>
#include <fstream>
#include <set>
#include <algorithm>

using namespace std;

int main(int argc, const char * argv[]) {
  
  string from, to;
  cin >> from >> to; // get source and target filenames
  
  ifstream input_file_stream {from}; // "from" file input stream
  
  ofstream output_file_stream {to}; // "to" file output stream
  
  set<string> buffer {
    istream_iterator<string> {input_file_stream},
    istream_iterator<string> {}
  };
  copy(buffer.begin(),
       buffer.end(),
       ostream_iterator<string> {output_file_stream, "\n"}); 
  
  return !input_file_stream.eof() || !output_file_stream;
}
