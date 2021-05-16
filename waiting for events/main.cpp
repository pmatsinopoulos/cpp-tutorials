//
//  main.cpp
//  waiting for events
//
//  Created by Panayotis Matsinopoulos on 15/5/21.
//

#include <iostream>
#include <thread>
#include <chrono>

using namespace std;


int main(int argc, const char * argv[]) {
  auto t0 = chrono::high_resolution_clock::now();
  this_thread::sleep_for(chrono::milliseconds{2000});
  
  auto t1 = chrono::high_resolution_clock::now();
  
  cout << chrono::duration_cast<chrono::seconds>(t1 - t0).count() << " seconds passed" << endl;
  
  return 0;
}
