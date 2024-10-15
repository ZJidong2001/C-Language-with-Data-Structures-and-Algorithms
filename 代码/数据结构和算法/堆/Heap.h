#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define root >  // 大根堆（>）、小根堆（<）

typedef int HeapDataType;

typedef struct Heap
{
	HeapDataType* a;
	int size;
	int capacity;
}Heap;


// 堆的接口函数
void Swap(HeapDataType* px, HeapDataType* py);  // 两数交换
void AdjustUp(HeapDataType* a, int size, int child);  // 向上调整算法
void AdjustDown(HeapDataType* a, int size, int parent);  // 向下调整算法

void HeapInit(Heap* hp);  // 堆的构建
void HeapDestroy(Heap* hp);  // 堆的销毁
void HeapPush(Heap* hp, HeapDataType x);  // 堆的插入
void HeapPop(Heap* hp);  // 堆的删除
HeapDataType HeapTop(Heap* hp);  // 取堆顶的元素
int HeapSize(Heap* hp);  // 堆的数据个数
int HeapEmpty(Heap* hp);  // 堆的判空
void HeapPrint(Heap* hp);  // 堆的打印