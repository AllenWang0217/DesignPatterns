#pragma once
#include "Color.h"
#include <iostream>
using namespace std;

class Blue : public Color {
public:
	void paint() {
		cout << "Blue" << endl;
	}
};
