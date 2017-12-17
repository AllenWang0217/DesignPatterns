#pragma once
#include "Target.h"
#include "Adaptee.h"

//类模式，适配器类，通过public继承获得接口继承的效果，通过private继承获得实现继承的效果
class ClassModeAdapter : public Target, private Adaptee {
public:
	ClassModeAdapter() {};
	~ClassModeAdapter() {};
	void Request() {
		cout << "ClassModeAdapter::Request()" << endl;
		this->SpecificRequest();
		cout << "----------------------------" << endl;
	}
};