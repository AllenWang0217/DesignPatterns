#pragma once

#include <iostream>
#include "../PrototypePattern/CPrototype1.h"
#include "../PrototypePattern/CPrototype2.h"

class TestPrototype {
public:
	TestPrototype() {
		//生成对像
		CPrototype1 * conProA = new CPrototype1();

		//复制自身
		CPrototype1 * conProB = conProA->clone();
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
