#pragma once

#include <iostream>
#include "Prototype.h"

class ConcretePrototype1 : public Prototype
{
public:
	ConcretePrototype1() : m_counter(0) {}
	void setCounter(int a) { this->m_counter = a; }
	void showCounter() { std::cout << "m_counter is : " << m_counter << std::endl; }
	virtual ~ConcretePrototype1() {}

	//�������캯��
	ConcretePrototype1(const ConcretePrototype1 & rhs)
	{
		m_counter = rhs.m_counter;
	}

	//��������
	virtual ConcretePrototype1 * clone()
	{
		//���ÿ������캯��
		return new ConcretePrototype1(*this);
	}

private:
	int m_counter;
};
