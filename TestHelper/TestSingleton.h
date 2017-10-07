#pragma once
#include <iostream>
#include "../SingletonPattern/Singleton.h"

class TestSingleton {
public:
	TestSingleton(void) {
		Singleton* singleton1 = Singleton::getInstance();
		Singleton* singleton2 = Singleton::getInstance();

		if (singleton1 == singleton2)
			std::cout << "singleton1 = singleton2\n" << std::endl;
		else
			std::cout << "singleton1 != singleton2\n" << std::endl;

		//Singleton::destoryInstance(); //手动销毁实例
	}
};