#pragma once

#include "IBuilder.h"
#include <iostream>

using namespace std;

class CBuilder1 :public IBuilder
{
public:
    CBuilder1() {};
	~CBuilder1() {};
	void buildPartA() { product.setProductPartA("ConcreteBuilder1 builded part A\n"); };
	void buildPartB() { product.setProductPartB("ConcreteBuilder1 builded part B\n"); };
	void buildPartC() { product.setProductPartC("ConcreteBuilder1 builded part C\n"); };
};
