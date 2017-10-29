#pragma once
#include "IObserver.h"

class Observer1 : public IObserver {
public:
	Observer1(string title) : IObserver(title), title(title) {}
private:
	string title;
};

