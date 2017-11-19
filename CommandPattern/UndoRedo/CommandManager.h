#pragma once
#include "../Command.h"
#include <list>
using namespace std;

class CommandManager {
public:
	void doCommand(Command* command) {
		command->execute();
		redoList.push_front(command);

	}
	void undoCommand() {
		if (redoList.size() > maxCommandNum) redoList.pop_back();
		redoList.push_front(undoList.front());
		undoList.pop_front();
	}
	void redoCommand() {
		redoList.front()->execute();
		if (undoList.size() > maxCommandNum) undoList.pop_back();
		undoList.push_front(redoList.front());
		redoList.pop_front();
	}
private:
	list<Command*> undoList;
	list<Command*> redoList;
	static int maxCommandNum;
};

int CommandManager::maxCommandNum = 5;