#pragma once
#include"deletePoint.h"
/*
*  需要重构逻辑
*  逻辑太乱
*  将就看吧
*/

// 查找通过书籍号删除的记录
void deleteRecordByBookNumber(struct CdeletePoint dp);

// 删除函数，逆序删除需要删除的记录
void deleteFunction(int startPoint);

// 删除函数（提供给主函数调用）依据书籍号
void deleteRecordByBookNumber();

// 打印待删除的项目
void printDeleteRecord(struct CdeletePoint dp);

//  查找某年已经归还的书籍的删除函数
void deleteRecordByYear(CdeletePoint dp);

// 上面函数的主函数调用方法
void deleteRecordByYear();