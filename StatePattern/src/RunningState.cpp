#include "../inc/RunningState.h"
#include "../inc/StoppingState.h"

void RunningState::stop() {
	cout << "µ½´ïÂ¥²ã£¬Í£Ö¹: ";
	getContext()->setState(new StoppingState());
	getContext()->stop();
}