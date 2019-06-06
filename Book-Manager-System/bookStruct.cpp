#include "borrowingRecord.h"

void setBorrowingRecord(CborrowingRecord br,std::string licenseNumber,std::string bookNumber)
{
	br.licenseNumber = licenseNumber;
	br.bookNumber = bookNumber;
	time_t getNowtime = time(0);
	br.borrowingDate = getNowtime;
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
	printf("还书日期：");
	printf("%s", ctime(&br.returnDate));
	printf("超时罚金：");
	printf("%lf", br.timeoutPenalty);
	printf("\n");
}

bool checkTimeout(CborrowingRecord br)
{
	// 获取当前时间
	time_t getNowTime = time(0);
	//struct tm * nowTM = gmtime(&getNowTime);
	//struct tm* borrowedTM = gmtime(&br.borrowingDate);
	if (difftime(getNowTime, br.borrowingDate) > 2592000.0)
	{
		// 逾期未换
		return true;
	}
	else
	{
		// 在30天内
		return false;
	}
}

void addPenalty(CborrowingRecord * br)
{
	// 设置30天基准值
	time_t expirationTime = br->borrowingDate + 2592000.0;
	time_t getNowTime = time(0);
	double timeoutSec = difftime(getNowTime, expirationTime);
	int timeoutDay = timeoutSec / 86400;
	double getPenalty = timeoutDay * 0.2;
	if (timeoutDay == 0)
	{
		// 不足一天按一天算
		getPenalty = 0.2;
	}
	br->timeoutPenalty = getPenalty;
}

void addReturnBookTime(CborrowingRecord* br)
{
	time_t getNowTime = time(0);
	br->returnDate = getNowTime;
}

void returnBook(CborrowingRecord* br)
{
	if (br == NULL)
	{
		printf("图书未找到！\n");
		return;
	}
	if (checkTimeout(*br))
	{
		addPenalty(br);
		addReturnBookTime(br);
		printf("超期归还！还书信息如下：\n");
		toString(*br);
	}
	else
	{
		addReturnBookTime(br);
		printf("未超时，还书信息如下：\n");
		toString(*br);
	}
}

