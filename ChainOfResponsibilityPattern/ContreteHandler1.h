#pragma once

#include "IHandler.h"
#include <iostream>
using namespace std;

class ContreteHandler1 : public IHandler{
	void HandleEvent(EVENT event) {
		if (EVENT1 == event) {
			cout << "ContreteHandler1 handle EVENT1" << endl;
		}
		else if(nextHendler != nullptr){
			nextHendler->HandleEvent(event);
		}
        else {
            cout << "Unknown EVENT" << endl;
        }
	}
};
