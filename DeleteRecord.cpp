//
// Created by ��ï�� on 2019/6/18.
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
    printf("�Ƿ�ɾ���������ݣ�Y/N \n");

    getchar();
    flag = getchar();
    if (flag == 'Y' || flag == 'y')
    {
        deleteRecordByBookNumber(deletePoint);
    }
    else
    {
        printf("�������¿���");
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
    printf("�Ƿ�ɾ���������ݣ�Y/N \n");
    getchar();
    flag = getchar();
    if (flag == 'Y' || flag == 'y')
    {
        deleteRecordByBookNumber(deletePoint);
        printf("ɾ���ɹ���");
    }
    else
    {
        printf("�������¿���");
    }
}
