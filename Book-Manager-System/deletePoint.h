#pragma once
#include<memory.h>

// ɾ����־λ
struct CdeletePoint
{
	bool deletePoint[1000];
	unsigned int arraySize;
	CdeletePoint()
	{
		arraySize = 1000;
		memset(deletePoint, false, arraySize);
	}
};


