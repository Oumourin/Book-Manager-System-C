#include "UI.h"
#include"statement.h"
#include<string>

extern CstructArray structArray;
using namespace std;

void borrowingBook()
{
	string borrowingId, bookId;
	std::cout << "输入借书证号，图书编号, 以空格分隔：";
	cin >> borrowingId >> bookId;
	CborrowingRecord newBorrowing(borrowingId, bookId);
	addborrowingRecord(newBorrowing);
}

void returnBook()
{
	returnBook(findRecordByBookNumber());
}

void findImformation()
{
	findRecordByLicenseNumber(structArray);
}

void findImformationByDay()
{
	findRecordByDate(structArray);
}

void deleteBook()
{
	deleteRecordByBookNumber();
}

void timeoutImformation()
{
	deleteRecordByYear();
}

void statisticsData()
{
	statisticsFine();
}

void menu(int choice)
{
	switch (choice)
	{
	case 1:
		borrowingBook();
		break;
	case 2:
		returnBook();
		break;
	case 3:
		findImformation();
		break;
	case 4:
		findImformationByDay();
		break;
	case 5:
		deleteBook();
		break;
	case 6:
		timeoutImformation();
		break;
	case 7:
		statisticsData();
		break;
	case 8:
		printArray();
		break;
	case 9:
		reinitData();
		break;
	case 0:
		exit(0);
	default:
		printf("输入错误，请重新输入！\n");
		break;
	}
}

void printArray()
{
	toString(structArray);
}

void reinitData()
{
	initData();
}

void startUI()
{
	printf("====================================================================\n");
	printf("=====                       图书管理系统                       =====\n");
	printf("=====                       Copyright2019                      =====\n");
	printf("=====                   XXX XXX XXX                   =====\n");
	printf("=====                   XXX XXX XXX                  =====\n");
	printf("=====                     AllRightsReserved                    =====\n");
	printf("=====                     按任意键进入系统                     =====\n");
	printf("====================================================================\n");
}

void menuUI()
{
	printf("====================================================================\n");
	printf("=====                      系  统  菜  单                      =====\n");
	printf("                                                                                             \n");
	printf("=====                      0、退出系统                       =====\n");
	printf("=====                      1、新增借书                       =====\n");
	printf("=====                      2、归还图书                       =====\n");
	printf("=====                      3、证件号查找                   =====\n");
	printf("=====                      4、日期查找                         =====\n");
	printf("=====                      5、删除记录                       =====\n");
	printf("=====                      6、删除过期数据                  =====\n");
	printf("=====                      7、统计计算                         =====\n");
	printf("=====                      8、打印所有                         =====\n");
	printf("=====                      9、重置测试数据                 =====\n");
	printf("                                                                                             \n");
	printf("====================================================================\n");
}


