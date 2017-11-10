#pragma once
#include <iostream>

class AbstractClass {
public:
	virtual void step1() = 0;
	virtual void step2() = 0;
	virtual void step3() = 0;
	void Algorithm(){
		step1();
		step2();
		step3();
	};
};