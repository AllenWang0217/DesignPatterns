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

		cout << "==========设置A影响B==========" << endl;
		collA->changeNumber(1000, med);
		cout << "collA的number值：" << collA->getNumber() << endl;
		cout << "collB的number值：" << collB->getNumber() << endl;

		cout << "==========设置B影响A==========" << endl;
		collB->changeNumber(1000, med);
		cout << "collB的number值：" << collB->getNumber() << endl;
		cout << "collA的number值：" << collA->getNumber() << endl;

	}
};