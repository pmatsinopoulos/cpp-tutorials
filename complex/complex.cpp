//
//  complex.cpp
//  complex
//
//  Created by Panayotis Matsinopoulos on 23/3/21.
//

#include <cmath>
#include "complex.hpp"
using namespace std;

// Class +complex+
// ----------------
complex::complex(double r, double i)
:re{r}, im{i} { }

complex::complex(double r)
:re{r}, im{0} { }

complex::complex()
:re{0}, im{0} { }
  
double complex::real() const {
  return re;
}

void complex::real(double r) {
  re = r;
}
  
double complex::imag() const {
  return im;
}

void complex::imag(double i) {
  im = i;
}
  
complex& complex::operator+=(complex z) {
  re += z.re;
  im += z.im;
  return *this;
}

complex& complex::operator-=(complex z) {
  re -= z.re;
  im -= z.im;
  return *this;
}
complex& complex::operator*=(complex z) {
  re = re * z.re - im * z.im;
  im = re * z.im + im * z.re;
  return *this;
}
//-------- end of class +complex+ -----------------

complex operator+(complex a, complex b) {
  return a += b;
}

complex operator-(complex a, complex b) {
  return a -= b;
}

complex operator-(complex a) {
  return {-a.real(), -a.imag()};
}

complex operator*(complex a, complex b) {
  return a *= b;
}

complex conjugate(complex a) {
  return {a.real(), -a.imag()};
}

complex operator/(complex a, complex b) {
  double denominator = pow(b.real(), 2) + pow(b.imag(), 2);
  
  return { (a.real() * b.real() + a.imag() * b.imag()) / denominator,
           (b.real() * a.imag() - a.real() * b.imag()) / denominator };
}

bool operator==(complex a, complex b) {
  return (
          a.real() == b.real() &&
          a.imag() == b.imag()
          );
}

bool operator!=(complex a, complex b) {
  return !(a == b);
}
