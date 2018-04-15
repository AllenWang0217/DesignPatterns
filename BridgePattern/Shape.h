#pragma once
#include "Color.h"

class Shape {
public:
	virtual void setColor(Color* color) {};
	virtual void draw() {};
};
