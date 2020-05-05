#include "../inc/CFactoryA.h"
#include "../inc/CProductA.h"

IProduct* CFactoryA::CreateProduct()
{
	std::cout << "Now we are producting A" << std::endl;
	return new CProductA();
}
