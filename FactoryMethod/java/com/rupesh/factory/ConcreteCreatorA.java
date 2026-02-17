package com.rupesh.factory;

public class ConcreteCreatorA extends Creator {

    @Override
    public Product createProduct() {
        return new ConcreteProductA();
    }

}
