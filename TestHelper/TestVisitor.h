#pragma once
#include <iostream>
#include "../VisitorPattern/ObjectStruct.h"
#include "../VisitorPattern/Element1.h"
#include "../VisitorPattern/Element2.h"
#include "../VisitorPattern/Element3.h"
#include "../VisitorPattern/IVisitor.h"
#include "../VisitorPattern/Visitor1.h"
#include "../VisitorPattern/Visitor2.h"

class TestVisitor {
public:
	TestVisitor() {
		ObjectStruct* objectStruct = new ObjectStruct();
		objectStruct->attach(new Element1("attr1", "attr2"));
		objectStruct->attach(new Element2("attr3", "attr4"));
		objectStruct->attach(new Element3("attr5", "attr6"));

		//?Create?two?visitors??
		IVisitor* visitor1 = new Visitor1();
		IVisitor* visitor2 = new Visitor2();

		//?Employees?are?visited??
		std::cout << "Visitor1 begin to visit" << std::endl;
		objectStruct->accept(visitor1);
		std::cout << "Visitor2 begin to visit" << std::endl;
		objectStruct->accept(visitor2);
	}
};
