#include "Queue.h"

void QueueInit(Queue* pq)  // 初始化队列
{
	assert(pq);
	pq->head = NULL;
	pq->tail = NULL;
}

void QueuePush(Queue* pq, QueueDataType x)  // 队尾入队列
{
	assert(pq);
	QueueNode* newnode = (QueueNode*)malloc(sizeof(QueueNode));
	if (newnode == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}
	newnode->data = x;
	newnode->next = NULL;

	if (pq->head == NULL)
	{
		pq->head = pq->tail = newnode;
	}
	else
	{
		pq->tail->next = newnode;
		pq->tail = newnode;
	}
}

void QueuePop(Queue* pq)  // 队头出队列
{
	assert(pq);
	assert(!QueueEmpty(pq));
	QueueNode* next = pq->head->next;
	free(pq->head);
	pq->head = next;
	if (pq->head == NULL)
		pq->tail = NULL;
}

QueueDataType QueueFront(Queue* pq)  // 获取队列头部元素
{
	assert(pq);
	assert(!QueueEmpty(pq));
	return pq->head->data;
}

QueueDataType QueueBack(Queue* pq)  // 获取队列队尾元素
{
	assert(pq);
	assert(!QueueEmpty(pq));
	return pq->tail->data;
}

int QueueSize(Queue* pq)  // 获取队列中有效元素个数
{
	assert(pq);
	int count = 0;
	QueueNode* cur = pq->head;
	while (cur != NULL)
	{
		count++;
		cur = cur->next;
	}
	return count;
}

int QueueEmpty(Queue* pq)  // 检测队列是否为空，如果为空返回非零结果，如果非空返回0
{
	assert(pq);
	return pq->head == NULL;
}

void QueueDestroy(Queue* pq)  // 销毁队列
{
	assert(pq);
	QueueNode* cur = pq->head;
	while (cur != NULL)
	{
		QueueNode* next = cur->next;
		free(cur);
		cur = next;
	}
	pq->head = pq->tail = NULL;
}