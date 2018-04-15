#pragma once

#pragma once
#include "Implementor.h"
#include <iostream>
using namespace std;

class ConcreteImplementor2 : public Implementor
{
public:
	void implement() {
		cout << "ConcreteImplementor2's implement" << endl;
	}
};