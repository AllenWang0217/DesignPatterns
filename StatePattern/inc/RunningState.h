#pragma once

#include "State.h"
using namespace std;

class RunningState : public State{
public:
	void run() { cout << "running" << endl; }
public:
	//Implement the next possible action, and doing it
	void stop();
};
