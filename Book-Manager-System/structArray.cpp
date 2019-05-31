#include "structArray.h"
extern struct CstructArray structArray;

void addborrowingRecord(CborrowingRecord rd)
{
	structArray.recordArray[structArray.arraySize] = rd;
	structArray.arraySize++;
}
