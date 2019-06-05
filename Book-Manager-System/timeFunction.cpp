#include "timeFunction.h"

bool compareTimeWithborrowingRecord(struct CborrowingRecord br, int year, int month, int day)
{
	struct tm* getMT;
	getMT = gmtime(&br.borrowingDate);
	if ((getMT->tm_year+1900) == year &&  (getMT->tm_mon+1) == month && getMT->tm_mday==day)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool compareTimeWithYear(CborrowingRecord br, int year)
{
	struct tm* getMT;
	getMT = gmtime(&br.returnDate);
	if ((getMT->tm_year + 1900) == year)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int getYear(CborrowingRecord br)
{
	tm* getTM;
	getTM = gmtime(&br.borrowingDate);
	return (1900 + getTM->tm_year);
}