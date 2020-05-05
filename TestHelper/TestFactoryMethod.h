#pragma once

#include "stdio.h"
#include "../FactoryMethodPattern/inc/IFactory.h"
#include "../FactoryMethodPattern/inc/CFactoryA.h"
#include "../FactoryMethodPattern/inc/CFactoryB.h"

class TestFactoryMethod
{
public:
	TestFactoryMethod() {
		/*We use CFactoryA to product A*/
		IFactory *pFactory = new CFactoryA();
		if (NULL != pFactory){
			IProduct *pProductBase = pFactory->CreateProduct();
			if (NULL != pProductBase){
				pProductBase->SetProductInfo();
			}
			delete pProductBase;
		}

		/*Then we use CFactoryB to product B*/
		pFactory = new CFactoryB();
		if (NULL != pFactory){
			IProduct *pProductBase = pFactory->CreateProduct();
			if (NULL != pProductBase){
				pProductBase->SetProductInfo();
			}
			delete pProductBase;
		}

		delete pFactory;
	}
};
