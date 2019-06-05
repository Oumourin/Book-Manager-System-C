#pragma once

//  统计超时罚金方法

// 只考虑从2010年开始

// 简化程序设计

// 利用查表方法实现一次遍历即完成统计，减少时间复杂度

#include"structArray.h"
#include<memory>

struct CyearFine
{
	double yearFine[30];
	// size参数暂时没用
	int arraySize;
	CyearFine()
	{
		memset(yearFine, 0.0, 30);
		arraySize = 0;
	}
};

// 对输入年份进行检查，避免溢出
bool checkSecurity(int year);

// 通过年份获取表中位置
int getPoint(int year);

// 遍历结构体数组获取罚金方法
void getFine();

// 打印罚金方法
void printFine();

// 统计方法
void statisticsFine();