//
// Created by ��ï�� on 2019/6/18.
//

#include "BorrowingRecord.h"

void toString(BorrowingRecord borrowingRecord)
{
    printf("����֤�ţ�");
    std::cout << borrowingRecord.licenseNumber;
    printf("ͼ���ţ�");
    std::cout << borrowingRecord.bookNumber;
    printf("�������ڣ�");
    printf("%s", ctime(&borrowingRecord.borrowingDate));
    printf("�������ڣ�");
    printf("%s", ctime(&borrowingRecord.returnDate));
    printf("��ʱ����");
    printf("%lf", borrowingRecord.timeoutPenalty);
    printf("\n");
}

bool checkTimeout(BorrowingRecord borrowingRecord)
{
    // ��ȡ��ǰʱ��
    time_t getNowTime = time(0);
    if (difftime(getNowTime, borrowingRecord.borrowingDate) > 2592000.0)
    {
        // ����δ��
        return true;
    }
    else
    {
        // ��30����
        return false;
    }
}

void addPenalty(BorrowingRecord * borrowingRecord)
{
    // ����30���׼ֵ
    time_t expirationTime = borrowingRecord->borrowingDate + 2592000.0;
    time_t getNowTime = time(0);
    double timeoutSec = difftime(getNowTime, expirationTime);
    double timeoutDay = timeoutSec / 86400;
    double getPenalty = timeoutDay * 0.2;
    if (timeoutDay == 0)
    {
        // ����һ�찴һ����
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
        printf("ͼ��δ�ҵ���\n");
        return;
    }
    if (checkTimeout(*borrowingRecord))
    {
        addPenalty(borrowingRecord);
        addReturnBookTime(borrowingRecord);
        printf("���ڹ黹��������Ϣ���£�\n");
        toString(*borrowingRecord);
    }
    else
    {
        addReturnBookTime(borrowingRecord);
        printf("δ��ʱ��������Ϣ���£�\n");
        toString(*borrowingRecord);
    }
}
