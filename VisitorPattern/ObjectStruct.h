#pragma once
#include "IElement.h"
#include <list>
using namespace std;

class ObjectStruct {
public:
	void attach(IElement* elem) { objStr.push_back(elem); }

	void detach(IElement* elem) { objStr.remove(elem); }

	virtual void accept(IVisitor* visitor) {
		for(std::list<IElement*>::iterator it = objStr.begin(); it != objStr.end(); ++it)
			(*it)->accept(visitor);
	};
private:
	list<IElement* > objStr;
};
