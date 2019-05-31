#include"statement.h"
extern struct CstructArray structArray;

int main(int args, char* argv[])
{
	struct CborrowingRecord st1("114514", "1919810");
	struct CborrowingRecord st2("233333", "233333");
	time_t getTestTime = time(0);
	st1.returnDate = getTestTime;
	st2.returnDate = getTestTime;
	addborrowingRecord(st1);
	addborrowingRecord(st2);
	toString(structArray);
	// deleteRecordByBookNumber();
	deleteRecordByYear();
	toString(structArray);
	return 0;
}