#include "../inc/OpeningState.h"
#include "../inc/ClosingState.h"

void OpeningState::close() {
	cout << "电梯开了，进完人把门关上: ";
	getContext()->setState(new ClosingState());
	getContext()->close();
}