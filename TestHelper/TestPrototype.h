#pragma once

#include <iostream>
#include "../PrototypePattern/ConcretePrototype1.h"
#include "../PrototypePattern/ConcretePrototype2.h"

class TestPrototype {
public:
	TestPrototype() {
		//生成对像
		ConcretePrototype1 * conProA = new ConcretePrototype1();

		//复制自身
		ConcretePrototype1 * conProB = conProA->clone();
		conProB->showCounter();

		//修改A的状态并进行克隆
		conProA->setCounter(1);
		conProB = conProA->clone();
		conProB->showCounter();

		delete conProA;
		conProA = NULL;

		delete conProB;
		conProB = NULL;
	}
};
