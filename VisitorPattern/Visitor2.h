#pragma once
#include "IVisitor.h"
#include "IElement.h"


class Visitor2 : public IVisitor {
	virtual void visit(IElement* element) {
		element->doOtherthing();
	}
};
