#include "../inc/RunningState.h"
#include "../inc/StoppingState.h"

void RunningState::stop() {
	cout << "����¥�㣬ֹͣ: ";
	getContext()->setState(new StoppingState());
	getContext()->stop();
}