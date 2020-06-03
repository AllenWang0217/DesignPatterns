#pragma once

#include "Context.h"
#include <iostream>

using namespace std;

class State {
public:
	void setContext(Context* context);
	Context* getContext();
    virtual void open() { cout << "WRONG state to open" << endl; };
	virtual void stop() { cout << "WRONG state to stop" << endl; };
	virtual void run() { cout << "WRONG state to run" << endl; };
	virtual void close() { cout << "WRONG state to close" << endl; };
private:
	Context* context;
};