#pragma once

#include"borrowingRecord.h"

// ����������������ձȽϷ���
bool compareTimeWithborrowingRecord(struct CborrowingRecord br, int year, int month, int day);

//  ��ݱȽ�
bool compareTimeWithYear(CborrowingRecord br, int year);

// ��ȡ��ǰ��ݷ���
int getYear(CborrowingRecord br);