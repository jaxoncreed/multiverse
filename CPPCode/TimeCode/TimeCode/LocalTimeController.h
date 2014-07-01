#ifndef JAYUS_LOCAL_TIME_CONTROLLER
#define JAYUS_LOCAL_TIME_CONTROLLER

class TimePosHolder;


class LocalTimeController {
public:
	LocalTimeController();
	LocalTimeController(ITimeController controller);
	bool isFull();
	TimePosHolder getArray();
	void createTimeController(ITimeController controller);
private:
	ITimeController timeOperator;
	TimePosHolder timePosArray;
};
#endif