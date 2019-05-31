#include "deleteRecord.h"
#include"structArray.h"
#include"deletePoint.h"

extern struct CstructArray structArray;

void deleteFunction(int startPoint)
{
	for ( int i = structArray.arraySize-1 ; i > startPoint; i--)
	{
		structArray.recordArray[i - 1] = structArray.recordArray[i];
		structArray.arraySize--;
	}
}

void printDeleteRecord(CdeletePoint dp)
{
	toString(dp);
}

void deleteRecordByBookNumber(struct CdeletePoint dp)
{
	for (int i = structArray.arraySize-1 ; i >= 0; i--)
	{
		if (dp.deletePoint[i])
		{
			deleteFunction(i);
		}
	}
}

void deleteRecordByBookNumber()
{
	struct CdeletePoint dp = findRecordByBookNumber(structArray);
	printDeleteRecord(dp);
	char flag;
	// getchar();
	printf("是否删除上述数据？Y/N \n");

	flag = getchar();
	flag = getchar();
	if (flag == 'Y' || flag == 'y')
	{
		deleteRecordByBookNumber(dp);
	}
	else
	{
		printf("今日无事可做");
	}
}
