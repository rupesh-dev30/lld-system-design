#ifndef CREATOR_H
#define CREATOR_H

#include "Product.h"

class Creator {
public:
    virtual Product* createProduct() = 0;

    void someOperation() {
        Product* product = createProduct();
        product->use();
        delete product;
    }

    virtual ~Creator() {}
};

#endif
