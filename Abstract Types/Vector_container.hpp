//
//  Vector_container.hpp
//  Abstract Types
//
//  Created by Panayotis Matsinopoulos on 2/4/21.
//

#ifndef Vector_container_hpp
#define Vector_container_hpp

#include "../containers/Vector.hpp"
#include "Container.hpp"

class Vector_container : public Container {
  Vector v;
public:
  Vector_container(unsigned long);
  Vector_container(std::initializer_list<double>);
  double& operator[](unsigned long);
  unsigned long size() const;
  ~Vector_container();
};

#endif /* Vector_container_hpp */
