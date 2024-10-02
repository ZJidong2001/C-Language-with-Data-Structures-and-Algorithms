#include <stdio.h>
#include <string.h>
#include <math.h>

//int main()  // strcpy
//{
//	char src[] = "Hello world!";  // 源字符串
//	char dst[20] = "xxxxxxxxxxxxxxxxx";  // 目标字符串
//
//	char* ret = strcpy(dst, src);
//
//	printf("%s\n", dst);
//	printf("%s\n", ret);
//
//	return 0;
//}

//int main()  // memset
//{
//	char str[] = "almost every programmer should know memset!";
//
//	char* ret = (char*)memset(str, '-', 6);
//
//	printf("%s\n", str);
//	printf("%s\n", ret);
//
//	return 0;
//}

//int get_max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//
//int main()  // 写一个函数可以找出两个整数中的最大值
//{
//	int num1 = 0, num2 = 0, max = 0;
//	scanf("%d%d", &num1, &num2);
//
//	max = get_max(num1, num2);
//
//	printf("%d\n", max);
//
//	return 0;
//}

//void Swap(int x, int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//
//int main()  // 写一个函数可以交换两个整形变量的内容（err-传值调用）
//{
//	int a = 10, b = 20;
//
//	printf("交换前：a=%d b=%d\n", a, b);
//
//	Swap(a, b);  // 实参a、b传给形参x、y时，形参是实参的一份临时拷贝（改变形参不会影响实参）
//
//	printf("交换后：a=%d b=%d\n", a, b);
//
//	return 0;
//}

//void Swap(int* px, int* py)
//{
//	int z = 0;
//	z = *px;
//	*px = *py;
//	*py = z;
//}
//
//int main()  // 写一个函数可以交换两个整形变量的内容（传址调用）
//{
//	int a = 10, b = 20;
//
//	printf("交换前：a=%d b=%d\n", a, b);
//
//	Swap(&a, &b);
//
//	printf("交换后：a=%d b=%d\n", a, b);
//
//	return 0;
//}

//int is_prime(int n)
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(n); i++)
//	{
//		if (n % i == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()  // 写一个函数可以判断一个数是不是素数
//{
//	int num = 0;
//	scanf("%d", &num);
//
//	if (is_prime(num) == 1)
//		printf("%d是素数\n", num);
//	else
//		printf("%d不是素数\n", num);
//
//	return 0;
//}

//int is_leap_year(int year)
//{
//	return (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0));
//}
//
//int main()  // 写一个函数判断一年是不是闰年
//{
//	int year = 0;
//	scanf("%d", &year);
//
//	if (is_leap_year(year) == 1)
//		printf("%d是闰年\n", year);
//	else
//		printf("%d不是闰年\n", year);
//
//	return 0;
//}

//int binary_search(int arr[], int sz, int k)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//			left = mid + 1;
//		else if (arr[mid] > k)
//			right = mid - 1;
//		else
//			return mid;
//	}
//
//	return -1;
//}
//
//int main()  // 写一个函数，实现一个整型有序数组的二分查找
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };  // 有序数组
//	int sz = sizeof(arr) / sizeof(arr[0]);  // 数组的元素个数
//	int k = 17;  // 要查找的数字
//
//	int ret = binary_search(arr, sz, k);  // TDD - 测试驱动开发
//
//	if (ret == -1)
//		printf("找不到\n");
//	else
//		printf("找到了，下标是：%d\n", ret);
//
//	return 0;
//}

//void increase(int* p)
//{
//	*p = *p + 1;
//}
//
//int main()  // 写一个函数，每调用一次这个函数，就会将num的值增加1
//{
//	int num = 0;
//
//	increase(&num);
//	printf("%d\n", num);
//	increase(&num);
//	printf("%d\n", num);
//	increase(&num);
//	printf("%d\n", num);
//
//	return 0;
//}

//int main()  // 不支持嵌套定义
//{
//	void test()  // err
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

int main()  // 链式访问
{
	printf("%d\n", strlen("abc"));

	char arr1[20] = "xxxxxx";
	char arr2[20] = "abc";
	printf("%s\n", strcpy(arr1, arr2));

	printf("%d", printf("%d", printf("%d", 43)));

	return 0;
}