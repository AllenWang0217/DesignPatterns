#pragma once
#include "Command.h"
#include <list>
using namespace std;

class Invoker {
public:
	void addCommand(Command* command) {
		commandList.push_back(command);
	}
	void delCommand() {
		commandList.pop_back();
	}
	void doCommand() {
		for (list<Command*>::iterator iter = commandList.begin(); iter != commandList.end(); iter++) {
			(*iter)->execute();
		}
	}
private:
	list<Command*> commandList;
};