#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Sort.h"

void TestInsertSort()  // 插入排序测试
{
	int a[] = { 6,2,0,3,9,4,8,5,1,7 };
	PrintArray(a, sizeof(a) / sizeof(a[0]));
	InsertSort(a, sizeof(a) / sizeof(a[0]));
	PrintArray(a, sizeof(a) / sizeof(a[0]));
}

void TestShellSort()  // 希尔排序测试
{
	int a[] = { 6,2,0,3,9,4,8,5,1,7 };
	PrintArray(a, sizeof(a) / sizeof(a[0]));
	ShellSort(a, sizeof(a) / sizeof(a[0]));
	PrintArray(a, sizeof(a) / sizeof(a[0]));
}

void TestSelectSort()  // 选择排序测试
{
	int a[] = { 6,2,0,3,9,4,8,5,1,7 };
	PrintArray(a, sizeof(a) / sizeof(a[0]));
	SelectSort(a, sizeof(a) / sizeof(a[0]));
	PrintArray(a, sizeof(a) / sizeof(a[0]));
}

void TestHeapSort()  // 堆排序测试
{
	int a[] = { 6,2,0,3,9,4,8,5,1,7 };
	PrintArray(a, sizeof(a) / sizeof(a[0]));
	HeapSort(a, sizeof(a) / sizeof(a[0]));
	PrintArray(a, sizeof(a) / sizeof(a[0]));
}

void TestBubbleSort()  // 冒泡排序测试
{
	int a[] = { 6,2,0,3,9,4,8,5,1,7 };
	PrintArray(a, sizeof(a) / sizeof(a[0]));
	BubbleSort(a, sizeof(a) / sizeof(a[0]));
	PrintArray(a, sizeof(a) / sizeof(a[0]));
}

void TestQuickSort()  // 快速排序测试
{
	int a[] = { 6,2,0,3,9,4,8,5,1,7 };
	PrintArray(a, sizeof(a) / sizeof(a[0]));
	QuickSort(a, 0, sizeof(a) / sizeof(a[0]) - 1);
	PrintArray(a, sizeof(a) / sizeof(a[0]));
}

void TestQuickSortNonR()  // 快速排序非递归测试
{
	int a[] = { 6,2,0,3,9,4,8,5,1,7 };
	PrintArray(a, sizeof(a) / sizeof(a[0]));
	QuickSortNonR(a, 0, sizeof(a) / sizeof(a[0]) - 1);
	PrintArray(a, sizeof(a) / sizeof(a[0]));
}

void TestMergeSort()  // 归并排序测试
{
	int a[] = { 6,2,0,3,9,4,8,5,1,7 };
	PrintArray(a, sizeof(a) / sizeof(a[0]));
	MergeSort(a, sizeof(a) / sizeof(a[0]));
	PrintArray(a, sizeof(a) / sizeof(a[0]));
}

void TestMergeSortNonR()  // 归并排序非递归测试
{
	int a[] = { 6,2,0,3,9,4,8,5,1,7 };
	PrintArray(a, sizeof(a) / sizeof(a[0]));
	//MergeSortNonR1(a, sizeof(a) / sizeof(a[0]));
	MergeSortNonR2(a, sizeof(a) / sizeof(a[0]));
	PrintArray(a, sizeof(a) / sizeof(a[0]));
}

void TestCountSort()  // 计数排序测试
{
	int a[] = { 6,2,0,3,9,4,8,5,1,7 };
	PrintArray(a, sizeof(a) / sizeof(a[0]));
	CountSort(a, sizeof(a) / sizeof(a[0]));
	PrintArray(a, sizeof(a) / sizeof(a[0]));
}

void TestOP()  // 排序性能测试
{
	srand(time(0));

	const int N = 100000;
	int* a0 = (int*)malloc(sizeof(int) * N);
	int* a1 = (int*)malloc(sizeof(int) * N);
	int* a2 = (int*)malloc(sizeof(int) * N);
	int* a3 = (int*)malloc(sizeof(int) * N);
	int* a4 = (int*)malloc(sizeof(int) * N);
	int* a5 = (int*)malloc(sizeof(int) * N);
	int* a6 = (int*)malloc(sizeof(int) * N);
	int* a7 = (int*)malloc(sizeof(int) * N);
	int* a8 = (int*)malloc(sizeof(int) * N);
	int* a9 = (int*)malloc(sizeof(int) * N);

	for (int i = 0; i < N; ++i)
	{
		a0[i] = rand();
		a1[i] = a0[i];
		a2[i] = a0[i];
		a3[i] = a0[i];
		a4[i] = a0[i];
		a5[i] = a0[i];
		a6[i] = a0[i];
		a7[i] = a0[i];
		a8[i] = a0[i];
		a9[i] = a0[i];
	}

	int begin0 = clock();
	InsertSort(a0, N);
	int end0 = clock();

	int begin1 = clock();
	ShellSort(a1, N);
	int end1 = clock();

	int begin2 = clock();
	SelectSort(a2, N);
	int end2 = clock();

	int begin3 = clock();
	HeapSort(a3, N);
	int end3 = clock();

	int begin4 = clock();
	BubbleSort(a4, N);
	int end4 = clock();

	int begin5 = clock();
	QuickSort(a5, 0, N - 1);
	int end5 = clock();

	int begin6 = clock();
	QuickSortNonR(a6, 0, N - 1);
	int end6 = clock();

	int begin7 = clock();
	MergeSort(a7, N);
	int end7 = clock();

	int begin8 = clock();
	//MergeSortNonR1(a8, N);
	MergeSortNonR2(a8, N);
	int end8 = clock();

	int begin9 = clock();
	CountSort(a9, N);
	int end9 = clock();

	printf("InsertSort: %d\n", end0 - begin0);
	printf("ShellSort: %d\n", end1 - begin1);
	printf("SelectSort: %d\n", end2 - begin2);
	printf("HeapSort: %d\n", end3 - begin3);
	printf("BubbleSort: %d\n", end4 - begin4);
	printf("QuickSort: %d\n", end5 - begin5);
	printf("QuickSortNonR: %d\n", end6 - begin6);
	printf("MergeSort: %d\n", end7 - begin7);
	printf("MergeSortNonR: %d\n", end8 - begin8);
	printf("CountSort: %d\n", end9 - begin9);

	free(a0);
	free(a1);
	free(a2);
	free(a3);
	free(a4);
	free(a5);
	free(a6);
	free(a7);
	free(a8);
	free(a9);
}

int main()
{
	TestInsertSort();
	TestShellSort();
	TestSelectSort();
	TestHeapSort();
	TestBubbleSort();
	TestQuickSort();
	TestQuickSortNonR();
	TestMergeSort();
	TestMergeSortNonR();
	TestCountSort();

	TestOP();

	return 0;
}