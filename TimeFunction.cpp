//
// Created by ÍõÃ¯ÁÖ on 2019/6/18.
//

#include "TimeFunction.h"

bool compareTimeWithborrowingRecord(struct BorrowingRecord borrowingRecord, int year, int month, int day)
{
    struct tm* getMT;
    getMT = gmtime(&borrowingRecord.borrowingDate);
    if ((getMT->tm_year+1900) == year &&  (getMT->tm_mon+1) == month && getMT->tm_mday==day)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool compareTimeWithYear(BorrowingRecord borrowingRecord, int year)
{
    struct tm* getMT;
    getMT = gmtime(&borrowingRecord.returnDate);
    if ((getMT->tm_year + 1900) == year)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int getYear(BorrowingRecord borrowingRecord)
{
    tm* getTM;
    getTM = gmtime(&borrowingRecord.borrowingDate);
    return (1900 + getTM->tm_year);
}