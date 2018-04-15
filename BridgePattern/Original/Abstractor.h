#pragma once
#include "Implementor.h"

class Abstrator {
public:
	Abstrator(Implementor* implementor) : implementor(implementor) {};
	void setImplementor(Implementor* implementor) { this->implementor = implementor; }
	virtual void operation() = 0;
protected:
	Implementor* implementor;
};