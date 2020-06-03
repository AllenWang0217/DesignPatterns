#pragma once
#include "../StatePattern/inc/Context.h"
#include "../StatePattern/inc/State.h"
#include "../StatePattern/inc/OpeningState.h"
using namespace std;

class TestState {
public:
	TestState() {
		Context* context = new Context();
		context->setState(new OpeningState());
        cout << "�������ˣ����ţ� ";
		context->open();
		context->close();
		context->run();
		context->stop();
		context->open();
	}
};
