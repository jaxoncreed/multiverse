
#include "stdafx.h"
#include "stdlib.h"
#include "iostream"

#include "LocalTimeController.h"


LocalTimeController::LocalTimeController() {

}

LocalTimeController::LocalTimeController(ITimeController controller) {
	timeOperator = controller;
}

bool LocalTimeController::isFull() {
	return size==0;
}

TimePosHolder LocalTimeController::getArray() {
	return timePosArray;
}

void LocalTimeController::createTimeController(ITimeController controller) {
	timeOperator = controller;
}


int main()
{
	std::cout << "hi\n";
	system ("PAUSE");
	return 0;
}

