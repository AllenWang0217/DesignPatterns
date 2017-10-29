#pragma once
#include "ISubject.h"

class Subject : public ISubject {
public:
	Subject(string title) : ISubject(title), title(title) {}
private:
	string title;
};