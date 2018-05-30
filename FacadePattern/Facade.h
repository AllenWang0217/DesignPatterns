#pragma once
#include "SubSystemOne.h"
#include "SubSystemTwo.h"
#include "SubSystemThree.h"
#include "SubSystemFour.h"

class Facade {
public:
	void methordA() {
		cout << "methord A consist of : " << endl;
		subSystemOne.methordOne();
		subSystemTwo.methordTwo();
	}
	void methordB() {
		cout << "methord B consist of : " << endl;
		subSystemThree.methordThree();
		subSystemFour.methordFour();
	}
private:
	SubSystemOne subSystemOne;
	SubSystemTwo subSystemTwo;
	SubSystemThree subSystemThree;
	SubSystemFour subSystemFour;
};