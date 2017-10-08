#pragma once

#include "Builder.h"
#include <iostream>

using namespace std;

class ConcreteBuilder1 :public Builder
{
public:
	ConcreteBuilder1() {};
	~ConcreteBuilder1() {};
	void buildPartA() { product.setProductPartA("ConcreteBuilder1 builded part A\n"); };
	void buildPartB() { product.setProductPartB("ConcreteBuilder1 builded part B\n"); };
	void buildPartC() { product.setProductPartC("ConcreteBuilder1 builded part C\n"); };
	void showPruduct() { product.display(); }
	Product* getProduct() { return &product; };
};
