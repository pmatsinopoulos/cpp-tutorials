//
//  main.cpp
//  sharing data
//
//  Created by Panayotis Matsinopoulos on 15/5/21.
//

#include <iostream>
#include <thread>
#include <mutex>
#include <vector>

using namespace std;

mutex m;
int sh;

void f() {
  unique_lock<mutex> lock { m };
  sh += 7;
}

int main(int argc, const char * argv[]) {
  cout << "sh = " << sh << endl;
  vector<thread> vector_of_threads;
  
  for (int i = 1 ; i <= 3; i++) {
    vector_of_threads.push_back(thread { f });
  }
  
  for(auto t = vector_of_threads.begin(); t != vector_of_threads.end(); ++t) {
    (*t).join();
  }
  
  cout << "sh = " << sh << endl;
  
  return 0;
}
