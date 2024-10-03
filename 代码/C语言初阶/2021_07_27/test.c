#include <stdio.h>

//int main()  // 二维数组的创建和初始化
//{
//	int arr1[3][5] = { 1,2,3,4,5,6,7,8,9,10,11 };
//	int arr2[3][5] = { {1,2},{3,4},{5,6} };
//	int arr3[][5] = { {1,2},{3,4},{5,6} };
//
//	char ch1[4][6] = { 'a','b' };
//	char ch2[4][6] = { {'a'},{'b'} };
//	char ch3[4][6] = { "abc","def","qwe" };
//
//	double d1[4][7];
//
//	return 0;
//}

//int main()  // 二维数组的使用
//{
//	int arr[3][5] = { {1,2,3},{4,5},{6,7,8,9,0} };
//
//	int i = 0, j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//int main()  // 二维数组在内存中的存储
//{
//	int arr[3][5] = { {1,2,3},{4,5},{6,7,8,9,0} };
//
//	int i = 0, j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//int main()  // 通过指针打印一维数组
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int* p = arr;
//
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	printf("\n");
//
//	return 0;
//}

//int main()  // 通过指针打印二维数组
//{
//	int arr[3][5] = { {1,2,3},{4,5},{6,7,8,9,0} };
//	int* p = &arr[0][0];
//
//	int i = 0;
//	for (i = 0; i < 15; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	printf("\n");
//
//	return 0;
//}

//int main()  // 数组越界访问
//{
//	int arr[5] = { 1,2,3,4,5 };
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);  // C语言越界访问不做检查
//		arr[i] = 0;  // C语言越界修改则会报错
//	}
//
//	return 0;
//}

//void Sort(int* arr, int sz)  // 数组排序（冒泡排序）
//{
//	int i = 0, j = 0;
//	for (i = 0; i < sz - 1; i++)  // 冒泡排序的趟数
//	{
//		int flag = 1;  // 假设数组已经有序
//		for (j = 0; j < sz - 1 - i; j++)  // 一趟冒泡排序的过程
//		{
//			if (arr[j] > arr[j + 1])  // 交换
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//			break;
//	}
//}
//
//void Print(int* p, int sz)  // 打印数组
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		//printf("%d ", p[i]);
//		//printf("%d ", *(p + i));
//		printf("%d ", *p++);
//	}
//}
//
//int main()  // 数组作为函数参数
//{
//	int arr[] = { 1,4,2,3,8,7,5,6,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	Sort(arr, sz);  // 数组传参-传过去的是数组首元素地址
//	Print(arr, sz);
//
//	return 0;
//}

// 通常情况下，数组名是首元素的地址。但有2个例外：
// 1. sizeof(数组名)，数组名表示整个数组，计算整个数组所占内存空间的大小
// 2. &数组名，数组名表示整个数组，取出整个数组的地址

int main()  // 数组名是什么
{
	int arr[10] = { 1,2,3,4,5 };

	printf("%p\n", arr);
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr);

	printf("------------------------\n");

	printf("%p\n", arr + 1);
	printf("%p\n", &arr[0] + 1);
	printf("%p\n", &arr + 1);

	return 0;
}