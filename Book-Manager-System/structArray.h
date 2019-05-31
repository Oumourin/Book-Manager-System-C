#pragma once
#include"borrowingRecord.h"

struct CstructArray
{
	struct CborrowingRecord recordArray[1000];
	unsigned int arraySize;
	CstructArray()
	{
		arraySize = 0;
	}
};

//  添加元素方法
void addborrowingRecord(struct CborrowingRecord rd);