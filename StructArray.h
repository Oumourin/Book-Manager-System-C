//
// Created by 王茂林 on 2019/6/18.
//

#ifndef BOOK_MANAGE_SYSTEM_STRUCTARRAY_H
#define BOOK_MANAGE_SYSTEM_STRUCTARRAY_H
#include"BorrowingRecord.h"
#include"DeletePoint.h"

struct StructArray
{
    struct BorrowingRecord recordArray[1000];
    unsigned int arraySize;
    StructArray()
    {
        arraySize = 0;
    }
};
#endif //BOOK_MANAGE_SYSTEM_STRUCTARRAY_H


//  结构体数组toString方法
void toString(struct StructArray sa);
//  基于布尔数组的toString方法
void toString(struct DeletePoint deletePoint);


//  添加元素方法
void addborrowingRecord(struct BorrowingRecord rd);
void addborrowingRecord(struct StructArray sa, struct BorrowingRecord rd);

//  按借书证查找方法
void findRecordByLicenseNumber(struct StructArray recordArray);

// 按日期查找方法
void findRecordByDate(struct StructArray recordArray);

// 按图书编号查询方法
struct DeletePoint findRecordByBookNumber(struct StructArray recordArray);

// 查询上年已经归还图书
struct DeletePoint findRecordByYear();

//  查找图书编号方法（还书方法）
BorrowingRecord* findRecordByBookNumber();

