#include "../inc/CFactoryB.h"
#include "../inc/CProductB.h"

IProductBase* CFactoryB::CreateProduct()
{
	std::cout << "Now we are producting B" << std::endl;
	return new CProductB();
}
