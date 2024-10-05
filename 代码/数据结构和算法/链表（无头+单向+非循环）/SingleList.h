#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

// 单链表
typedef int SLDataType;  // 单链表的存储元素类型

typedef struct SingleListNode
{
	SLDataType data;  // 数据域
	struct SingleListNode* next;  // 指针域
}SLNode;


// 单链表的接口函数
SLNode* BuySingleListNode(SLDataType x);  // 动态申请一个节点
void SingleListPrint(SLNode* phead);  // 单链表打印
void SingleListPushBack(SLNode** pphead, SLDataType x);  // 单链表尾插
void SingleListPushFront(SLNode** pphead, SLDataType x);  // 单链表头插
void SingleListPopBack(SLNode** pphead);  // 单链表尾删
void SingleListPopFront(SLNode** pphead);  // 单链表头删
SLNode* SingleListFind(SLNode* phead, SLDataType x);  // 单链表查找
void SingleListInsertAfter(SLNode* pos, SLDataType x);  // 单链表在pos位置之后插入x
void SingleListEraseAfter(SLNode* pos);  // 单链表删除pos位置之后的值
void SingleListDestroy(SLNode** pphead);  // 单链表销毁