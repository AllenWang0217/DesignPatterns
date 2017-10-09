#pragma once

class Prototype
{
public:
	Prototype() {}
	virtual ~Prototype() {}

	virtual Prototype * clone() = 0;
};
