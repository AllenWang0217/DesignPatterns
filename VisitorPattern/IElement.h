#pragma once
#include <string>
using namespace std;

#include "IVisitor.h"
#include <iostream>
using namespace std;

class IElement {
public:
	virtual void doSomething() = 0;
	virtual void doOtherthing() = 0;
	virtual void accept(IVisitor* visitor) {
		visitor->visit(this);
	};
};