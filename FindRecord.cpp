//
// Created by 王茂林 on 2019/6/18.
//

#include<stdio.h>
#include<iostream>
#include<memory.h>
#include"StructArray.h"
#include"TimeFunction.h"
#include"DeletePoint.h"
extern struct StructArray structArray;

//  查询借书信息
void findRecordByLicenseNumber(struct StructArray recordArray)
{
    std::cout << "输入要查找的借书证号：" ;
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
        printf("没有找到符合该条件的书籍!\n");
    }
}


//  查询日期
void findRecordByDate(struct StructArray recordArray)
{
    printf("输入要查找的年月日（按照YYYY-MM-DD格式）：");
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
        printf("没有找到符合该条件的书籍!\n");
    }
}

// 书号查询（删除记录用）
struct DeletePoint findRecordByBookNumber(StructArray recordArray)
{
    std::string::size_type position;
    struct DeletePoint deletePoint;
    deletePoint.arraySize = recordArray.arraySize;
    printf("输入要查找的书籍编号：");
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

//  书号查询（还书用）
BorrowingRecord* findRecordByBookNumber()
{
    std::string::size_type position;
    printf("输入要查找的书籍编号：");
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
    printf("输入要查询的年份：");
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