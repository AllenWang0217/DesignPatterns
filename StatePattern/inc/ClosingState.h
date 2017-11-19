#pragma once

#include "State.h"
using namespace std;

class ClosingState : public State {
public:
	void close() { cout << "closeing" << endl; }
public:
	//Implement the next possible action, and doing it
	void open();
	void run();
	void stopping();
};