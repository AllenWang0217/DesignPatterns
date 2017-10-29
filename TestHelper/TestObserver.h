#pragma once

#include "../ObserverPattern/inc/ISubject.h"
#include "../ObserverPattern/inc/Subject.h"
#include "../ObserverPattern/inc/Observer1.h"
#include "../ObserverPattern/inc/Observer2.h"

class TestObserver {
public:
	TestObserver() {
		Subject *sub = new Subject("Subject");
		Observer1 *obs1 = new Observer1("Observer1");
		Observer2 *obs2 = new Observer2("Observer2");
		sub->attach(obs1);
		sub->attach(obs2);
		sub->notify();
		sub->changeStatus(STATUS_1);
		delete sub;
		delete obs1;
		delete obs2;
	}
};