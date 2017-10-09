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

	//拷贝构造函数
	ConcretePrototype1(const ConcretePrototype1 & rhs)
	{
		m_counter = rhs.m_counter;
	}

	//复制自身
	virtual ConcretePrototype1 * clone()
	{
		//调用拷贝构造函数
		return new ConcretePrototype1(*this);
	}

private:
	int m_counter;
};
