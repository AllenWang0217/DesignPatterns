#pragma once
#include "../StrategyPattern/Context.h"
#include "../StrategyPattern/ConcreteStrategy1.h"
#include "../StrategyPattern/ConcreteStrategy2.h"

class TestStrategy{
public:
	TestStrategy() {
		Context context(new ConcreteStrategy1());
		context.doAlgorithm();

		std::cout << std::endl;

		context.setStrategy(new ConcreteStrategy2());
		context.doAlgorithm();
	}
};