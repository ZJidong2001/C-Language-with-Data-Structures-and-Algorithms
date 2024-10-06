#include "DoubleList.h"

DLNode* BuyDoubleListNode(DLDataType x)  // 动态申请一个节点
{
	DLNode* newnode = (DLNode*)malloc(sizeof(DLNode));
	if (newnode == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}
	newnode->data = x;
	newnode->prev = NULL;
	newnode->next = NULL;
	return newnode;
}

DLNode* DoubleListCreate()  // 双链表创建
{
	DLNode* phead = (DLNode*)malloc(sizeof(DLNode));
	if (phead == NULL)
	{
		printf("DoubleList create fail\n");
		exit(-1);
	}
	phead->prev = phead;
	phead->next = phead;
	return phead;
}

void DoubleListPrint(DLNode* phead)  // 双链表打印
{
	assert(phead);
	DLNode* cur = phead->next;
	while (cur != phead)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
	printf("\n");
}

void DoubleListPushBack(DLNode* phead, DLDataType x)  // 双链表尾插
{
	assert(phead);
	DLNode* newnode = BuyDoubleListNode(x);
	DLNode* tail = phead->prev;
	newnode->prev = tail;
	newnode->next = phead;
	phead->prev = newnode;
	tail->next = newnode;
}

void DoubleListPopBack(DLNode* phead)  // 双链表尾删
{
	assert(phead);
	assert(phead->prev != phead || phead->next != phead);
	DLNode* tail = phead->prev;
	phead->prev = tail->prev;
	tail->prev->next = phead;
	free(tail);
	tail = NULL;
}

void DoubleListPushFront(DLNode* phead, DLDataType x)  // 双链表头插
{
	assert(phead);
	DLNode* newnode = BuyDoubleListNode(x);
	DLNode* head = phead->next;
	newnode->prev = phead;
	newnode->next = head;
	phead->next = newnode;
	head->prev = newnode;
}

void DoubleListPopFront(DLNode* phead)  // 双链表头删
{
	assert(phead);
	assert(phead->prev != phead || phead->next != phead);
	DLNode* head = phead->next;
	phead->next = head->next;
	head->next->prev = phead;
	free(head);
	head = NULL;
}

DLNode* DoubleListFind(DLNode* phead, DLDataType x)  // 双链表查找
{
	assert(phead);
	DLNode* cur = phead->next;
	while (cur != phead)
	{
		if (cur->data == x)
			return cur;
		else
			cur = cur->next;
	}
	return NULL;
}

void DoubleListInsert(DLNode* pos, DLDataType x)  // 双链表在pos位置插入x
{
	assert(pos);
	DLNode* newnode = BuyDoubleListNode(x);
	newnode->next = pos;
	newnode->prev = pos->prev;
	pos->prev->next = newnode;
	pos->prev = newnode;
}

void DoubleListErase(DLNode* pos)  // 双链表删除pos位置的值
{
	assert(pos);
	pos->next->prev = pos->prev;
	pos->prev->next = pos->next;
	free(pos);
	pos = NULL;
}

void DoubleListDestory(DLNode* phead)  // 双链表销毁
{
	assert(phead);
	DLNode* cur = phead->next;
	while (cur != phead)
	{
		DLNode* next = cur->next;
		free(cur);
		cur = next;
	}
	free(phead);
	phead = NULL;
}