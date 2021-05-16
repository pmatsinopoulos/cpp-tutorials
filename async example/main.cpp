//
//  main.cpp
//  async example
//
//  Created by Panayotis Matsinopoulos on 16/5/21.
//

#include <iostream>
#include <numeric>
#include <future>
#include <vector>

using namespace std;

double accum(double* beg, double* end, double init)
{
  return accumulate(beg, end, init);
}

double comp4(vector<double>& v) {
  if (v.size() < 10000) {
    return accum(&(*v.begin()), &(*v.end()), 0.0);
  }

  auto v0 = &v[0];
  auto sz = v.size();
  auto f0 = async(accum, v0, v0 + sz / 4, 0.0);
  auto f1 = async(accum, v0 + sz / 4, v0 + sz / 2, 0.0);
  auto f2 = async(accum, v0 + sz / 2, v0 + 3 * sz / 4, 0.0);
  auto f3 = async(accum, v0 + 3 * sz / 4, v0 + sz, 0.0);

  return f0.get() + f1.get() + f2.get() + f3.get();
}

int main(int argc, const char * argv[]) {

  vector<double> vec { 1, 2, 3 };
  
  double result = accum(&(*vec.begin()), &(*vec.end()), 0.0);
  
  cout << "result = " << result << endl;
  
  result = comp4(vec);
  
  cout << "result = " << result << endl;
  
  return 0;
}
