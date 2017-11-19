#pragma once

#include "State.h"
using namespace std;

class OpeningState : public State{
public:
	void open() { cout << "opening" << endl; }
public:
	//Implement the next possible action, and doing it
	void close();
};