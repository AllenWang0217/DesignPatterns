#include "../inc/CFactory1.h"
#include "../inc/CProductA2.h"
#include "../inc/CProductB2.h"

IProductA* CFactory1::CreateProductA()
{
	std::cout << "Now we are producting A_2" << std::endl;
	return new CProductA2();
}

IProductB* CFactory1::CreateProductB()
{
	std::cout << "Now we are producting B_2" << std::endl;
	return new CProductB2();
}
