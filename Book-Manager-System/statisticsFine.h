#pragma once

//  ͳ�Ƴ�ʱ���𷽷�

// ֻ���Ǵ�2010�꿪ʼ

// �򻯳������

// ���ò����ʵ��һ�α��������ͳ�ƣ�����ʱ�临�Ӷ�

#include"structArray.h"
#include<memory>

struct CyearFine
{
	double yearFine[30];
	// size������ʱû��
	int arraySize;
	CyearFine()
	{
		memset(yearFine, 0.0, 30);
		arraySize = 0;
	}
};

// ��������ݽ��м�飬�������
bool checkSecurity(int year);

// ͨ����ݻ�ȡ����λ��
int getPoint(int year);

// �����ṹ�������ȡ���𷽷�
void getFine();

// ��ӡ���𷽷�
void printFine();

// ͳ�Ʒ���
void statisticsFine();