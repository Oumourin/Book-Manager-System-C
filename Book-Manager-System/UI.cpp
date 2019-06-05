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
	returnBook(findRecordByBookNumber(structArray));
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
		findImformation();
	case 6:
		timeoutImformation();
		break;
	case 7:
		statisticsData();
		break;
	case 8:
		exit(0);
	default:
		printf("����������������룡\n");
		break;
	}
}

