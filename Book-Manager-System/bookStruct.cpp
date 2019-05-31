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
	printf("����֤�ţ�");
	std::cout << br.licenseNumber;
	printf("ͼ���ţ�");
	std::cout << br.bookNumber;
	printf("�������ڣ�");
	printf("%s", ctime(&br.borrowingDate));
}
