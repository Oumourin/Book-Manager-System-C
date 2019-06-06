#include"statement.h"
#include"borrowingRecord.h"
#include"structArray.h"

extern CstructArray structArray;

// 获取一个当前时间来初始化一个tm结构体
// tm结构体手动赋值太蛋疼了

time_t getNowTime = time(0);

CborrowingRecord  test1("114514", "1919810"), test2("111111", "111111"), test3("aaaaaa", "aaaaaa"), test4("bbbbbb", "cccccc"), test5("dddddd", "eeeeee");


// 生成测试用时间
// 距离当前时间一年前 两年前 两个月前 一个月前 十五天前

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
	//  重新初始化时将数组清空
	structArray.arraySize = 0;
	initBorrowingData();
	initReturnData();
	addborrowingRecord(test1);
	addborrowingRecord(test2);
	addborrowingRecord(test3);
	addborrowingRecord(test4);
	addborrowingRecord(test5);
}