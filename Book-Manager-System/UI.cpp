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

