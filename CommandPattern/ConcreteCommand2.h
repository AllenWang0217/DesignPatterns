#pragma once
#include "Command.h"
#include "Receiver.h"

class ConcreteCommand2 : public Command {
public:
	void execute() {
		receiver->doCommand2();
	};
private:
	Receiver* receiver;
};