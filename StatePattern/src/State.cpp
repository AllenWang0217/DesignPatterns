#include "../inc/Context.h"
#include "../inc/State.h"

void State::setContext(Context* context) {
	this->context = context;
}
Context* State::getContext() { return context; }