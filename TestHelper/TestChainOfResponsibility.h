#pragma once

#include "../ChainOfResponsibilityPattern/IHandler.h"
#include "../ChainOfResponsibilityPattern/ContreteHandler1.h"
#include "../ChainOfResponsibilityPattern/ContreteHandler2.h"
#include "../ChainOfResponsibilityPattern/ContreteHandler3.h"

class TestChainOfResponsibility {
public:
	TestChainOfResponsibility() {
		IHandler* ch1 = new ContreteHandler1();
		IHandler* ch2 = new ContreteHandler2();
		IHandler* ch3 = new ContreteHandler3();

		ch1->setNextHandler(ch2);
		ch2->setNextHandler(ch3);
        ch2->setNextHandler(nullptr);

		ch1->HandleEvent(EVENT1);
		ch1->HandleEvent(EVENT2);
		ch1->HandleEvent(EVENT3);

		delete ch1;
		delete ch2;
		delete ch3;
	}
};
