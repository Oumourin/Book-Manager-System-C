# Book-Manager-System-C
图书管理系统-C语言实现（C++ STL使用）


**项目准守GPLV3协议**


**master分支适配VS2019  CLION分支适配CLION**


>  开发环境：
>  VS2019
>  
>  OS: Window10 1804

##  系统数据结构
###  借书记录结构体
定义在头文件borrowingRecord.h中

###  借书记录结构体数组
定义在头文件structArray.h

##  测试数据
在程序启动会自动生成5个测试数据，数据分别为两年前 一年前 两个月前 一个月前 15天前的借书记录
程序运行中可以再次重新初始化这五个数据

##  UI修改
组员信息请自行在UI.cpp下startUI函数中修改

-----



##  借书记录模块

定义在borrowingRecord.h文件中

###  相关数据定义

1.  CborrowingRecord结构体

   1.  成员

      *  借书证号
      *  书号
      *  借书日期
      *  还书日期
      *  超时罚金

   2.  初始化方法

      1.  默认初始化方法（生成数组使用）

         将借书日期 还书日期 罚金置0

      2.  指定借书证号和图书编号的初始化方法

         将会初始化结构体的借书证号和图书编号 借书日期取值初始化时间 还书日期和罚金置0

### 相关函数定义

1. toString函数

   函数定义：

   ```c++
   void toString(struct CborrowingRecord br);
   ```

   函数功能：

   实现对于借书记录结构体的输出

2.  checkTimeout函数

   函数定义：

   ```c++
   bool checkTimeout(struct CborrowingRecord br);
   ```

   函数功能：

   实现对于借书记录超时的检查，超时则返回真

3.  addPenalty函数

   函数定义：

   ```c++
   void addPenalty(struct CborrowingRecord * br);
   ```

   函数功能：

   实现对于超时记录处罚罚金的功能

4.  addReturnBookTime函数

   函数定义：

   ```c++
   void addReturnBookTime(struct CborrowingRecord * br);
   ```

   函数功能：

   实现对于还书日期的添加

5.  returnBook函数

   函数定义：

   ```c++
   void returnBook(struct CborrowingRecord * br);
   ```

   函数功能：

   实现对上述两个还书有关逻辑函数的封装

## 结构体数组模块

定义在structArray.h头文件中

### 相关数据定义

1.  CstructArray结构体

   1.  成员

      1.  长度为1000的借书记录数组
      2.  数组的长度标识符

   2.  初始化方法

      1.  默认初始化

         将数组长度置0

###  相关函数的定义

1.  toString函数

   函数定义：

   ```C++
   void toString(struct CstructArray sa);
   void toString(struct CdeletePoint dp);
   ```

   函数功能：

   有两个重载

   1.  实现对于结构体数组的输出
   2.  实现对于标记数组的输出（仅单元测试时使用）

2.  addborrowingRecord函数

   函数定义：

   ```c++
   void addborrowingRecord(struct CborrowingRecord rd);
   ```

   函数功能：

   实现往结构体数组内添加成员

3.  findRecordByLicenseNumber函数

   函数定义：

   ```c++
   void findRecordByLicenseNumber(struct CstructArray st);
   ```

   函数功能：

   实现按借书证的查找

4.  findRecordByDate函数

   函数定义：

   ```c++
   void findRecordByDate(struct CstructArray st);
   ```

   函数功能：

   实现按日期的查找

5.  findRecordByBookNumber函数

   函数定义：

   ```c++
   struct CdeletePoint findRecordByBookNumber(struct CstructArray st);
   ```

   函数功能：

   实现按书籍编号的查找方法，并返回一个标记数组

6.  findRecordByYear函数

   函数定义：

   ```c++
   struct CdeletePoint findRecordByYear();
   ```

   函数功能：

   实现按年份查找方法，并返回一个标记数组

7.  findRecordByBookNumber函数

   函数定义：

   ```c++
   CborrowingRecord* findRecordByBookNumber();
   ```

   函数功能：

   实现按书籍编号的查找方法，并返回一个记录指针，未找到则返回NULL

