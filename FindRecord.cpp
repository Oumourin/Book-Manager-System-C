//
// Created by ��ï�� on 2019/6/18.
//

#include<stdio.h>
#include<iostream>
#include<memory.h>
#include"StructArray.h"
#include"TimeFunction.h"
#include"DeletePoint.h"
extern struct StructArray structArray;

//  ��ѯ������Ϣ
void findRecordByLicenseNumber(struct StructArray recordArray)
{
    std::cout << "����Ҫ���ҵĽ���֤�ţ�" ;
    std::string findingRecord;
    std::cin >> findingRecord;
    bool findFlag = false;
    for (int i = 0; i < recordArray.arraySize; i++)
    {
        if (recordArray.recordArray[i].licenseNumber == findingRecord)
        {
            toString(recordArray.recordArray[i]);
            findFlag = true;
        }
    }
    if (!findFlag)
    {
        printf("û���ҵ����ϸ��������鼮!\n");
    }
}


//  ��ѯ����
void findRecordByDate(struct StructArray recordArray)
{
    printf("����Ҫ���ҵ������գ�����YYYY-MM-DD��ʽ����");
    int getYear;
    int getMonth;
    int getDay;
    bool findFlag = false;
    scanf("%d-%d-%d", &getYear, &getMonth, &getDay);
    for (int i = 0; i < recordArray.arraySize; i++)
    {
        if (compareTimeWithborrowingRecord(recordArray.recordArray[i], getYear, getMonth, getDay))
        {
            toString(recordArray.recordArray[i]);
            findFlag = true;
        }
    }
    if (!findFlag)
    {
        printf("û���ҵ����ϸ��������鼮!\n");
    }
}

// ��Ų�ѯ��ɾ����¼�ã�
struct DeletePoint findRecordByBookNumber(StructArray recordArray)
{
    std::string::size_type position;
    struct DeletePoint deletePoint;
    deletePoint.arraySize = recordArray.arraySize;
    printf("����Ҫ���ҵ��鼮��ţ�");
    std::string findingBookNumber;
    std::cin >> findingBookNumber;
    for (int i = 0; i < recordArray.arraySize; i++)
    {
        position = recordArray.recordArray[i].bookNumber.find(findingBookNumber);
        if (position != std::string::npos)
        {
            deletePoint.deletePoint[i] = true;
        }
    }
    return deletePoint;
}

//  ��Ų�ѯ�������ã�
BorrowingRecord* findRecordByBookNumber()
{
    std::string::size_type position;
    printf("����Ҫ���ҵ��鼮��ţ�");
    std::string findingBookNumber;
    std::cin >> findingBookNumber;
    for (int i = 0; i < structArray.arraySize; i++)
    {
        position = structArray.recordArray[i].bookNumber.find(findingBookNumber);
        if (position != std::string::npos)
        {
            return &structArray.recordArray[i];
        }
    }
    return NULL;
}


DeletePoint findRecordByYear()
{
    int getYear;
    printf("����Ҫ��ѯ����ݣ�");
    scanf("%d", &getYear);
    DeletePoint deletePoint;
    deletePoint.arraySize = structArray.arraySize;
    for (int i = 0; i < structArray.arraySize; i++)
    {
        if (compareTimeWithYear(structArray.recordArray[i], getYear))
        {
            deletePoint.deletePoint[i] = true;
        }
    }
    return deletePoint;
}