#pragma once

/*
*	方便处理这里引入了C++的STL
*	ctime
* string
* ctime时间处理的一个包，原生C没有时间处理函数
* string是C++下面是字符串类，原生C的char*对于结构体成员处理极度不友好
* iostream配合string类的输出方法，类似于printf
* VS下不支持Linux C下面宏初始化结构体的方法，这里使用半类方法进行初始化
*/

#include<stdio.h>
#include<ctime>
#include<string>
#include<iostream>
struct CborrowingRecord
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

	CborrowingRecord()
	{
		borrowingDate = 0;
		returnDate = 0;
		timeoutPenalty = 0;
	}

	CborrowingRecord(std::string _licenseNumber, std::string _bookNumber)
	{
		licenseNumber = _licenseNumber;
		bookNumber = _bookNumber;
		time_t getNowTime = time(0);
		borrowingDate = getNowTime;
		returnDate = 0;
		timeoutPenalty = 0;
	}
};

void setBorrowingRecord(struct CborrowingRecord br, std::string licenseNumber, std::string bookNumber);
// 图书记录输出方法
void toString(struct CborrowingRecord br);

// 检查是否超时未还方法
// 超时返回真
bool checkTimeout(struct CborrowingRecord br);

// 产生罚金方法
void addPenalty(struct CborrowingRecord * br);

// 添加还书日期方法
void addReturnBookTime(struct CborrowingRecord * br);

// 添加还书方法
void returnBook(struct CborrowingRecord * br);




// 结构体初始化宏
//#define newCborrowingRecord(_licenseNumber, _bookNumber) \
//{	\
//	.licenseNumber = _licenseNumber, \
//	.bookNumber = _bookNumber,	\
//	.borrowingDate = time(0), \
//	.returnDate = 0,	\
//	.timeoutPenalty = 0	\
//}

// 宏的别名
// #define CborrowingRecord struct CborrowingRecord
