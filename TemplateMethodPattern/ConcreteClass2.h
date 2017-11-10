#pragma once

#include "AbstractClass.h"

class ConcreteClass2 : public AbstractClass {
public:
	void step1() {
		std::cout << " Use ConcreteClass2's step 1" << std::endl;
	}
	void step2() {
		std::cout << " Use ConcreteClass2's step 2" << std::endl;
	}
	void step3() {
		std::cout << " Use ConcreteClass2's step 3" << std::endl;
	}
};