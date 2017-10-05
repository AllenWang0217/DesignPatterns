#pragma once

#include "stdio.h"
#include "../FactoryMethodPattern/inc/IFactorybase.h"
#include "../FactoryMethodPattern/inc/CFactoryA.h"
#include "../FactoryMethodPattern/inc/CFactoryB.h"

class TestFactoryMethod
{
public:
	TestFactoryMethod() {
		/*We use CFactoryA to product A*/
		IFactoryBase *pFactory = new CFactoryA();
		if (NULL != pFactory){
			IProductBase *pProductBase = pFactory->CreateProduct();
			if (NULL != pProductBase){
				pProductBase->SetProductInfo();
			}
			delete pProductBase;
		}

		/*Then we use CFactoryB to product B*/
		pFactory = new CFactoryB();
		if (NULL != pFactory){
			IProductBase *pProductBase = pFactory->CreateProduct();
			if (NULL != pProductBase){
				pProductBase->SetProductInfo();
			}
			delete pProductBase;
		}

		delete pFactory;
	}
};
