#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

// 队列
typedef int QueueDataType;  // 队列的存储元素类型

typedef struct QueueNode
{
	QueueDataType data;  // 数据域
	struct QueueNode* next;  // 指针域
}QueueNode;

typedef struct Queue
{
	QueueNode* head;  // 队头指针
	QueueNode* tail;  // 队尾指针
}Queue;


// 队列的接口函数
void QueueInit(Queue* pq);  // 初始化队列
void QueuePush(Queue* pq, QueueDataType x);  // 队尾入队列
void QueuePop(Queue* pq);  // 队头出队列
QueueDataType QueueFront(Queue* pq);  // 获取队列头部元素
QueueDataType QueueBack(Queue* pq);  // 获取队列队尾元素
int QueueSize(Queue* pq);  // 获取队列中有效元素个数
int QueueEmpty(Queue* pq);  // 检测队列是否为空，如果为空返回非零结果，如果非空返回0
void QueueDestroy(Queue* pq);  // 销毁队列