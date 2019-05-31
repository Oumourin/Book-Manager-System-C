#include"statement.h"
extern struct CstructArray structArray;

int main(int args, char* argv[])
{
	struct CborrowingRecord br1("114514", "1919810");
	toString(br1);
	addborrowingRecord(br1);
	toString(structArray.recordArray[0]);
	return 0;
}