##  标记结构体模块

定义在头文件：deletePoint.h中

### 相关数据结构

1.  CdeletePoint结构体
   1.  成员
      1.  长度1000的布尔类型数组
      2.  数组长度标识符
   2.  初始化方法
      1.  数组长度置为1000
      2.  所有数组单元置为零
   3.  数组功能
      1.  用于遍历图书记录时对于满足条件的记录的标记

##  时间处理模块

定义在头文件:timeFunction.h中

###  相关函数

1.  compareTimeWithborrowingRecord函数

   函数定义：

   ```c++
   bool compareTimeWithborrowingRecord(struct CborrowingRecord br, int year, int month, int day);
   ```

   函数功能：

   接受一个年月日的输入和一个记录结构体，如果两者时间匹配则返回真

2.  compareTimeWithYear函数

   函数定义：

   ```c++
   bool compareTimeWithYear(CborrowingRecord br, int year);
   ```

   函数功能：

   接受一个年份值和一个借书记录结构体，用于比较借书年份是否等于输入的年份，如果匹配则返回真

3.  getYear函数

   函数定义：

   ```c++
   int getYear(CborrowingRecord br);
   ```

   函数功能：

   用于获取借书记录对应的年份

##  删除记录模块

定义在头文件：deleteRecord.h中

###  相关函数

1.  deleteRecordByBookNumber函数

   函数定义：

   ```c++
   void deleteRecordByBookNumber(struct CdeletePoint dp);
   ```

   函数功能：

   用于通过年份实现对记录的删除

2.  deleteFunction函数

   函数定义：

   ```c++
   void deleteFunction(int startPoint);
   ```

   函数功能：

   接受一个bool数组，实现对于标记的记录删除

3.  deleteRecordByBookNumber函数

   函数定义：

   ```c++
   void deleteRecordByBookNumber();
   ```

   函数功能：

   实现对于依据图书编号删除图书方法的封装

4.  printDeleteRecord函数：

   函数定义：

   ```c++
   void printDeleteRecord(struct CdeletePoint dp);
   ```

   函数功能：

   实现对于删除项目的打印

5.  deleteRecordByYear函数：

   函数定义：

   ```c++
   void deleteRecordByYear(CdeletePoint dp);
   ```

   函数功能：

   实现依据年份对于记录的删除

6.  deleteRecordByYear函数

   函数定义：

   ```c++
   void deleteRecordByYear();
   ```

   函数功能：

   实现对于按年份删除记录的方法的封装

##  统计模块

定义在头文件：statisticsFine.h中

###  相关数据的定义

1.  CyearFine结构体

   1.  成员

      1. 长度为30的浮点数组
      2.  数组长度标识符

   2.  初始化方法

      对所有数组成员置0，数组长度置0

### 相关函数定义

1.  checkSecurity函数

   函数定义：

   ```c++
   bool checkSecurity(int year);
   ```

   函数功能：

   实现对于年份的检查，避免错误年份输入。本统计功能只实现从2010开始的三十年时间

2.  getPoint函数

   函数定义：

   ```c++
   int getPoint(int year);
   ```

   函数功能：

   实现从年份转化数组坐标的方法

3.  getFine函数

   函数定义：

   ```c++
   void getFine();
   ```

   函数功能：

   实现对于罚金的统计

4.  printFine函数

   函数定义：

   ```c++
   void printFine();
   ```

   函数功能：

   实现对于罚金的打印输出

5.  statisticsFine函数

   函数定义：

   ```c++
   void statisticsFine();
   ```

   函数功能：

   实现对上述统计功能的封装

##  控制台前端模块

定义在头文件：UI.h中

###  相关函数

1.  接口函数

   ```c++
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
   ```

   函数功能：

   均实现了相关功能的封装，供主函数调用

2.  UI函数

   ```c++
   void reinitData();
   
   void startUI();
   
   void menuUI();
   
   int findUI();
   ```

   函数功能：

   实现了对于UI的封装
