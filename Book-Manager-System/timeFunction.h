#pragma once

#include"borrowingRecord.h"

// ����������������ձȽϷ���
bool compareTimeWithborrowingRecord(struct CborrowingRecord br, int year, int month, int day);

bool compareTimeWithYear(CborrowingRecord br, int year);