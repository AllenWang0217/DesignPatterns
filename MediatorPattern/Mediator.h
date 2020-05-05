#pragma once

#include "ColleagueA.h"
#include "ColleagueB.h"
#include <iostream>
#include <typeinfo>
using namespace std;

class Mediator {
public:
	Mediator(ColleagueA* collA, ColleagueB* collB) : collA(collA), collB(collB) {}
	void affect(int number, IColleague* coll) {//�н���ͨ������������жϾ����Ӱ��
		if (coll == collA) {
			collB->setNumber(number * 100);
		}
		if (coll == collB) {
			collA->setNumber(number / 100);
		}
	};
private:
	ColleagueA* collA;
	ColleagueB* collB;
};
