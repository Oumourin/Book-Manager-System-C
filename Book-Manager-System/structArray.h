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

//  ���Ԫ�ط���
void addborrowingRecord(struct CborrowingRecord rd);