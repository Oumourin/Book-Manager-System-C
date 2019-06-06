#pragma once
#include"borrowingRecord.h"
#include"deletePoint.h"

struct CstructArray
{
	struct CborrowingRecord recordArray[1000];
	unsigned int arraySize;
	CstructArray()
	{
		arraySize = 0;
	}
};

//  �ṹ������toString����
void toString(struct CstructArray sa);
//  ���ڲ��������toString����
void toString(struct CdeletePoint dp);


//  ���Ԫ�ط���
void addborrowingRecord(struct CborrowingRecord rd);
void addborrowingRecord(struct CstructArray sa, struct CborrowingRecord rd);

//  ������֤���ҷ���
void findRecordByLicenseNumber(struct CstructArray st);

// �����ڲ��ҷ���
void findRecordByDate(struct CstructArray st);

// ��ͼ���Ų�ѯ����
struct CdeletePoint findRecordByBookNumber(struct CstructArray st);

// ��ѯ�����Ѿ��黹ͼ��
struct CdeletePoint findRecordByYear();

//  ����ͼ���ŷ��������鷽����
CborrowingRecord* findRecordByBookNumber();


