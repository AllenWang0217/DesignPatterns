#pragma once
#include <string>
using namespace std;
class Originator;

class Momento {
private:
	Momento(string status) :status(status) {};
	string getStatus() { return status; }
	friend class Originator;
	string status;
};
