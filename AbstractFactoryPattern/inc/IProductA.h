#pragma once

class IProductA
{
public:
	IProductA(void) {};
	~IProductA(void) {};

public:
	virtual void SetProductInfo() = 0;
};
