#pragma once

#include"borrowingRecord.h"

// 接受输入进行年月日比较方法
bool compareTimeWithborrowingRecord(struct CborrowingRecord br, int year, int month, int day);

bool compareTimeWithYear(CborrowingRecord br, int year);