#pragma once

#include "../BuilderPattern/Director.h"
#include "../BuilderPattern/CBuilder1.h"
#include "../BuilderPattern/CBuilder2.h"
#include "../BuilderPattern/Product.h"

class TestBuilder
{
public:
	TestBuilder() {

		IBuilder* builder = new CBuilder1();
		Director* director = new Director(builder);
		director->Construct();
		Product* product = builder->getProduct();
		if (product == NULL){
			std::cout << "The product is NULL" << endl;;
		}
		product->display();

		builder = new CBuilder2();
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
