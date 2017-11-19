#include "../inc/ClosingState.h"
#include "../inc/OpeningState.h"
#include "../inc/RunningState.h"
#include "../inc/StoppingState.h"

void ClosingState::open() {
	cout << "电梯关了，再打开 : ";
	getContext()->setState(new OpeningState());
	getContext()->open();
}

void ClosingState::run() {
	cout << "电梯关了，开始运行: ";
	getContext()->setState(new RunningState());
	getContext()->run();
}

void ClosingState::stopping() {
	cout << "电梯关了，没按楼层，时间都静止了: ";
	getContext()->setState(new StoppingState());
	getContext()->stop();
}