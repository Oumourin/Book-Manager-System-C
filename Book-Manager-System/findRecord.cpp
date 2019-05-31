/*
*	��¼���ҷ���
*/

#include<stdio.h>
#include<iostream>
#include<memory.h>
#include"structArray.h"
#include"timeFunction.h"
#include"deletePoint.h"
extern struct CstructArray structArray;

//  ��ѯ������Ϣ
void findRecordByLicenseNumber(struct CstructArray st)
{
	std::cout << "����Ҫ���ҵĽ���֤�ţ�" ;
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
		printf("û���ҵ����ϸ��������鼮!\n");
	}
}


//  ��ѯ����
void findRecordByDate(struct CstructArray st)
{
	printf("����Ҫ���ҵ������գ�����YYYY-MM-DD��ʽ����");
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
		printf("û���ҵ����ϸ��������鼮!\n");
	}
}

// ��Ų�ѯ
 struct CdeletePoint findRecordByBookNumber(CstructArray st)
{
	std::string::size_type position;
	struct CdeletePoint dp;
	dp.arraySize = st.arraySize;
	printf("����Ҫ���ҵ��鼮��ţ�");
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
	 printf("����Ҫ��ѯ����ݣ�");
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



