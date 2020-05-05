#include "../inc/CFactoryB.h"
#include "../inc/CProductB.h"

IProduct* CFactoryB::CreateProduct()
{
	std::cout << "Now we are producting B" << std::endl;
	return new CProductB();
}
