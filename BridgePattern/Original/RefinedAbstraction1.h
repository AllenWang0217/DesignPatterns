#pragma once

#include "Abstractor.h"
#include <iostream>
using namespace std;

class RefinedAbstraction1 : public Abstrator {
public:
	RefinedAbstraction1(Implementor* implementor) : Abstrator(implementor){}
	void operation() { 
		cout << "RefinedAbstraction1 called implementor : ";
		implementor->implement(); 
	}
};