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
		printf("输入错误，请重新输入！\n");
		break;
	}
}

