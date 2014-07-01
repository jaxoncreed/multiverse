#ifndef Time_Pos_Holder
#define Time_Pos_Holder
/*
 * This class is used to hold positional data in a Pos array. It keeps track of its size, and
 * a pointer to the start of the Pos array. This is basically an implementation of a vector.
 *
 * The buffer is necessary to avoid constantly moving data down the array everytime one
 * piece of data is added (ergo each frame in game). The buffer and data arrays are of 
 * equal capacity size. When the buffer is filled, it gets dumped to the data array,
 * and the buffer gets filled up one by one again. Reads are done off of the dumped data
 * array only (or the buffer if the data array is empty)
 */
class Pos;
class TimePosHolder {
public:
	TimePosHolder();
	TimePosHolder(Pos* cData, int cSize);
	TimePosHolder(TimePosHolder &base);
	Pos dataAt(int loc);
	Pos* getData();
	size_t getSize();
	void appendData(Pos datum);
	void appendDataAt(Pos datum, size_t loc); //to be implemented
	void setSizeBoundary(size_t newSize);
private:
	void dumpBuffer();
	boolean checkWithinSize();
	size_t sizeBoundary;
	size_t size;
	Pos *data;
	Pos *dataBuffer;
};
#endif