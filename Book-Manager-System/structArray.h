#pragma once
#include"borrowingRecord.h"
#include"deletePoint.h"

struct CstructArray
{
	struct CborrowingRecord recordArray[1000];
	unsigned int arraySize;
	CstructArray()
	{
		arraySize = 0;
	}
};

//  结构体数组toString方法
void toString(struct CstructArray sa);
//  基于布尔数组的toString方法
void toString(struct CdeletePoint dp);


//  添加元素方法
void addborrowingRecord(struct CborrowingRecord rd);
void addborrowingRecord(struct CstructArray sa, struct CborrowingRecord rd);

//  按借书证查找方法
void findRecordByLicenseNumber(struct CstructArray st);

// 按日期查找方法
void findRecordByDate(struct CstructArray st);

// 按图书编号查询方法
struct CdeletePoint findRecordByBookNumber(struct CstructArray st);

// 查询上年已经归还图书
struct CdeletePoint findRecordByYear();

//  查找图书编号方法（还书方法）
CborrowingRecord* findRecordByBookNumber();


