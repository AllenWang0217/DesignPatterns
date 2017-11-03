#pragma once
#include "../MediatorPattern/AbstractColleague.h"
#include "../MediatorPattern/ColleagueA.h"
#include "../MediatorPattern/ColleagueB.h"
#include "../MediatorPattern/Mediator.h"
#include <iostream>
using namespace std;

class TestMediator {
public:
	TestMediator() {

		ColleagueA *collA = new ColleagueA();
		ColleagueB *collB = new ColleagueB();
		Mediator* med = new Mediator(collA, collB);

		cout << "==========����AӰ��B==========" << endl;
		collA->changeNumber(1000, med);
		cout << "collA��numberֵ��" << collA->getNumber() << endl;
		cout << "collB��numberֵ��" << collB->getNumber() << endl;

		cout << "==========����BӰ��A==========" << endl;
		collB->changeNumber(1000, med);
		cout << "collB��numberֵ��" << collB->getNumber() << endl;
		cout << "collA��numberֵ��" << collA->getNumber() << endl;

	}
};