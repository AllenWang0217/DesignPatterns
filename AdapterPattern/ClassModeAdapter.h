#pragma once
#include "Target.h"
#include "Adaptee.h"

//��ģʽ���������࣬ͨ��public�̳л�ýӿڼ̳е�Ч����ͨ��private�̳л��ʵ�ּ̳е�Ч��
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