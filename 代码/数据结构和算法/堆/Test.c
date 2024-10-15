#include <stdio.h>
#include "Heap.h"

//int main()  // 检验堆的创建插入等操作
//{
//	int a[] = { 10,15,19,25,18,34,65,49,27,37,28 };
//
//	Heap hp;
//	HeapInit(&hp);
//
//	for (int i = 0; i < sizeof(a) / sizeof(a[0]); ++i)
//	{
//		HeapPush(&hp, a[i]);
//		HeapPrint(&hp);
//	}
//
//	for (int j = hp.size; j > 0; --j)
//	{
//		HeapPop(&hp);
//		HeapPrint(&hp);
//	}
//
//	HeapDestroy(&hp);
//
//	return 0;
//}

//void TopK(int* a, int n, int k)
//{
//    Heap hp;
//    HeapInit(&hp);
//
//    for (int i = 0; i < k; i++)
//    {
//        HeapPush(&hp, a[i]);
//    }
//
//    for (int i = k; i < n; i++)
//    {
//        if (a[i] > HeapTop(&hp))
//        {
//            HeapPop(&hp);
//            HeapPush(&hp, a[i]);
//        }
//    }
//
//    HeapPrint(&hp);
//
//    HeapDestroy(&hp);
//}
//
//int main()  // TopK问题---在数据中选出最大（最小）的前k个数，采用小根堆（大根堆）
//{
//    int n = 10000;
//    int* a = (int*)malloc(sizeof(int) * n);
//    srand(time(0));
//    for (size_t i = 0; i < n; ++i)
//    {
//        a[i] = rand() % 1000000;
//    }
//    a[5] = 1000000 + 1;
//    a[1231] = 1000000 + 2;
//    a[531] = 1000000 + 3;
//    a[5121] = 1000000 + 4;
//    a[115] = 1000000 + 5;
//    a[2335] = 1000000 + 6;
//    a[9999] = 1000000 + 7;
//    a[76] = 1000000 + 8;
//    a[423] = 1000000 + 9;
//    a[3144] = 1000000 + 10;
//
//    TopK(a, n, 10);
//
//    return 0;
//}

//void HeapSort(int* a, int n)  // 空间复杂度能否优化为O(1)？
//{
//	Heap hp;
//	HeapInit(&hp);
//
//	for (int i = 0; i < n; ++i)
//	{
//		HeapPush(&hp, a[i]);
//	}
//
//	for (int i = 0; i < n; ++i)
//	{
//		a[i] = HeapTop(&hp);
//		HeapPop(&hp);
//	}
//
//	HeapDestroy(&hp);
//}

void HeapSort(int* a, int n)
{
	//for (int i = 1; i < n; ++i)  // 建堆方式一
	//{
	//	AdjustUp(a, n, i);
	//}

	for (int i = (n - 2) / 2; i >= 0; --i)  // 建堆方式二
	{
		AdjustDown(a, n, i);
	}

	for (int end = n - 1; end > 0; end--)
	{
		Swap(&a[0], &a[end]);
		AdjustDown(a, end, 0);
	}
}

int main()  // 堆排序
{
	int a[] = { 70,56,30,25,15,10,75,33,50,69 };

	for (int i = 0; i < sizeof(a) / sizeof(a[0]); ++i)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

	HeapSort(a, sizeof(a) / sizeof(a[0]));

	for (int i = 0; i < sizeof(a) / sizeof(a[0]); ++i)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

	return 0;
}