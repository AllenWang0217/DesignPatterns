#pragma once

#include "../BuilderPattern/Director.h"
#include "../BuilderPattern/ConcreteBuilder1.h"
#include "../BuilderPattern/ConcreteBuilder2.h"
#include "../BuilderPattern/Product.h"

class TestBuilder
{
public:
	TestBuilder() {

		Builder* builder = new ConcreteBuilder1();
		Director* director = new Director(builder);
		director->Construct();
		Product* product = builder->getProduct();
		if (product == NULL){
			std::cout << "The product is NULL" << endl;;
		}
		product->display();

		builder = new ConcreteBuilder2();
		director->setBuilder(builder);
		director->Construct();
		product = builder->getProduct();
		if (product == NULL) {
			std::cout << "The product is NULL" << endl;;
		}
		product->display();

		delete builder;
		builder = NULL;
		delete director;
		director = NULL;
	}
};
