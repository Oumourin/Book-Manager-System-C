//
// Created by ��ï�� on 2019/6/18.
//

#ifndef BOOK_MANAGE_SYSTEM_TIMEFUNCTION_H
#define BOOK_MANAGE_SYSTEM_TIMEFUNCTION_H
#include"BorrowingRecord.h"
#endif //BOOK_MANAGE_SYSTEM_TIMEFUNCTION_H


// ����������������ձȽϷ���
bool compareTimeWithborrowingRecord(struct BorrowingRecord borrowingRecord, int year, int month, int day);

//  ��ݱȽ�
bool compareTimeWithYear(BorrowingRecord borrowingRecord, int year);

// ��ȡ��ǰ��ݷ���
int getYear(BorrowingRecord borrowingRecord);