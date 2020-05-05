#include "../inc/CFactory1.h"
#include "../inc/CProductA1.h"
#include "../inc/CProductB1.h"

IProductA* CFactory1::CreateProductA()
{
	std::cout << "Now we are producting A_1" << std::endl;
	return new CProductA1();
}

IProductB* CFactory1::CreateProductB()
{
	std::cout << "Now we are producting B_1" << std::endl;
	return new CProductB1();
}
