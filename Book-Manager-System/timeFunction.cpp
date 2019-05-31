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