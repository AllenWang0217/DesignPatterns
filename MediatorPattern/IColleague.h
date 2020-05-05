#pragma once
class Mediator;

class IColleague {
public:
	int getNumber() {
		return number;
	}
	void setNumber(int number) {
		this->number = number;
	}

	void changeNumber(int number, Mediator* med);
protected:
	int number;
};
