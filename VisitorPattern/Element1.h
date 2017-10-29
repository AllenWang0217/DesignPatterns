#pragma once

#include "IElement.h"

class Element1 : public IElement{
public:
	Element1(string attr1, string attr2) : attribute1(attr1), attribute2(attr2){}
	void doSomething() { cout << attribute1 << endl; }
	void doOtherthing() { cout << attribute2 << endl; }
private:
	string attribute1;
	string attribute2;
};
