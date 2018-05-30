#pragma once
#include "../FacadePattern/Facade.h"

class TestFacade {
public:
	TestFacade() {
		Facade facade;
		facade.methordA();
		facade.methordB();
	}
};