#pragma once
#include <iostream>
using namespace std;

class Target {
public:
	Target() {};
	~Target() {};
	virtual void Request() {
		cout << "Target's Request" << endl;
	}
};
