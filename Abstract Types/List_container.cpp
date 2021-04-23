//
//  List_container.cpp
//  Abstract Types
//
//  Created by Panayotis Matsinopoulos on 2/4/21.
//

#include "List_container.hpp"

List_container::List_container() { }

List_container::List_container(std::initializer_list<double> double_list):ld(double_list) { }

double& List_container::operator[](unsigned long index) {
  for(auto& elem : ld) {
    if (index == 0) {
      return elem;
    }
    --index;
  }
  throw out_of_range("List container");
}

unsigned long List_container::size() const {
  return ld.size();
}

List_container::~List_container() { }

