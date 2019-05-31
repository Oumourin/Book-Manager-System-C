#pragma once

/*
*	���㴦������������C++��STL
*	ctime
* string
* ctimeʱ�䴦���һ������ԭ��Cû��ʱ�䴦����
* string��C++�������ַ����࣬ԭ��C��char*���ڽṹ���Ա�����Ȳ��Ѻ�
* iostream���string������������������printf
* VS�²�֧��Linux C������ʼ���ṹ��ķ���������ʹ�ð��෽�����г�ʼ��
*/

#include<stdio.h>
#include<ctime>
#include<string>
#include<iostream>
struct CborrowingRecord
{
	// ����֤��
	std::string licenseNumber;
	// ���
	std::string bookNumber;
	// ��������
    time_t borrowingDate;
	// ��������
	time_t returnDate;
	// ��ʱ����
	double timeoutPenalty;

	CborrowingRecord()
	{
		borrowingDate = 0;
		returnDate = 0;
		timeoutPenalty = 0;
	}

	CborrowingRecord(std::string _licenseNumber, std::string _bookNumber)
	{
		licenseNumber = _licenseNumber;
		bookNumber = _bookNumber;
		borrowingDate = time(0);
		returnDate = 0;
		timeoutPenalty = 0;
	}
};

void setBorrowingRecord(struct CborrowingRecord br, std::string licenseNumber, std::string bookNumber);
void toString(struct CborrowingRecord br);


// �ṹ���ʼ����
//#define newCborrowingRecord(_licenseNumber, _bookNumber) \
//{	\
//	.licenseNumber = _licenseNumber, \
//	.bookNumber = _bookNumber,	\
//	.borrowingDate = time(0), \
//	.returnDate = 0,	\
//	.timeoutPenalty = 0	\
//}

// ��ı���
// #define CborrowingRecord struct CborrowingRecord
