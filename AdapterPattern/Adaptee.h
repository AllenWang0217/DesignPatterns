#pragma once

#include <iostream>
using namespace std;

class Adaptee {
public:
	Adaptee() {};
	~Adaptee() {};
	void SpecificRequest() {
		cout << "Adaptee's SpecificRequest" << endl;
	}
};
