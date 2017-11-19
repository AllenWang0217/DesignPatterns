#include "../inc/StoppingState.h"
#include "../inc/OpeningState.h"

void StoppingState::open() {
	cout << "电梯停了，开门 : ";
	getContext()->setState(new OpeningState());
	getContext()->open();
}