#pragma once
#include "IObserver.h"
#include <list>

using namespace std;

enum STATUS {
	STATUS_0,
	STATUS_1,
	STATUS_2
};

class ISubject {
public:
	ISubject(string title) : title(title) {}
	string getTitle();
	void attach(IObserver* observer);
	void detach(IObserver* observer);
	void changeStatus(STATUS status);
	STATUS getStatus();
	void notify();
private:
	string title;
	STATUS status;
	list<IObserver*> observers;
};