#include "IColleague.h"
#include "Mediator.h"

void IColleague::changeNumber(int number, Mediator* med) {
	this->number = number;
	med->affect(number, this);
}