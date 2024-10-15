#include "Heap.h"

void Swap(HeapDataType* px, HeapDataType* py)  // 两数交换
{
	HeapDataType tmp = *px;
	*px = *py;
	*py = tmp;
}

void AdjustUp(HeapDataType* a, int size, int child)  // 向上调整算法
{
	assert(a);
	while (child > 0)
	{
		int parent = (child - 1) / 2;
		if (a[child] root a[parent])
		{
			Swap(&a[child], &a[parent]);
			child = parent;
		}
		else
		{
			break;
		}
	}
}

void AdjustDown(HeapDataType* a, int size, int parent)  // 向下调整算法
{
	assert(a);
	while (parent * 2 + 1 < size)
	{
		int child = parent * 2 + 1;
		if (child + 1 < size && a[child + 1] root a[child])
		{
			child++;
		}
		if (a[child] root a[parent])
		{
			Swap(&a[child], &a[parent]);
			parent = child;
		}
		else
		{
			break;
		}
	}
}

void HeapInit(Heap* hp)  // 堆的构建
{
	assert(hp);
	hp->a = NULL;
	hp->size = hp->capacity = 0;
}

void HeapDestroy(Heap* hp)  // 堆的销毁
{
	assert(hp);
	free(hp->a);
	hp->a = NULL;
	hp->size = hp->capacity = 0;
}

void HeapPush(Heap* hp, HeapDataType x)  // 堆的插入
{
	assert(hp);
	if (hp->size == hp->capacity)
	{
		int newcapacity = hp->capacity == 0 ? 4 : hp->capacity * 2;
		HeapDataType* tmp = (HeapDataType*)realloc(hp->a, sizeof(HeapDataType) * newcapacity);
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		hp->a = tmp;
		hp->capacity = newcapacity;
	}
	hp->a[hp->size] = x;
	hp->size++;
	AdjustUp(hp->a, hp->size, hp->size - 1);
}

void HeapPop(Heap* hp)  // 堆的删除
{
	assert(hp);
	assert(!HeapEmpty(hp));
	Swap(&hp->a[0], &hp->a[hp->size - 1]);
	hp->size--;
	AdjustDown(hp->a, hp->size, 0);
}

HeapDataType HeapTop(Heap* hp)  // 取堆顶的元素
{
	assert(hp);
	assert(!HeapEmpty(hp));
	return hp->a[0];
}

int HeapSize(Heap* hp)  // 堆的数据个数
{
	assert(hp);
	return hp->size;
}

int HeapEmpty(Heap* hp)  // 堆的判空
{
	assert(hp);
	return hp->size == 0;
}

void HeapPrint(Heap* hp)  // 堆的打印
{
	assert(hp);
	for (int i = 0; i < hp->size; ++i)
	{
		printf("%d ", hp->a[i]);
	}
	printf("\n");
}