#pragma once
#include "IObserver.h"

class Observer2 : public IObserver {
public:
	Observer2(string title) : IObserver(title), title(title) {}
private:
	string title;
};

