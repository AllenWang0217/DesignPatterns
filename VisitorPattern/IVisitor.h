#pragma once
class IElement;

class IVisitor {
public:
	virtual void visit(IElement* element) = 0;
};