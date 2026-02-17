#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>
using namespace std;

class Product {
  public:
  virtual void use() = 0;
  virtual ~Product() {}
};

#endif