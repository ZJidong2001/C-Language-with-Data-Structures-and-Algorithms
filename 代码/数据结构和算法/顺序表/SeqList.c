#include "SeqList.h"

void SeqListInit(SL* ps)  // 顺序表初始化
{
	assert(ps);
	ps->a = NULL;
	ps->size = ps->capacity = 0;
}

void SeqListCheckCapacity(SL* ps)  // 检查空间，如果满了，进行增容
{
	assert(ps);
	if (ps->size == ps->capacity)
	{
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		SLDataType* tmp = (SLDataType*)realloc(ps->a, newcapacity * sizeof(SLDataType));
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		ps->a = tmp;
		ps->capacity = newcapacity;
	}
}

void SeqListPushBack(SL* ps, SLDataType x)  // 顺序表尾插
{
	assert(ps);

	// 分析顺序表尾插的过程，可能会出现以下三种情况
	// 1.没有空间，开辟空间
	// 2.空间不够，扩容
	// 3.空间足够，直接插入数据即可

	SeqListCheckCapacity(ps);

	ps->a[ps->size] = x;
	ps->size++;
}

void SeqListPopBack(SL* ps)  // 顺序表尾删
{
	assert(ps);
	assert(ps->size > 0);  // 判断顺序表是否为空，为空时不能执行删除操作
	ps->size--;
}

void SeqListPushFront(SL* ps, SLDataType x)  // 顺序表头插
{
	assert(ps);

	// 分析顺序表头插的过程，可能会出现以下三种情况
	// 1.没有空间，开辟空间
	// 2.空间不够，扩容
	// 3.空间足够，直接插入数据即可

	SeqListCheckCapacity(ps);

	int end = ps->size - 1;
	while (end >= 0)
	{
		ps->a[end + 1] = ps->a[end];
		--end;
	}
	ps->a[0] = x;
	ps->size++;
}

void SeqListPopFront(SL* ps)  // 顺序表头删
{
	assert(ps);
	assert(ps->size > 0);  // 判断顺序表是否为空，为空时不能执行删除操作
	int begin = 1;
	while (begin < ps->size)
	{
		ps->a[begin - 1] = ps->a[begin];
		++begin;
	}
	ps->size--;
}

int SeqListFind(SL* ps, SLDataType x)  // 顺序表查找
{
	assert(ps);
	for (int i = 0; i < ps->size; i++)
	{
		if (ps->a[i] == x)
		{
			return i;
		}
	}
	return -1;
}

void SeqListInsert(SL* ps, int pos, SLDataType x)  // 顺序表在pos位置插入x
{
	assert(ps);
	assert(pos >= 0 && pos <= ps->size);  // 判断pos位置的合法性

	// 分析顺序表pos位置插入的过程，可能会出现以下三种情况
	// 1.没有空间，开辟空间
	// 2.空间不够，扩容
	// 3.空间足够，直接插入数据即可

	SeqListCheckCapacity(ps);

	int end = ps->size - 1;
	while (end >= pos)
	{
		ps->a[end + 1] = ps->a[end];
		--end;
	}
	ps->a[pos] = x;
	ps->size++;
}

void SeqListErase(SL* ps, int pos)  // 顺序表删除pos位置的值
{
	assert(ps);
	assert(pos >= 0 & pos < ps->size);  // 既判断pos位置的合法性，又判断顺序表是否为空，为空时不能执行删除操作
	int begin = pos + 1;
	while (begin < ps->size)
	{
		ps->a[begin - 1] = ps->a[begin];
		++begin;
	}
	ps->size--;
}

void SeqListDestroy(SL* ps)  // 顺序表销毁
{
	assert(ps);
	free(ps->a);
	ps->a = NULL;
	ps->size = ps->capacity = 0;
}

void SeqListPrint(SL* ps)  // 顺序表打印
{
	assert(ps);
	for (int i = 0; i < ps->size; ++i)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}