#include "../inc/IObserver.h"
#include "../inc/ISubject.h"
#include <iostream>
using namespace std;

string IObserver::getTitle() {
	return this->title;
}

void IObserver::update(ISubject *subject) {
	cout << this->title << " Observered " << subject->getTitle() << ", the status is : "<<subject->getStatus()<<endl;
}