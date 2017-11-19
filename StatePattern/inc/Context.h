#pragma once

class State;

class Context {
public:
	void setState(State* state);
	State* getState();
	void open();
	void stop();
	void run();
	void close();
private:
	State* state;
};