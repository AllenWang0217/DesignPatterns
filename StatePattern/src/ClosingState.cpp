#include "../inc/ClosingState.h"
#include "../inc/OpeningState.h"
#include "../inc/RunningState.h"
#include "../inc/StoppingState.h"

void ClosingState::open() {
	cout << "���ݹ��ˣ��ٴ� : ";
	getContext()->setState(new OpeningState());
	getContext()->open();
}

void ClosingState::run() {
	cout << "���ݹ��ˣ���ʼ����: ";
	getContext()->setState(new RunningState());
	getContext()->run();
}

void ClosingState::stopping() {
	cout << "���ݹ��ˣ�û��¥�㣬ʱ�䶼��ֹ��: ";
	getContext()->setState(new StoppingState());
	getContext()->stop();
}