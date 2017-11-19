#pragma once

#include "../MomentoPattern/Caretaker.h"
#include "../MomentoPattern/Originator.h"
using namespace std;

class TestMomento {
public:
	TestMomento() {
		Originator* originator = new Originator();
		CareTaker* caretaker = new CareTaker();

		cout << "The frist state is : ";
		originator->setStatus("STAGE1");
		originator->showStatus();

		caretaker->saveMomento(originator->createMomento());

		cout << "The next state is : ";
		originator->setStatus("STAGE2");
		originator->showStatus();

		cout << "Use Momento to retrive state is : ";
		originator->restoreFromMomento(caretaker->retriveMomento());
		originator->showStatus();
	}
};
