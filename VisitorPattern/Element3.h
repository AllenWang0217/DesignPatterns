#pragma once

#include "IElement.h"

class Element3 : public IElement {
public:
	Element3(string attr5, string attr6) : attribute5(attr5), attribute6(attr6) {}
	void doSomething() { cout << attribute5 << endl; }
	void doOtherthing() { cout << attribute6 << endl; }
private:
	string attribute5;
	string attribute6;
};
