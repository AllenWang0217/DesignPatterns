#pragma once

#include "Builder.h"
#include <iostream>

using namespace std;

class ConcreteBuilder2 :public Builder
{
public:
	ConcreteBuilder2() {};
	~ConcreteBuilder2() {};
	void buildPartA() { product.setProductPartA("ConcreteBuilder2 builded part A\n"); };
	void buildPartB() { product.setProductPartB("ConcreteBuilder2 builded part B\n"); };
	void buildPartC() { product.setProductPartC("ConcreteBuilder2 builded part C\n"); };
	void showPruduct() { product.display(); }
	Product* getProduct() { return &product; };
};
