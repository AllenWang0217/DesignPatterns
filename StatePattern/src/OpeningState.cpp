#include "../inc/OpeningState.h"
#include "../inc/ClosingState.h"

void OpeningState::close() {
	cout << "���ݿ��ˣ������˰��Ź���: ";
	getContext()->setState(new ClosingState());
	getContext()->close();
}