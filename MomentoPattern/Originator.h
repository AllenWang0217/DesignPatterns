#pragma once

#include <string>
#include <iostream>
#include "Momento.h"
using namespace std;

class Originator {
public:
	Momento *createMomento() { return new Momento(status); }
	void restoreFromMomento(Momento* memonto) { this->status = memonto->getStatus(); }
	void setStatus(string status) { this->status = status; }
	void showStatus() { cout << status << endl; }
private:
	string status;
};
