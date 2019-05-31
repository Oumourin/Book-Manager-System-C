#include "bookStruct.h"

void setBorrowingRecord(CborrowingRecord br,std::string licenseNumber,std::string bookNumber)
{
	br.licenseNumber = licenseNumber;
	br.bookNumber = bookNumber;
	br.borrowingDate = time(0);
	br.returnDate = 0;
	br.timeoutPenalty = 0.0;
}

void toString(CborrowingRecord br)
{
	printf("借书证号：");
	std::cout << br.licenseNumber;
	printf("图书编号：");
	std::cout << br.bookNumber;
	printf("借书日期：");
	printf("%s", ctime(&br.borrowingDate));
}
