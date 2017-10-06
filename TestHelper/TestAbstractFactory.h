#pragma once

#include <iostream>
#include "../AbstractFactoryPattern/inc/IFactory.h"
#include "../AbstractFactoryPattern/inc/CFactory1.h"
#include "../AbstractFactoryPattern/inc/CFactory2.h"

void Producting(IFactory *pFactory) {
	if (NULL != pFactory) {
		IProductA *pProductA = pFactory->CreateProductA();
		IProductB *pProductB = pFactory->CreateProductB();
		if (NULL != pProductA && NULL != pProductB) {
			pProductA->SetProductInfo();
			pProductB->SetProductInfo();
			std::cout << "This A and B consist a product" << std::endl << std::endl;
		}
		delete pProductA;
		delete pProductB;
	}
}

class TestAbstractFactory
{
public:
	TestAbstractFactory() {
		/*Use CFactory1 to product A1 and B1*/
		IFactory *pFactory = new CFactory1();
		Producting(pFactory);

		/*Use CFactory2 to product A2 and B2*/
		pFactory = new CFactory2();
		Producting(pFactory);
	}
};
