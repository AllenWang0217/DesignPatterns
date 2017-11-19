#pragma once
#include "Command.h"
#include "Receiver.h"

class ConcreteCommand1 : public Command {
public:
	void execute() {
		receiver->doCommand1();
	};
private:
	Receiver* receiver;
};