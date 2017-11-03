#include "AbstractColleague.h"
#include "Mediator.h"

void AbstractColleague::changeNumber(int number, Mediator* med) {
	this->number = number;
	med->affect(number, this);
}