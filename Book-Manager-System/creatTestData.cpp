#include"statement.h"
#include"borrowingRecord.h"
#include"structArray.h"

extern CstructArray structArray;

// ��ȡһ����ǰʱ������ʼ��һ��tm�ṹ��
// tm�ṹ���ֶ���ֵ̫������

time_t getNowTime = time(0);

CborrowingRecord  test1("114514", "1919810"), test2("111111", "111111"), test3("aaaaaa", "aaaaaa"), test4("bbbbbb", "cccccc"), test5("dddddd", "eeeeee");


// ���ɲ�����ʱ��
// ���뵱ǰʱ��һ��ǰ ����ǰ ������ǰ һ����ǰ ʮ����ǰ

void initBorrowingData()
{
	test1.borrowingDate = getNowTime - 63072000;
	test2.borrowingDate = getNowTime - 31536000;
	test3.borrowingDate = getNowTime - 5184000;
	test4.borrowingDate = getNowTime - 2592000;
	test5.borrowingDate = getNowTime - 1296000;
}

void initReturnData()
{
	test1.returnDate = test1.borrowingDate + 5184000;
	test2.returnDate = test2.borrowingDate + 5184000;
	test1.timeoutPenalty = 114514;
	test2.timeoutPenalty = 1919;
}

void initData()
{
	//  ���³�ʼ��ʱ���������
	structArray.arraySize = 0;
	initBorrowingData();
	initReturnData();
	addborrowingRecord(test1);
	addborrowingRecord(test2);
	addborrowingRecord(test3);
	addborrowingRecord(test4);
	addborrowingRecord(test5);
}