//
//  main.cpp
//  type predicates
//
//  Created by Panayotis Matsinopoulos on 16/5/21.
//

#include <iostream>
#include <type_traits>

using namespace std;

template<typename Scalar>
class complex {
  Scalar re, im;
public:
  static_assert(is_arithmetic<Scalar>(), "Sorry but you have to give arithmetic type");
};

int main(int argc, const char * argv[]) {
  cout << "Type predicates: " << endl;
  
  // complex<string> c; // this fails in compilation if you bring in the code
  complex<int> c; // this is ok
  
  bool b1 = Is_arithmetic<int>();
  
  return 0;
}
