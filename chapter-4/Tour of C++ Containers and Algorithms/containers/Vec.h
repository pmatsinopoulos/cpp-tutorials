//
//  Vec.h
//  containers
//
//  Created by Panayotis Matsinopoulos on 23/4/21.
//

#ifndef Vec_h
#define Vec_h

#include <vector>
using namespace std;

template<typename T>
class Vec : public vector<T> {
public:
  using vector<T>::vector; // use the constructors from "vector" under the name Vec ?
  T& operator[](size_t n) {
    return vector<T>::at(n);
  }
  const T& operator[](size_t n) const {
    return vector<T>::at(n);
  }
};

#endif /* Vec_h */
