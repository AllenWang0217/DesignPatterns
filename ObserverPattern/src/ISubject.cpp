#include "../inc/ISubject.h"

string ISubject::getTitle() {
	return title;
}

void ISubject::attach(IObserver* observer) {
	observers.push_back(observer);
}

void ISubject::detach(IObserver* observer) {
	observers.remove(observer);
}

void ISubject::changeStatus(STATUS status) {
	this->status = status;
	notify();
}

STATUS ISubject::getStatus() {
	return this->status;
}

void ISubject::notify() {
	list<IObserver*>::iterator iter = observers.begin();
	for (; iter != observers.end(); iter++)
		(*iter)->update(this);
}
