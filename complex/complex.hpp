//
//  complex.hpp
//  complex
//
//  Created by Panayotis Matsinopoulos on 23/3/21.
//

#ifndef complex_hpp
#define complex_hpp

class complex {
  double re;
  double im;
public:
  complex(double r, double i);
  complex(double r);
  complex();
  
  double real() const;
  void real(double r);
  
  double imag() const;
  void imag(double i);
  
  complex& operator+=(complex z);
  complex& operator-=(complex z);
  complex& operator*=(complex z);
};

complex operator+(complex, complex);

complex operator-(complex, complex);

complex operator-(complex);

complex operator*(complex, complex);

complex operator/(complex, complex);

bool operator==(complex, complex);

bool operator!=(complex, complex);

#endif /* complex_hpp */
