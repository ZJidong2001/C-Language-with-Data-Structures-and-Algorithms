#include "SingleList.h"

SLNode* BuySingleListNode(SLDataType x)  // 动态申请一个节点
{
	SLNode* newnode = (SLNode*)malloc(sizeof(SLNode));
	if (newnode == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}
	newnode->data = x;
	newnode->next = NULL;
	return newnode;
}

void SingleListPrint(SLNode* phead)  // 单链表打印
{
	SLNode* cur = phead;
	while (cur != NULL)
	{
		printf("%d", cur->data);
		cur = cur->next;
		if (cur != NULL)
			printf("->");
	}
	printf("\n");
}

void SingleListPushBack(SLNode** pphead, SLDataType x)  // 单链表尾插
{
	assert(pphead);
	SLNode* newnode = BuySingleListNode(x);
	if (*pphead == NULL)
	{
		*pphead = newnode;
	}
	else
	{
		SLNode* tail = *pphead;
		while (tail->next != NULL)
			tail = tail->next;
		tail->next = newnode;
	}
}

void SingleListPushFront(SLNode** pphead, SLDataType x)  // 单链表头插
{
	assert(pphead);
	SLNode* newnode = BuySingleListNode(x);
	newnode->next = *pphead;
	*pphead = newnode;
}

void SingleListPopBack(SLNode** pphead)  // 单链表尾删
{
	assert(pphead);
	assert(*pphead != NULL);
	if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else
	{
		SLNode* prev = NULL;
		SLNode* tail = *pphead;
		while (tail->next != NULL)
		{
			prev = tail;
			tail = tail->next;
		}
		free(tail);
		tail = NULL;
		prev->next = NULL;
	}
}

void SingleListPopFront(SLNode** pphead)  // 单链表头删
{
	assert(pphead);
	assert(*pphead != NULL);
	SLNode* head = *pphead;
	*pphead = head->next;
	free(head);
}

SLNode* SingleListFind(SLNode* phead, SLDataType x)  // 单链表查找
{
	SLNode* cur = phead;
	while (cur != NULL)
	{
		if (cur->data == x)
			return cur;
		else
			cur = cur->next;
	}
	return NULL;
}

void SingleListInsertAfter(SLNode* pos, SLDataType x)  // 单链表在pos位置之后插入x
{
	assert(pos);
	SLNode* newnode = BuySingleListNode(x);
	newnode->next = pos->next;
	pos->next = newnode;
}

void SingleListEraseAfter(SLNode* pos)  // 单链表删除pos位置之后的值
{
	assert(pos);
	assert(pos->next);
	SLNode* next = pos->next;
	pos->next = next->next;
	free(next);
	next = NULL;
}

void SingleListDestroy(SLNode** pphead)  // 单链表销毁
{
	assert(pphead);
	SLNode* cur = *pphead;
	while (cur != NULL)
	{
		SLNode* next = cur->next;
		free(cur);
		cur = next;
	}
	*pphead = NULL;
}