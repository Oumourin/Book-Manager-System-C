#include "structArray.h"
extern struct CstructArray structArray;

void toString(CstructArray sa)
{
	for (int i = 0; i < sa.arraySize; i++)
	{
		toString(sa.recordArray[i]);
	}
}

void toString(CdeletePoint dp)
{
	for (int i = 0; i < structArray.arraySize; i++)
	{
		if (dp.deletePoint[i])
		{
			toString(structArray.recordArray[i]);
		}
	}
}

void addborrowingRecord(CborrowingRecord rd)
{
	structArray.recordArray[structArray.arraySize] = rd;
	structArray.arraySize++;
}

void addborrowingRecord(CstructArray sa, CborrowingRecord rd)
{
	sa.recordArray[sa.arraySize] = rd;
	sa.arraySize++;
}
