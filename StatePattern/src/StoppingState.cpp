#include "../inc/StoppingState.h"
#include "../inc/OpeningState.h"

void StoppingState::open() {
	cout << "����ͣ�ˣ����� : ";
	getContext()->setState(new OpeningState());
	getContext()->open();
}