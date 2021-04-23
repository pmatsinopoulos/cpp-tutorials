//
//  main.cpp
//  complex
//
//  Created by Panayotis Matsinopoulos on 23/3/21.
//

#include <iostream>
#include "complex.hpp"

using namespace std;

int main() {
  cout << "Complex ...";
  
  complex c {2.3, 1.8};
  
  cout << "c.real: " << c.real() << ", c.imaginary: " << c.imag() << endl;
  
  complex b {4, 5};
  
  complex d = c + b;
  
  cout << "d.real: " << d.real() << ", d.imaginary: " << d.imag() << endl;
  
  complex e = d - b;
  cout << "e.real: " << e.real() << ", e.imaginary: " << e.imag() << endl;
  
  complex f = -e;
  cout << "f.real: " << f.real() << ", f.imaginary: " << f.imag() << endl;
  
  complex g = f * e;
  cout << "g.real: " << g.real() << ", g.imaginary: " << g.imag() << endl;
  
  complex h = (complex(1) / complex(3, -1));
  cout << "h.real: " << h.real() << ", h.imaginary: " << h.imag() << endl;
  
  cout << "g == h: " << (g == h) << endl;
  
  complex i {g.real(), g.imag()};
  
  cout << "i.real: " << i.real() << ", i.imaginary: " << i.imag() << endl;

  cout << "g == i: " << (g == i) << endl;
  cout << "g != i: " << (g != i) << endl;

  complex nom {1, 2};
  complex den {3, -1};
  complex n_over_d = nom / den;
  cout << "n_over_d.real: " << n_over_d.real() << ", n_over_d.imaginary: " << n_over_d.imag() << endl;
  
  return 0;
}
