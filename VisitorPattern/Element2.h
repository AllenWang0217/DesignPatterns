#pragma once

#include "IElement.h"

class Element2 : public IElement {
public:
	Element2(string attr3, string attr4) : attribute3(attr3), attribute4(attr4) {}
	void doSomething() { cout << attribute3 << endl; }
	void doOtherthing() { cout << attribute4 << endl; }
private:
	string attribute3;
	string attribute4;
};
