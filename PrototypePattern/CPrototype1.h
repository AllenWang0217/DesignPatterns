#pragma once

#include <iostream>
#include "Prototype.h"

class CPrototype1 : public Prototype
{
public:
    CPrototype1() : m_counter(0) {}
	void setCounter(int a) { this->m_counter = a; }
	void showCounter() { std::cout << "m_counter is : " << m_counter << std::endl; }
	virtual ~CPrototype1() {}

	//�������캯��
    CPrototype1(const CPrototype1 & rhs)
	{
		m_counter = rhs.m_counter;
	}

	//��������
	virtual CPrototype1 * clone()
	{
		//���ÿ������캯��
		return new CPrototype1(*this);
	}

private:
	int m_counter;
};
