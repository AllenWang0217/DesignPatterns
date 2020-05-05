#pragma once

#include "Prototype.h"
#include <iostream>
#include <string>

using std::string;

class CPrototype2 : public Prototype
{
public:
    CPrototype2() :phrase(0) {}
	void setPhrase(string phrase) { this->phrase = phrase; }
	void showPhrase() { std::cout << "phrase is : " << phrase << std::endl; }
	virtual ~CPrototype2() {}

	//拷贝构造函数
    CPrototype2(const CPrototype2 & rhs)
	{
        phrase = rhs.phrase;
	}

	//复制自身
	virtual CPrototype2 * clone()
	{
		//调用拷贝构造函数
		return new CPrototype2(*this);
	}

private:
    string phrase;
};
