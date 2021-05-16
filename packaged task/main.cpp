//
//  main.cpp
//  packaged task
//
//  Created by Panayotis Matsinopoulos on 16/5/21.
//

#include <iostream>
#include <numeric>
#include <thread>
#include <vector>
#include <future>
#include <utility>

using namespace std;

double accum(double* beg, double* end, double init) {
  return accumulate(beg, end, init);
}

double comp2(vector<double>& v) {
  using Task_type = double(double*, double*, double); // type of task
  
  packaged_task<Task_type> pt0 { accum }; // package the task. the task is the "accum" function
  
  packaged_task<Task_type> pt1 { accum }; // another packaged task.
  
  future<double> f0 { pt0.get_future() };  // get hold of pt0's future
  
  future<double> f1 { pt1.get_future() }; // get hold of pt1's future
  
  double* first = &v[0];
  
  thread t1 { move(pt0), first, first + v.size() / 2, 0 }; // start a thread for pt0
  thread t2 { move(pt1), first + v.size() / 2, first + v.size(), 0 }; // start a thread for pt1
  
  t1.join();
  t2.join();
  
  return f0.get() + f1.get();
}

int main(int argc, const char * argv[]) {
  vector<double> vec { 1, 2, 3 };
  
  double result = comp2(vec);
  
  cout << "result = " << result << endl;
  
  return 0;
}
