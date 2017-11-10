#pragma once
#include "Strategy.h"
class ConcreteStrategy2 :public Strategy {
public:
	void algorithm() {
		std::cout << "ConcreteStrategy2's algorithm" << std::endl;
	}
};
