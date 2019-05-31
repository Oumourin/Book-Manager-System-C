/*
*	记录查找方法
*/

#include<stdio.h>
#include<iostream>
#include<memory.h>
#include"structArray.h"
#include"timeFunction.h"
#include"deletePoint.h"
extern struct CstructArray structArray;

//  查询借书信息
void findRecordByLicenseNumber(struct CstructArray st)
{
	std::cout << "输入要查找的借书证号：" ;
	std::string findingRecord;
	std::cin >> findingRecord;
	bool findFlag = false;
	for (int i = 0; i < st.arraySize; i++)
	{
		if (st.recordArray[i].licenseNumber == findingRecord)
		{
			toString(st.recordArray[i]);
			findFlag = true;
		}
	}
	if (!findFlag)
	{
		printf("没有找到符合该条件的书籍!\n");
	}
}


//  查询日期
void findRecordByDate(struct CstructArray st)
{
	printf("输入要查找的年月日（按照YYYY-MM-DD格式）：");
	int getYear;
	int getMonth;
	int getDay;
	bool findFlag = false;
	scanf("%d-%d-%d", &getYear, &getMonth, &getDay);
	for (int i = 0; i < st.arraySize; i++)
	{
		if (compareTimeWithborrowingRecord(st.recordArray[i], getYear, getMonth, getDay))
		{
			toString(st.recordArray[i]);
		}
	}
	if (!findFlag)
	{
		printf("没有找到符合该条件的书籍!\n");
	}
}

// 书号查询
 struct CdeletePoint findRecordByBookNumber(CstructArray st)
{
	std::string::size_type position;
	struct CdeletePoint dp;
	dp.arraySize = st.arraySize;
	printf("输入要查找的书籍编号：");
	std::string findingBookNumber;
	std::cin >> findingBookNumber;
	for (int i = 0; i < st.arraySize; i++)
	{
		position = st.recordArray[i].bookNumber.find(findingBookNumber);
		if (position != std::string::npos)
		{
			dp.deletePoint[i] = true;
		}
	}
	return dp;
}

 CdeletePoint findRecordByYear()
 {
	 int getYear;
	 printf("输入要查询的年份：");
	 scanf("%d", &getYear);
	 CdeletePoint dp;
	 dp.arraySize = structArray.arraySize;
	 for (int i = 0; i < structArray.arraySize; i++)
	 {
		 if (compareTimeWithYear(structArray.recordArray[i], getYear))
		 {
			 dp.deletePoint[i] = true;
		 }
	 }
	 return dp;
 }



