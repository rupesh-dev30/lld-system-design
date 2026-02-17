#ifndef CONCRETE_PRODUCT_B_H
#define CONCRETE_PRODUCT_B_H

#include "Product.h"

class ConcreteProductB : public Product {
public:
    void use() override {
        cout << "Using Concrete Product B" << endl;
    }
};

#endif
