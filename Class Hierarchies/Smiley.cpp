//
//  Smiley.cpp
//  Class Hierarchies
//
//  Created by Panayotis Matsinopoulos on 2/4/21.
//

#include <iostream>
#include "Smiley.hpp"

using  namespace::std;

Smiley::Smiley(Point p, int r):Circle{p, r}, mouth{nullptr} { }

Smiley::~Smiley() {
  cout << "Smiley destructor start" << endl;
  
  cout << "...destructing mouth" << endl;
  delete mouth;
  cout << "...(end of destructing mouth)" << endl;
  
  for(auto pShape: eyes) {
    cout << "...destructing eye" << endl;
    delete pShape;
    cout << "...(end of destructing eye)" << endl;
    pShape = nullptr;
  }
  eyes.clear();
  cout << "Smiley destructor end" << endl;
}

//void Smiley::move(Point to) {
//
//}

void Smiley::draw() const {
  cout << "Smiley: Drawing basic circle..." << endl;
  Circle::draw();
  
  cout << "Smiley: Drawing eyes..." << endl;
  for(auto pShape : eyes) {
    pShape->draw();
  }
  
  cout << "Smiley: Drawing mouth..." << endl;
  mouth->draw();
}

void Smiley::rotate(int angle) {
  cout << "Rotating Smiley" << endl;
}

void Smiley::add_eye(Shape* s) {
  eyes.push_back(s);
}

void Smiley::set_mouth(Shape* m) {
  mouth = m;
}

void Smiley::wink(int index_of_eye) {
  cout << "Winking eye " << index_of_eye << endl;
}
