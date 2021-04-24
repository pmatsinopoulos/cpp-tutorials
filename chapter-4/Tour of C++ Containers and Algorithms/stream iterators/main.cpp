//
//  main.cpp
//  stream iterators
//
//  Created by Panayotis Matsinopoulos on 24/4/21.
//

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main(int argc, const char * argv[]) {
  
  string from, to;
  cin >> from >> to; // get source and target filenames
  
  ifstream input_file_stream {from}; // "from" file input stream
  istream_iterator<string> input_stream_iterator_for_input_file_stream {input_file_stream}; // input iterator for "from" file input stream
  istream_iterator<string> eos {};
  
  ofstream output_file_stream {to}; // "to" file output stream
  ostream_iterator<string> output_stream_iterator_for_output_file_stream {output_file_stream, "\n"}; // output iterator for "to" file output stream
  
  vector<string> buffer {input_stream_iterator_for_input_file_stream, eos}; // vector is initialized from the input stream and the eof file stream. 2 strings initially?
  sort(buffer.begin(), buffer.end());
  unique_copy(buffer.begin(), buffer.end(), output_stream_iterator_for_output_file_stream); // copy buffer to output, discard duplicated values
  
  return !input_file_stream.eof() || !output_file_stream;
}
