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

	//�������캯��
    CPrototype2(const CPrototype2 & rhs)
	{
        phrase = rhs.phrase;
	}

	//��������
	virtual CPrototype2 * clone()
	{
		//���ÿ������캯��
		return new CPrototype2(*this);
	}

private:
    string phrase;
};
