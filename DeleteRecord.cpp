//
// Created by 王茂林 on 2019/6/18.
//

#include"DeleteRecord.h"
#include"StructArray.h"
#include"DeletePoint.h"

extern struct StructArray structArray;

void deleteFunction(int startPoint)
{
    for ( int i = structArray.arraySize-1 ; i > startPoint; i--)
    {
        structArray.recordArray[i - 1] = structArray.recordArray[i];
        structArray.arraySize--;
    }
}

void printDeleteRecord(DeletePoint deletePoint)
{
    toString(deletePoint);
}


void deleteRecordByYear()
{
    DeletePoint deletePoint = findRecordByYear();
    printDeleteRecord(deletePoint);
    char flag;
    printf("是否删除上述数据？Y/N \n");

    getchar();
    flag = getchar();
    if (flag == 'Y' || flag == 'y')
    {
        deleteRecordByBookNumber(deletePoint);
    }
    else
    {
        printf("今日无事可做");
    }
}

void deleteRecordByBookNumber(struct DeletePoint deletePoint)
{
    for (int i = structArray.arraySize-1 ; i >= 0; i--)
    {
        if (deletePoint.deletePoint[i])
        {
            deleteFunction(i);
        }
    }
}

void deleteRecordByBookNumber()
{
    struct DeletePoint deletePoint = findRecordByBookNumber(structArray);
    printDeleteRecord(deletePoint);
    char flag;
    // getchar();
    printf("是否删除上述数据？Y/N \n");
    getchar();
    flag = getchar();
    if (flag == 'Y' || flag == 'y')
    {
        deleteRecordByBookNumber(deletePoint);
        printf("删除成功！");
    }
    else
    {
        printf("今日无事可做");
    }
}
