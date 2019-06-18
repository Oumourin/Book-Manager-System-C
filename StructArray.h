//
// Created by ��ï�� on 2019/6/18.
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


//  �ṹ������toString����
void toString(struct StructArray sa);
//  ���ڲ��������toString����
void toString(struct DeletePoint deletePoint);


//  ���Ԫ�ط���
void addborrowingRecord(struct BorrowingRecord rd);
void addborrowingRecord(struct StructArray sa, struct BorrowingRecord rd);

//  ������֤���ҷ���
void findRecordByLicenseNumber(struct StructArray recordArray);

// �����ڲ��ҷ���
void findRecordByDate(struct StructArray recordArray);

// ��ͼ���Ų�ѯ����
struct DeletePoint findRecordByBookNumber(struct StructArray recordArray);

// ��ѯ�����Ѿ��黹ͼ��
struct DeletePoint findRecordByYear();

//  ����ͼ���ŷ��������鷽����
BorrowingRecord* findRecordByBookNumber();

