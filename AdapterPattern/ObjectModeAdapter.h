#pragma once
#include "Target.h"
#include "Adaptee.h"

class ObjectModeAdapter :public Target {
public:
	ObjectModeAdapter() : adaptee(new Adaptee()) {};
	ObjectModeAdapter(Adaptee* adaptee) : adaptee(adaptee) {};
	~ObjectModeAdapter() {};
	void Request() {
		cout << "ObjectModeAdapter::Request()" << endl;
		adaptee->SpecificRequest();
		cout << "----------------------------" << endl;
	}
private:
	Adaptee* adaptee;
};