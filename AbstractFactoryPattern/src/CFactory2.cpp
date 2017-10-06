#include "../inc/CFactory2.h"
#include "../inc/CProductA2.h"
#include "../inc/CProductB2.h"

IProductA* CFactory2::CreateProductA()
{
	std::cout << "Now we are producting A_2" << std::endl;
	return new CProductA2();
}

IProductB* CFactory2::CreateProductB()
{
	std::cout << "Now we are producting B_2" << std::endl;
	return new CProductB2();
}
