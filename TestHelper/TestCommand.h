#pragma once
#include "../CommandPattern/Invoker.h"
#include "../CommandPattern/Command.h"
#include "../CommandPattern/ConcreteCommand1.h"
#include "../CommandPattern/ConcreteCommand2.h"
#include "../CommandPattern/Receiver.h"
#include "../CommandPattern/UndoRedo/CommandManager.h"
using namespace std;
class TestCommand {
public:
	TestCommand(){
		Invoker* invoker = new Invoker();
		Command* concreteCommand1 = new ConcreteCommand1();
		Command* concreteCommand2 = new ConcreteCommand2();

		invoker->addCommand(concreteCommand1);
		invoker->addCommand(concreteCommand2);
		invoker->doCommand();

		invoker->delCommand();
		invoker->doCommand();

		cout << "Test redo and undo" << endl;

		CommandManager* commandManager = new CommandManager();
		commandManager->doCommand(concreteCommand1);
		commandManager->doCommand(concreteCommand2);
		commandManager->redoCommand();
		commandManager->redoCommand();
		commandManager->undoCommand();
		commandManager->redoCommand();


		delete invoker;
		delete concreteCommand1;
		delete concreteCommand2;
	}
};