#pragma once
#include "Strategy.h"

class Context {
public:
	Context(Strategy* strategy) : strategy(strategy) {};
	void setStrategy(Strategy* strategy) { this->strategy = strategy; }
	void doAlgorithm() {
		strategy->algorithm();
	}
private:
	Strategy* strategy;
};