//
//  List_container.hpp
//  Abstract Types
//
//  Created by Panayotis Matsinopoulos on 2/4/21.
//

#ifndef List_container_hpp
#define List_container_hpp

#include <list>
#include "Container.hpp"

using namespace std;

class List_container : public Container {
  list<double> ld;
public:
  List_container();
  List_container(std::initializer_list<double>);
  double& operator[](unsigned long index);
  unsigned long size() const;
  ~List_container();
};

#endif /* List_container_hpp */
