//
// Created by ????? on 2019/6/18.
//

#include"StatisticsFine.h"
#include"StructArray.h"
#include"TimeFunction.h"
#include"BorrowingRecord.h"
extern StructArray structArray;

// 存储每年罚金方法
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
            // 超时处理
            int year = getYear(structArray.recordArray[i]);
            if (checkSecurity(year))
            {
                addPenalty(&structArray.recordArray[i]);
                // 对应年份写入罚金
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
            printf("%d 年产生罚金为 %lf \n", i + 2010, yearFine.yearFine[i]);
            totalFine += yearFine.yearFine[i];
        }
    }
    printf("产生罚金总计 %lf\n", totalFine);
}

void statisticsFine()
{
    getFine();
    printFine();
}

