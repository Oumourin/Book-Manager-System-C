cmake_minimum_required(VERSION 3.15)
project(Book_Manage_System)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_CXX_FLAGS} -static")

add_executable(Book_Manage_System main.cpp BorrowingRecord.h DeletePoint.h DeleteRecord.h InitData.h Statement.h StatisticsFine.h StructArray.h TimeFunction.h UI.h BorrowingRecord.cpp CreatTestData.cpp DeleteRecord.cpp FindRecord.cpp InitArray.cpp StatisticsFine.cpp StructArray.cpp TimeFunction.cpp UI.cpp)