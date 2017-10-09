#pragma once

#include "Prototype.h"

class ConcretePrototype2 : public Prototype
{
public:
	ConcretePrototype2() :m_counter(0) {}
	void setCounter(int a) { this->m_counter = a; }
	void showCounter() { std::cout << "m_counter is : " << m_counter << std::endl; }
	virtual ~ConcretePrototype2() {}

	//拷贝构造函数
	ConcretePrototype2(const ConcretePrototype2 & rhs)
	{
		m_counter = rhs.m_counter;
	}

	//复制自身
	virtual ConcretePrototype2 * clone()
	{
		//调用拷贝构造函数
		return new ConcretePrototype2(*this);
	}

private:
	int m_counter;
};
