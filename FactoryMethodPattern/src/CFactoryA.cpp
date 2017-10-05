#include "../inc/CFactoryA.h"
#include "../inc/CProductA.h"

IProductBase* CFactoryA::CreateProduct()
{
	std::cout << "Now we are producting A" << std::endl;
	return new CProductA();
}
