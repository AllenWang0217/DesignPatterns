#pragma once

#include "IHandler.h"
#include <iostream>
using namespace std;

class ContreteHandler2 : public IHandler {
	void HandleEvent(EVENT event) {
		if (EVENT2 == event) {
			cout << "ContreteHandler2 handle EVENT2" << endl;
		}
        else if (nextHendler != nullptr) {
            nextHendler->HandleEvent(event);
        }
        else {
            cout << "Unknown EVENT" << endl;
        }
	}
};
