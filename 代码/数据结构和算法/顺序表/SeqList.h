#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//// 顺序表的静态存储
//#define N 100  // 静态顺序表的最大容量
//
//typedef int SLDataType;  // 静态顺序表的存储元素类型
//
//typedef struct SeqList
//{
//	SLDataType a[N];  // 使用定长数组存储元素
//	int size;  // 静态顺序表中有效数据的个数
//}SL;


// 顺序表的动态存储
typedef int SLDataType;  // 动态顺序表的存储元素类型

typedef struct SeqList
{
	SLDataType* a;  // 使用动态开辟的数组存储元素
	int size;  // 动态顺序表中有效数据的个数
	int capacity;  // 动态顺序表的最大容量
}SL;


// 顺序表的接口函数
void SeqListInit(SL* ps);  // 顺序表初始化
void SeqListCheckCapacity(SL* ps);  // 检查空间，如果满了，进行增容
void SeqListPushBack(SL* ps, SLDataType x);  // 顺序表尾插
void SeqListPopBack(SL* ps);  // 顺序表尾删
void SeqListPushFront(SL* ps, SLDataType x);  // 顺序表头插
void SeqListPopFront(SL* ps);  // 顺序表头删
int SeqListFind(SL* ps, SLDataType x);  // 顺序表查找
void SeqListInsert(SL* ps, int pos, SLDataType x);  // 顺序表在pos位置插入x
void SeqListErase(SL* ps, int pos);  // 顺序表删除pos位置的值
void SeqListDestroy(SL* ps);  // 顺序表销毁
void SeqListPrint(SL* ps);  // 顺序表打印