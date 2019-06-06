#pragma once
//  控制台UI逻辑
// 主函数入口逻辑


// 借书方法入口
void borrowingBook();

// 还书方法入口
void returnBook();

// 查询信息入口
void findImformation();

// 删除信息入口
void deleteBook();

// 删除过期数据
void timeoutImformation();

// 统计数据
void statisticsData();

// 按日期查找
void findImformationByDay();

//  菜单逻辑
void menu(int choice);

//  打印目前数组中所有数据
void printArray();

void reinitData();

void startUI();

void menuUI();

int findUI();