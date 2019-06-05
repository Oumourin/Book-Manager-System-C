#include "statisticsFine.h"
#include"structArray.h"
#include"timeFunction.h"
#include"borrowingRecord.h"
extern CstructArray structArray;

// �洢ÿ�귣�𷽷�
CyearFine yearFine;

bool checkSecurity(int year)
{
	if (year < 2010)
	{
		return false;
	}
	else
	{
		return true;
	}
}

int getPoint(int year)
{
	return (year - 2010);
}

void getFine()
{
	for (int i = 0; i < structArray.arraySize; i++)
	{
		if (checkTimeout(structArray.recordArray[i]))
		{
			// ��ʱ����
			int year = getYear(structArray.recordArray[i]);
			if (checkSecurity(year))
			{
				addPenalty(&structArray.recordArray[i]);
				// ��Ӧ���д�뷣��
				yearFine.yearFine[getPoint(year)] += structArray.recordArray[i].timeoutPenalty;
			}
		}
		else
		{
			continue;
		}
	}
}

void printFine()
{
	double totalFine = 0;
	for (int i = 0; i < 30; i++)
	{
		if (yearFine.yearFine[i] != 0)
		{
			printf("%d ���������Ϊ %lf \n", i + 2010, yearFine.yearFine[i]);
			totalFine += yearFine.yearFine[i];
		}
	}
	printf("���������ܼ� %lf\n", totalFine);
}

void statisticsFine()
{
	getFine();
	printFine();
}

