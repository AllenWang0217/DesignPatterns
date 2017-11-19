#include "../inc/Context.h"
#include "../inc/State.h"

void Context::setState(State* state) {
	this->state = state;
	this->state->setContext(this);
}
State* Context::getState() { return state; }
void Context::open() { state->open(); }
void Context::stop() { state->stop(); }
void Context::run() { state->run(); }
void Context::close() { state->close(); }
