//
// Created by ÍõÃ¯ÁÖ on 2019/6/18.
//

#include "StructArray.h"
extern struct StructArray structArray;

void toString(StructArray sa)
{
    for (int i = 0; i < sa.arraySize; i++)
    {
        toString(sa.recordArray[i]);
    }
}

void toString(DeletePoint deletePoint)
{
    for (int i = 0; i < structArray.arraySize; i++)
    {
        if (deletePoint.deletePoint[i])
        {
            toString(structArray.recordArray[i]);
        }
    }
}

void addborrowingRecord(BorrowingRecord rd)
{
    structArray.recordArray[structArray.arraySize] = rd;
    structArray.arraySize++;
}

void addborrowingRecord(StructArray sa, BorrowingRecord rd)
{
    sa.recordArray[sa.arraySize] = rd;
    sa.arraySize++;
}
