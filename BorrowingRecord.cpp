//
// Created by 王茂林 on 2019/6/18.
//

#include "BorrowingRecord.h"

void toString(BorrowingRecord borrowingRecord)
{
    printf("借书证号：");
    std::cout << borrowingRecord.licenseNumber;
    printf("图书编号：");
    std::cout << borrowingRecord.bookNumber;
    printf("借书日期：");
    printf("%s", ctime(&borrowingRecord.borrowingDate));
    printf("还书日期：");
    printf("%s", ctime(&borrowingRecord.returnDate));
    printf("超时罚金：");
    printf("%lf", borrowingRecord.timeoutPenalty);
    printf("\n");
}

bool checkTimeout(BorrowingRecord borrowingRecord)
{
    // 获取当前时间
    time_t getNowTime = time(0);
    if (difftime(getNowTime, borrowingRecord.borrowingDate) > 2592000.0)
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

void addPenalty(BorrowingRecord * borrowingRecord)
{
    // 设置30天基准值
    time_t expirationTime = borrowingRecord->borrowingDate + 2592000.0;
    time_t getNowTime = time(0);
    double timeoutSec = difftime(getNowTime, expirationTime);
    double timeoutDay = timeoutSec / 86400;
    double getPenalty = timeoutDay * 0.2;
    if (timeoutDay == 0)
    {
        // 不足一天按一天算
        getPenalty = 0.2;
    }
    borrowingRecord->timeoutPenalty = int(getPenalty);
}

void addReturnBookTime(BorrowingRecord* borrowingRecord)
{
    time_t getNowTime = time(0);
    borrowingRecord->returnDate = getNowTime;
}

void returnBook(BorrowingRecord* borrowingRecord)
{
    if (borrowingRecord == NULL)
    {
        printf("图书未找到！\n");
        return;
    }
    if (checkTimeout(*borrowingRecord))
    {
        addPenalty(borrowingRecord);
        addReturnBookTime(borrowingRecord);
        printf("超期归还！还书信息如下：\n");
        toString(*borrowingRecord);
    }
    else
    {
        addReturnBookTime(borrowingRecord);
        printf("未超时，还书信息如下：\n");
        toString(*borrowingRecord);
    }
}
