#include "UI.h"
#include"statement.h"
#include<string>

extern CstructArray structArray;
using namespace std;

void borrowingBook()
{
	string borrowingId, bookId;
	std::cout << "�������֤�ţ�ͼ����, �Կո�ָ���";
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
		printf("����������������룡\n");
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
	printf("=====                       ͼ�����ϵͳ                       =====\n");
	printf("=====                       Copyright2019                      =====\n");
	printf("=====                   XXX XXX XXX                   =====\n");
	printf("=====                   XXX XXX XXX                  =====\n");
	printf("=====                     AllRightsReserved                    =====\n");
	printf("=====                     �����������ϵͳ                     =====\n");
	printf("====================================================================\n");
}

void menuUI()
{
	printf("====================================================================\n");
	printf("=====                      ϵ  ͳ  ��  ��                      =====\n");
	printf("                                                                                             \n");
	printf("=====                      0���˳�ϵͳ                       =====\n");
	printf("=====                      1����������                       =====\n");
	printf("=====                      2���黹ͼ��                       =====\n");
	printf("=====                      3��֤���Ų���                   =====\n");
	printf("=====                      4�����ڲ���                         =====\n");
	printf("=====                      5��ɾ����¼                       =====\n");
	printf("=====                      6��ɾ����������                  =====\n");
	printf("=====                      7��ͳ�Ƽ���                         =====\n");
	printf("=====                      8����ӡ����                         =====\n");
	printf("=====                      9�����ò�������                 =====\n");
	printf("                                                                                             \n");
	printf("====================================================================\n");
}


