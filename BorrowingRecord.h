//
// Created by 王茂林 on 2019/6/18.
//

#ifndef BOOK_MANAGE_SYSTEM_BORROWINGRECORD_H
#define BOOK_MANAGE_SYSTEM_BORROWINGRECORD_H
#include<stdio.h>
#include<ctime>
#include<string>
#include<iostream>



struct BorrowingRecord
{
    // 借书证号
    std::string licenseNumber;
    // 书号
    std::string bookNumber;
    // 借书日期
    time_t borrowingDate;
    // 还书日期
    time_t returnDate;
    // 超时罚金
    double timeoutPenalty;

    BorrowingRecord()
    {
        borrowingDate = 0;
        returnDate = 0;
        timeoutPenalty = 0;
    }

    BorrowingRecord(std::string _licenseNumber, std::string _bookNumber)
    {
        licenseNumber = _licenseNumber;
        bookNumber = _bookNumber;
        time_t getNowTime = time(0);
        borrowingDate = getNowTime;
        returnDate = 0;
        timeoutPenalty = 0;
    }
};
#endif //BOOK_MANAGE_SYSTEM_BORROWINGRECORD_H





// 图书记录输出方法
void toString(struct BorrowingRecord borrowingRecord);

// 检查是否超时未还方法
// 超时返回真
bool checkTimeout(struct BorrowingRecord borrowingRecord);

// 产生罚金方法
void addPenalty(struct BorrowingRecord * borrowingRecord);

// 添加还书日期方法
void addReturnBookTime(struct BorrowingRecord * borrowingRecord);

// 添加还书方法
void returnBook(struct BorrowingRecord * borrowingRecord);