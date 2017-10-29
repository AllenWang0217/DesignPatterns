#pragma once
#include "IVisitor.h"
#include "IElement.h"


class Visitor1 : public IVisitor {
	virtual void visit(IElement* element) {
		element->doSomething();
	}
};
