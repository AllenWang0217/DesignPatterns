#pragma once

#include "Builder.h"

class Director
{
public:
	Director(Builder* builder) { this->builder = builder; }
	~Director() {};
	void setBuilder(Builder* builder) { this->builder = builder; }
	void Construct()
	{
		builder->buildPartA();
		builder->buildPartB();
		builder->buildPartC();
	}
private:
	Builder* builder;
};
