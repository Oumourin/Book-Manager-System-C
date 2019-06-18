//
// Created by 王茂林 on 2019/6/18.
//

#ifndef BOOK_MANAGE_SYSTEM_DELETERECORD_H
#define BOOK_MANAGE_SYSTEM_DELETERECORD_H

#endif //BOOK_MANAGE_SYSTEM_DELETERECORD_H

// 查找通过书籍号删除的记录
void deleteRecordByBookNumber(struct DeletePoint deletePoint);

// 删除函数，逆序删除需要删除的记录
void deleteFunction(int startPoint);

// 删除函数（提供给主函数调用）依据书籍号
void deleteRecordByBookNumber();

// 打印待删除的项目
void printDeleteRecord(struct DeletePoint deletePoint);

//  查找某年已经归还的书籍的删除函数

// 上面函数的主函数调用方法
void deleteRecordByYear();
