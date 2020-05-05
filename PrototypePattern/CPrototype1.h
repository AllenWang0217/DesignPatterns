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

	//拷贝构造函数
    CPrototype1(const CPrototype1 & rhs)
	{
		m_counter = rhs.m_counter;
	}

	//复制自身
	virtual CPrototype1 * clone()
	{
		//调用拷贝构造函数
		return new CPrototype1(*this);
	}

private:
	int m_counter;
};
