//
//  Vector.hpp
//  Templates
//
//  Created by Panayotis Matsinopoulos on 8/4/21.
//

#ifndef Vector_hpp
#define Vector_hpp

template<typename T>
class Vector {
  typedef T* iterator;
  typedef const T* const_iterator;
private:
  iterator elem;
  int sz;
  
  void _destruct() {
    if (elem != nullptr) {
      delete[] elem;
      elem = nullptr;
      sz = 0;
    }
  }
  
  void _copy_elements_from(const Vector<T>& b) {
    if (b.size() > 0) {
      elem = new T[b.size()];
      sz = b.size();
      for(int i = 0; i < sz; i++) {
        elem[i] = b[i];
      }
    }
  }
  
  iterator _begin() const {
    return &elem[0];
  }
  
  iterator _end() const {
    return _begin() + sz * sizeof(T);
  }
public:
  Vector(int s):sz { s }, elem { new T[s] } { }
  ~Vector() {
    _destruct();
  }
  
  // copy constructor
  Vector(const Vector<T>& b):sz { 0 }, elem { nullptr } {
    _copy_elements_from(b);
  }
  
  // copy assignment
  Vector& operator=(const Vector<T>& b) {
    if (this != &b) {
      _destruct();
      _copy_elements_from(b);
    }
    return *this;
  }
  
  // move constructor
  Vector(Vector<T>&& b):elem { b.elem }, sz { b.sz } {
    b.elem = nullptr;
    b.sz = 0;
  }
  
  // move assignment
  Vector<T>& operator=(Vector<T>&& b) {
    if (this != &b) {
      _destruct();
      elem = b.elem;
      sz = b.sz;
      b.elem = nullptr;
      b.sz = 0;
    }
    return *this;
  }
  
  // write element access by index
  T& operator[](int index) {
    return elem[index];
  }
  
  // read element access by index
  const T& operator[](int index) const {
    return elem[index];
  }
  
  iterator begin() {
    return _begin();
  }
  
  const_iterator begin() const {
    return _begin();
  }
  
  iterator end() {
    return _end();
  }

  const_iterator end() const {
    return _end();
  }

  int size() const {
    return sz;
  }
};

#endif /* Vector_hpp */
