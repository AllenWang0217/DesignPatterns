#pragma once
#include "Implementor.h"
#include <iostream>
using namespace std;

class ConcreteImplementor1 : public Implementor
{
public:
	void implement() {
		cout << "ConcreteImplementor1's implement" << endl;
	}
};