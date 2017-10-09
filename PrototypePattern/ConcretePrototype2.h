#pragma once

#include "Prototype.h"

class ConcretePrototype2 : public Prototype
{
public:
	ConcretePrototype2() :m_counter(0) {}
	void setCounter(int a) { this->m_counter = a; }
	void showCounter() { std::cout << "m_counter is : " << m_counter << std::endl; }
	virtual ~ConcretePrototype2() {}

	//�������캯��
	ConcretePrototype2(const ConcretePrototype2 & rhs)
	{
		m_counter = rhs.m_counter;
	}

	//��������
	virtual ConcretePrototype2 * clone()
	{
		//���ÿ������캯��
		return new ConcretePrototype2(*this);
	}

private:
	int m_counter;
};
