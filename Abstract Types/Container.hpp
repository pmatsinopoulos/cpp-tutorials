//
//  Container.hpp
//  Abstract Types
//
//  Created by Panayotis Matsinopoulos on 2/4/21.
//

#ifndef Container_hpp
#define Container_hpp

class Container {
public:
  virtual double& operator[](unsigned long) = 0; // pure virtual function
  virtual unsigned long size() const = 0; // const pure virtual function
  virtual ~Container();
};

#endif /* Container_hpp */
