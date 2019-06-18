//
// Created by Õı√Ø¡÷ on 2019/6/18.
//

#ifndef BOOK_MANAGE_SYSTEM_DELETEPOINT_H
#define BOOK_MANAGE_SYSTEM_DELETEPOINT_H
#include<memory.h>

struct DeletePoint
{
    bool deletePoint[1000];
    unsigned int arraySize;
    DeletePoint()
    {
        arraySize = 1000;
        memset(deletePoint, false, arraySize);
    }
};
#endif
//BOOK_MANAGE_SYSTEM_DELETEPOINT_H

