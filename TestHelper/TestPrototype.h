#pragma once

#include <iostream>
#include "../PrototypePattern/CPrototype1.h"
#include "../PrototypePattern/CPrototype2.h"

class TestPrototype {
public:
	TestPrototype() {
		//���ɶ���
		CPrototype1 * conProA = new CPrototype1();

		//��������
		CPrototype1 * conProB = conProA->clone();
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
