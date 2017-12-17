#pragma once
#include "../AdapterPattern/Target.h"
#include "../AdapterPattern/ClassModeAdapter.h"
#include "../AdapterPattern/ObjectModeAdapter.h"

class TestAdapter {
public:
	TestAdapter() {
		//类模式Adapter
		Target* pTarget = new ClassModeAdapter();
		pTarget->Request();

		//对象模式Adapter1
		Adaptee* adaptee = new Adaptee();
		Target* pTarget1 = new ObjectModeAdapter(adaptee);
		pTarget1->Request();

		//对象模式Adapter2
		Target* pTarget2 = new ObjectModeAdapter();
		pTarget2->Request();
	}
};