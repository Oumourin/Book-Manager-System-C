#pragma once
#include"deletePoint.h"
/*
*  ��Ҫ�ع��߼�
*  �߼�̫��
*  ���Ϳ���
*/

// ����ͨ���鼮��ɾ���ļ�¼
void deleteRecordByBookNumber(struct CdeletePoint dp);

// ɾ������������ɾ����Ҫɾ���ļ�¼
void deleteFunction(int startPoint);

// ɾ���������ṩ�����������ã������鼮��
void deleteRecordByBookNumber();

// ��ӡ��ɾ������Ŀ
void printDeleteRecord(struct CdeletePoint dp);

//  ����ĳ���Ѿ��黹���鼮��ɾ������
void deleteRecordByYear(CdeletePoint dp);

// ���溯�������������÷���
void deleteRecordByYear();