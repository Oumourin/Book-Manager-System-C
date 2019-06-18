//
// Created by ��ï�� on 2019/6/18.
//

#include "Statement.h"

extern StructArray structArray;


time_t getNowTime = time(0);

BorrowingRecord  testData1("114514", "1919810"), testData2("111111", "111111"), testData3("aaaaaa", "aaaaaa"), testData4("bbbbbb", "cccccc"), testData5("dddddd", "eeeeee");


// ���ɲ�����ʱ��
// ���뵱ǰʱ��һ��ǰ ����ǰ ������ǰ һ����ǰ ʮ����ǰ

void initBorrowingData()
{
    testData1.borrowingDate = getNowTime - 63072000;
    testData2.borrowingDate = getNowTime - 31536000;
    testData3.borrowingDate = getNowTime - 5184000;
    testData4.borrowingDate = getNowTime - 2592000;
    testData5.borrowingDate = getNowTime - 1296000;
}

void initReturnData()
{
    testData1.returnDate = testData1.borrowingDate + 5184000;
    testData2.returnDate = testData2.borrowingDate + 5184000;
    testData1.timeoutPenalty = 114514;
    testData2.timeoutPenalty = 1919;
}

void initData()
{
    //  ���³�ʼ��ʱ���������
    structArray.arraySize = 0;
    initBorrowingData();
    initReturnData();
    addborrowingRecord(testData1);
    addborrowingRecord(testData2);
    addborrowingRecord(testData3);
    addborrowingRecord(testData4);
    addborrowingRecord(testData5);
}