#pragma once
#include "Color.h"
#include <iostream>
using namespace std;

class Red : public Color {
public:
	void paint() {
		cout << "Red" << endl;
	}
};
