#include "Sort.h"

void PrintArray(int* a, int n)  // 打印数组
{
	assert(a);
	for (int i = 0; i < n; i++)
		printf("%d ", a[i]);
	printf("\n");
}

void Swap(int* px, int* py)  // 两数交换
{
	int tmp = *px;
	*px = *py;
	*py = tmp;
}

void AdjustDown(int* a, int n, int parent)  // 向下调整算法
{
	assert(a);
	while (parent * 2 + 1 < n)
	{
		int child = parent * 2 + 1;
		if (child + 1 < n && a[child + 1] > a[child])
			++child;
		if (a[child] > a[parent])
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

int GetMeIndex(int* a, int left, int right)  // 三数取中
{
	assert(a);
	int mid = (left + right) / 2;
	if (a[left] < a[right])
	{
		if (a[mid] > a[right])
			return right;
		else if (a[mid] < a[left])
			return left;
		else
			return mid;
	}
	else
	{
		if (a[mid] > a[left])
			return left;
		else if (a[mid] < a[right])
			return right;
		else
			return mid;
	}
}

int Partition1(int* a, int left, int right)  // 分区算法（hoare版本）
{
	assert(a);
	int MeIndex = GetMeIndex(a, left, right);
	Swap(&a[MeIndex], &a[left]);
	int keyi = left;
	while (left < right)
	{
		while (left < right && a[right] >= a[keyi])
			--right;
		while (left < right && a[left] <= a[keyi])
			++left;
		Swap(&a[left], &a[right]);
	}
	Swap(&a[left], &a[keyi]);
	return left;
}

int Partition2(int* a, int left, int right)  // 分区算法（挖坑版本）
{
	assert(a);
	int MeIndex = GetMeIndex(a, left, right);
	Swap(&a[MeIndex], &a[left]);
	int key = a[left];
	int pivot = left;
	while (left < right)
	{
		while (left < right && a[right] >= key)
			--right;
		a[pivot] = a[right];
		pivot = right;
		while (left < right && a[left] <= key)
			++left;
		a[pivot] = a[left];
		pivot = left;
	}
	a[pivot] = key;
	return pivot;
}

int Partition3(int* a, int left, int right)  // 分区算法（前后指针版本）
{
	assert(a);
	int MeIndex = GetMeIndex(a, left, right);
	Swap(&a[MeIndex], &a[left]);
	int keyi = left;
	int prev = left, cur = left + 1;
	while (cur <= right)
	{
		if (a[cur] < a[keyi] && ++prev != cur)
			Swap(&a[cur], &a[prev]);
		cur++;
	}
	Swap(&a[prev], &a[keyi]);
	return prev;
}

void _MergeSort(int* a, int* tmp, int left, int right)  // 合并左右两半部分进行排序
{
	assert(a);
	if (left >= right)
		return;
	int mid = (left + right) / 2;
	_MergeSort(a, tmp, left, mid);
	_MergeSort(a, tmp, mid + 1, right);
	int begin1 = left, end1 = mid;
	int begin2 = mid + 1, end2 = right;
	int index = left;
	while (begin1 <= end1 && begin2 <= end2)
	{
		if (a[begin1] < a[begin2])
			tmp[index++] = a[begin1++];
		else
			tmp[index++] = a[begin2++];
	}
	while (begin1 <= end1)
		tmp[index++] = a[begin1++];
	while (begin2 <= end2)
		tmp[index++] = a[begin2++];
	for (int i = left; i <= right; i++)
		a[i] = tmp[i];
}

void InsertSort(int* a, int n)  // 插入排序
{
	assert(a);

	for (int i = 0; i < n - 1; i++)
	{
		int end = i;
		int x = a[end + 1];
		while (end >= 0)
		{
			if (a[end] > x)
			{
				a[end + 1] = a[end];
				end--;
			}
			else
			{
				break;
			}
		}
		a[end + 1] = x;
	}
}

void ShellSort(int* a, int n)  // 希尔排序
{
	assert(a);
	int gap = n;
	while (gap > 1)
	{
		gap = gap / 3 + 1;
		for (int i = 0; i < n - gap; i++)
		{
			int end = i;
			int x = a[end + gap];
			while (end >= 0)
			{
				if (a[end] > x)
				{
					a[end + gap] = a[end];
					end -= gap;
				}
				else
				{
					break;
				}
			}
			a[end + gap] = x;
		}
	}
}

void SelectSort(int* a, int n)  // 选择排序
{
	assert(a);
	int begin = 0, end = n - 1;
	while (begin < end)
	{
		int mini = begin, maxi = begin;
		for (int i = begin; i <= end; i++)
		{
			if (a[i] < a[mini])
				mini = i;
			if (a[i] > a[maxi])
				maxi = i;
		}
		Swap(&a[mini], &a[begin]);
		if (maxi == begin)
			maxi = mini;
		Swap(&a[maxi], &a[end]);
		begin++;
		end--;
	}
}

void HeapSort(int* a, int n)  // 堆排序
{
	assert(a);
	for (int i = (n - 2) / 2; i >= 0; i--)
		AdjustDown(a, n, i);

	int end = n - 1;
	while (end > 0)
	{
		Swap(&a[0], &a[end]);
		AdjustDown(a, end, 0);
		end--;
	}
}

void BubbleSort(int* a, int n)  // 冒泡排序
{
	assert(a);
	int end = n;
	while (end > 1)
	{
		int exchange = 0;
		for (int i = 1; i < end; i++)
		{
			if (a[i - 1] > a[i])
			{
				Swap(&a[i - 1], &a[i]);
				exchange = 1;
			}
		}
		if (exchange == 0)
			break;
		end--;
	}
}

void QuickSort(int* a, int left, int right)  // 快速排序
{
	assert(a);
	if (left >= right)
		return;
	if (right - left + 1 < 10)
	{
		InsertSort(a + left, right - left + 1);
	}
	else
	{
		//int div = Partition1(a, left, right);
		//int div = Partition2(a, left, right);
		int div = Partition3(a, left, right);
		QuickSort(a, left, div - 1);
		QuickSort(a, div + 1, right);
	}
}

void QuickSortNonR(int* a, int left, int right)  // 快速排序非递归版本
{
	assert(a);
	Stack st;
	StackInit(&st);
	StackPush(&st, left);
	StackPush(&st, right);
	while (!StackEmpty(&st))
	{
		int end = StackTop(&st);
		StackPop(&st);
		int begin = StackTop(&st);
		StackPop(&st);
		//int div = Partition1(a, begin, end);
		//int div = Partition2(a, begin, end);
		int div = Partition3(a, begin, end);
		if (div + 1 < end)
		{
			StackPush(&st, div + 1);
			StackPush(&st, end);
		}
		if (begin < div - 1)
		{
			StackPush(&st, begin);
			StackPush(&st, div - 1);
		}
	}
	StackDestroy(&st);
}

void MergeSort(int* a, int n)  // 归并排序
{
	assert(a);
	int* tmp = (int*)malloc(sizeof(int) * n);
	if (tmp == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}
	_MergeSort(a, tmp, 0, n - 1);
	free(tmp);
	tmp = NULL;
}

void MergeSortNonR1(int* a, int n)  // 归并排序非递归版本一
{
	assert(a);
	int* tmp = (int*)malloc(sizeof(int) * n);
	if (tmp == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}
	int gap = 1;
	while (gap < n)
	{
		for (int i = 0; i < n; i += 2 * gap)
		{
			int begin1 = i, end1 = i + gap - 1;
			int begin2 = i + gap, end2 = i + 2 * gap - 1;
			if (end1 >= n)
			{
				end1 = n - 1;
				begin2 = n;
				end2 = n - 1;
			}
			if (begin2 >= n)
			{
				begin2 = n;
				end2 = n - 1;
			}
			if (end2 >= n)
			{
				end2 = n - 1;
			}
			int index = i;
			while (begin1 <= end1 && begin2 <= end2)
			{
				if (a[begin1] <= a[begin2])
					tmp[index++] = a[begin1++];
				else
					tmp[index++] = a[begin2++];
			}
			while (begin1 <= end1)
				tmp[index++] = a[begin1++];
			while (begin2 <= end2)
				tmp[index++] = a[begin2++];
		}
		for (int i = 0; i < n; i++)
			a[i] = tmp[i];
		gap *= 2;
	}
	free(tmp);
	tmp = NULL;
}

void MergeSortNonR2(int* a, int n)  // 归并排序非递归版本二
{
	assert(a);
	int* tmp = (int*)malloc(sizeof(int) * n);
	if (tmp == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}
	int gap = 1;
	while (gap < n)
	{
		for (int i = 0; i < n; i += 2 * gap)
		{
			int begin1 = i, end1 = i + gap - 1;
			int begin2 = i + gap, end2 = i + 2 * gap - 1;
			if (end1 >= n || begin2 >= n)
				break;
			if (end2 >= n)
				end2 = n - 1;
			int index = i;
			while (begin1 <= end1 && begin2 <= end2)
			{
				if (a[begin1] <= a[begin2])
					tmp[index++] = a[begin1++];
				else
					tmp[index++] = a[begin2++];
			}
			while (begin1 <= end1)
				tmp[index++] = a[begin1++];
			while (begin2 <= end2)
				tmp[index++] = a[begin2++];
			for (int j = i; j <= end2; j++)
				a[j] = tmp[j];
		}
		gap *= 2;
	}
	free(tmp);
	tmp = NULL;
}

void CountSort(int* a, int n)  // 计数排序
{
	assert(a);
	int min = a[0], max = a[0];
	for (int i = 1; i < n; i++)
	{
		if (a[i] < min)
			min = a[i];
		if (a[i] > max)
			max = a[i];
	}
	int range = max - min + 1;
	int* count = (int*)malloc(sizeof(int) * range);
	if (count == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}
	memset(count, 0, sizeof(int) * range);
	for (int i = 0; i < n; i++)
		count[a[i] - min]++;
	int index = 0;
	for (int i = 0; i < range; i++)
	{
		while (count[i]--)
			a[index++] = i + min;
	}
	free(count);
	count = NULL;
}