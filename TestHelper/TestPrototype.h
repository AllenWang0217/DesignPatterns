#pragma once

#include <iostream>
#include "../PrototypePattern/ConcretePrototype1.h"
#include "../PrototypePattern/ConcretePrototype2.h"

class TestPrototype {
public:
	TestPrototype() {
		//���ɶ���
		ConcretePrototype1 * conProA = new ConcretePrototype1();

		//��������
		ConcretePrototype1 * conProB = conProA->clone();
		conProB->showCounter();

		//�޸�A��״̬�����п�¡
		conProA->setCounter(1);
		conProB = conProA->clone();
		conProB->showCounter();

		delete conProA;
		conProA = NULL;

		delete conProB;
		conProB = NULL;
	}
};
