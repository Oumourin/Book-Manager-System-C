#include"statement.h"
extern struct CstructArray structArray;

int main(int args, char* argv[])
{
	struct tm * testMT;
	time_t getNowTime = time(0);
	testMT = gmtime(&getNowTime);
	testMT->tm_mon = 2;
	time_t getTestTime = mktime(testMT);
	struct CborrowingRecord br1("114514", "1919810");
	toString(br1);
	br1.borrowingDate = getTestTime;
	toString(br1);
	returnBook(&br1);
	toString(br1);
	//addborrowingRecord(br1);
	//toString(structArray.recordArray[0]);
	return 0;
}