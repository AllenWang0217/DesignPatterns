#pragma once
#include "Strategy.h"
class ConcreteStrategy1 :public Strategy {
public:
	void algorithm() {
		std::cout << "ConcreteStrategy1's algorithm" << std::endl;
	}
};
