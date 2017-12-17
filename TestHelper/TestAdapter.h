#pragma once
#include "../AdapterPattern/Target.h"
#include "../AdapterPattern/ClassModeAdapter.h"
#include "../AdapterPattern/ObjectModeAdapter.h"

class TestAdapter {
public:
	TestAdapter() {
		//��ģʽAdapter
		Target* pTarget = new ClassModeAdapter();
		pTarget->Request();

		//����ģʽAdapter1
		Adaptee* adaptee = new Adaptee();
		Target* pTarget1 = new ObjectModeAdapter(adaptee);
		pTarget1->Request();

		//����ģʽAdapter2
		Target* pTarget2 = new ObjectModeAdapter();
		pTarget2->Request();
	}
};