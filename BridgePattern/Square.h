#pragma once
#include "Shape.h"
#include <iostream>
using namespace std;

class Square : public Shape {
public:
	Square(){};
	void setColor(Color* color) { this->color = color; }
	void draw() {
		cout << "Square with color ";
		color->paint();
	}
private:
	Color* color;
};
