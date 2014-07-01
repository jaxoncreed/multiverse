#include "TimePosHolder.h"
#include "Pos.h"
#include <stdlib.h>
#include <cstring>


const int DEFAULT_FRAME_CAPTURE_SIZE = 1600;

TimePosHolder::TimePosHolder() {
	size = 0;
	sizeBoundary = DEFAULT_FRAME_CAPTURE_SIZE;
	data = (Pos *)malloc(sizeBoundary);
	dataBuffer = (Pos *)malloc(sizeBoundary);
}

TimePosHolder::TimePosHolder(Pos *cData, size_t cSize) {
	data = cData;
	size = cSize;
}

TimePosHolder::TimePosHolder(TimePosHolder &base) {
	size = base.getSize();
	data = base.getData();
}

Pos TimePosHolder::dataAt(int loc) {
	return data[loc];
}

Pos* TimePosHolder::getData() {
	return data;
}

int TimePosHolder::getSize() {
	return size;
}

void TimePosHolder::appendData(Pos datum) {
	if (checkWithinSize()) {
		dataBuffer[size] = datum;
	} else {
		dumpBuffer();
		dataBuffer[0] = datum;
		size = 1;
	}
}

void TimePosHolder::appendDataAt(Pos datum, size_t loc) {
	
}

void TimePosHolder::setSizeBoundary(size_t newSize) {
	sizeBoundary = newSize;
}



////////////PRIVATE////////////
void TimePosHolder::dumpBuffer() {
	memcpy(data, dataBuffer, size);
}

