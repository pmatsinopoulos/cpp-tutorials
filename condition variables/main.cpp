//
//  main.cpp
//  condition variables
//
//  Created by Panayotis Matsinopoulos on 15/5/21.
//

#include <iostream>
#include <queue>
#include <condition_variable>
#include <mutex>

using namespace std;

class Message {
  
};

queue<Message> mqueue;
condition_variable mcond; // the variable communicating events
mutex mmutex;

void consumer() {
  while(true) {
    unique_lock<mutex> lck { mmutex };
    
    while(mcond.wait(lck)) {
      // do nothing, just release lock and wait again
    }
    
    auto m = mqueue.front();
    mqueue.pop();
    
    lck.unlock();
    
    // process message
    
  }
}

void producer () {
  while (true) {
    Message m;
    
    // fill in the message
    
    unique_lock<mutex> lck{mmutex};
    
    mqueue.push(m);
    mcond.notify_one();
    
  }
}

int main(int argc, const char * argv[]) {

  
  
  return 0;
}
