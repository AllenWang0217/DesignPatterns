#pragma once

#include "State.h"
using namespace std;

class StoppingState : public State {
public:
	void stop() { cout << "stopping" << endl; }
public:
	//Implement the next possible action, and doing it
	void open();
};