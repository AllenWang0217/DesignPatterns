#pragma once

#include "Abstractor.h"
#include <iostream>
using namespace std;

class RefinedAbstraction2 : public Abstrator {
public:
	RefinedAbstraction2(Implementor* implementor) : Abstrator(implementor) {}
	void operation() {
		cout << "RefinedAbstraction2 called implementor : ";
		implementor->implement();
	}
};