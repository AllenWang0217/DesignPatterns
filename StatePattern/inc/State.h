#pragma once

#include "Context.h"
#include <iostream>

class State {
public:
	void setContext(Context* context);
	Context* getContext();
	virtual void open() {};
	virtual void stop() {};
	virtual void run() {};
	virtual void close() {};
private:
	Context* context;
};