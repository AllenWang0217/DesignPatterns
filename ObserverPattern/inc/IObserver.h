#pragma once
#include <string>

class ISubject;

using namespace std;

class IObserver {
public:
	IObserver(string title) : title(title) {}
	string getTitle();
	void update(ISubject *subject);
private:
	string title;
};
