#pragma once

#include "IHandler.h"
#include <iostream>
using namespace std;

class ContreteHandler3 : public IHandler {
	void HandleEvent(EVENT event) {
		if (EVENT3 == event) {
			cout << "ContreteHandler3 handle EVENT3" << endl;
		}
		else {
			cout << "Unknown EVENT" << endl;
		}
	}
};
