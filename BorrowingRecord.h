//
// Created by ��ï�� on 2019/6/18.
//

#ifndef BOOK_MANAGE_SYSTEM_BORROWINGRECORD_H
#define BOOK_MANAGE_SYSTEM_BORROWINGRECORD_H
#include<stdio.h>
#include<ctime>
#include<string>
#include<iostream>



struct BorrowingRecord
{
    // ����֤��
    std::string licenseNumber;
    // ���
    std::string bookNumber;
    // ��������
    time_t borrowingDate;
    // ��������
    time_t returnDate;
    // ��ʱ����
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





// ͼ���¼�������
void toString(struct BorrowingRecord borrowingRecord);

// ����Ƿ�ʱδ������
// ��ʱ������
bool checkTimeout(struct BorrowingRecord borrowingRecord);

// �������𷽷�
void addPenalty(struct BorrowingRecord * borrowingRecord);

// ��ӻ������ڷ���
void addReturnBookTime(struct BorrowingRecord * borrowingRecord);

// ��ӻ��鷽��
void returnBook(struct BorrowingRecord * borrowingRecord);