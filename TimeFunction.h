//
// Created by 王茂林 on 2019/6/18.
//

#ifndef BOOK_MANAGE_SYSTEM_TIMEFUNCTION_H
#define BOOK_MANAGE_SYSTEM_TIMEFUNCTION_H
#include"BorrowingRecord.h"
#endif //BOOK_MANAGE_SYSTEM_TIMEFUNCTION_H


// 接受输入进行年月日比较方法
bool compareTimeWithborrowingRecord(struct BorrowingRecord borrowingRecord, int year, int month, int day);

//  年份比较
bool compareTimeWithYear(BorrowingRecord borrowingRecord, int year);

// 获取当前年份方法
int getYear(BorrowingRecord borrowingRecord);