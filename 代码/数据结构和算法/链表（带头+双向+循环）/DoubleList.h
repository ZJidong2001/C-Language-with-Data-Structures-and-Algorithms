#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

// 双链表
typedef int DLDataType;  // 双链表的存储元素类型

typedef struct DoubleListNode
{
	DLDataType data;  // 数据域
	struct DoubleListNode* prev;  // 指针域
	struct DoubleListNode* next;  // 指针域
}DLNode;


// 双链表的接口函数
DLNode* BuyDoubleListNode(DLDataType x);  // 动态申请一个节点
DLNode* DoubleListCreate();  // 双链表创建
void DoubleListPrint(DLNode* phead);  // 双链表打印
void DoubleListPushBack(DLNode* phead, DLDataType x);  // 双链表尾插
void DoubleListPopBack(DLNode* phead);  // 双链表尾删
void DoubleListPushFront(DLNode* phead, DLDataType x);  // 双链表头插
void DoubleListPopFront(DLNode* phead);  // 双链表头删
DLNode* DoubleListFind(DLNode* phead, DLDataType x);  // 双链表查找
void DoubleListInsert(DLNode* pos, DLDataType x);  // 双链表在pos位置插入x
void DoubleListErase(DLNode* pos);  // 双链表删除pos位置的值
void DoubleListDestory(DLNode* phead);  // 双链表销毁