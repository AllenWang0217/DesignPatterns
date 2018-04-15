#pragma once
#include "Shape.h"
#include <iostream>
using namespace std;

class Circle : public Shape {
public:
	Circle() {};
	void setColor(Color* color) { this->color = color; }
	void draw() {
		cout << "Circle with color ";
		color->paint();
	}
private:
	Color* color;
};
