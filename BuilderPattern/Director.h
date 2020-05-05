#pragma once

#include "IBuilder.h"

class Director
{
public:
	Director(IBuilder* builder) { this->builder = builder; }
	~Director() {};
	void setBuilder(IBuilder* builder) { this->builder = builder; }
	void Construct()
	{
		builder->buildPartA();
		builder->buildPartB();
		builder->buildPartC();
	}
private:
    IBuilder* builder;
};
