#pragma once
#include "IElement.h"
#include <list>
using namespace std;

class ObjectStruct {
public:
	void attach(IElement* elem) { elems.push_back(elem); }

	void detach(IElement* elem) { elems.remove(elem); }

	virtual void accept(IVisitor* visitor) {
		for(std::list<IElement*>::iterator it = elems.begin(); it != elems.end(); ++it)
			(*it)->accept(visitor);
	};
private:
	list<IElement* > elems;
};
