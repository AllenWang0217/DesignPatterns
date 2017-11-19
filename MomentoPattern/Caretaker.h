#pragma once
#include "Momento.h"

class CareTaker {
public:
	void saveMomento(Momento* momento) { this->momento = momento; }
	Momento* retriveMomento() { return momento; }
private:
	Momento* momento;
};
