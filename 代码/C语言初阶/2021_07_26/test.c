#include <stdio.h>
#include <string.h>

//int test()
//{
//	int a = 10;
//	int b = 20;
//	return a, b;  // err-逗号表达式，返回最后的结果，无法两个返回值
//}
//
//int main()  // 把函数处理结果的2个数据返回给主调函数
//{
//	int ret = test();
//	printf("%d\n", ret);
//
//	return 0;
//}

//void test(int arr[])  // 形参用数组
//{
//	int a = 10;
//	int b = 20;
//	arr[0] = a;
//	arr[1] = b;
//}
//
//int main()  // 把函数处理结果的2个数据返回给主调函数
//{
//	int arr[2] = { 0 };
//	test(arr);
//	printf("%d %d\n", arr[0], arr[1]);
//
//	return 0;
//}

//void test(int* px, int* py)  // 形参用2个指针
//{
//	int a = 10;
//	int b = 20;
//	*px = a;
//	*py = b;
//}
//
//int main()  // 把函数处理结果的2个数据返回给主调函数
//{
//	int x = 0;
//	int y = 0;
//	test(&x, &y);
//	printf("%d %d\n", x, y);
//
//	return 0;
//}

//int x = 0;
//int y = 0;
//
//void test()  // 用2个全局变量
//{
//	int a = 10;
//	int b = 20;
//	x = a;
//	y = b;
//}
//
//int main()  // 把函数处理结果的2个数据返回给主调函数
//{
//	test();
//	printf("%d %d\n", x, y);
//
//	return 0;
//}

//void reverse_string(char* str)
//{
//	int len = strlen(str);
//
//	int left = 0;
//	int right = len - 1;
//	while (left < right)
//	{
//		char tmp = str[left];
//		str[left] = str[right];
//		str[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()  // 字符串逆序（循环实现）
//{
//	char str[20] = "abcdef";
//	reverse_string(str);
//	printf("%s\n", str);
//
//	return 0;
//}

//void reverse_string(char* str)
//{
//	int len = strlen(str);
//
//	char tmp = str[0];
//	str[0] = str[len - 1];
//	str[len - 1] = '\0';
//
//	if (strlen(str + 1) >= 2)
//		reverse_string(str + 1);
//
//	str[len - 1] = tmp;
//}
//
//int main()  // 字符串逆序（递归实现）
//{
//	char str[20] = "abcdef";
//	reverse_string(str);
//	printf("%s\n", str);
//
//	return 0;
//}

//int DigitSum(int n)
//{
//	if (n <= 9)
//		return n;
//	else
//		return n % 10 + DigitSum(n / 10);
//}
//
//int main()  // 计算一个数的每位之和（递归实现）
//{
//	int num = 0, ret = 0;
//	scanf("%d", &num);
//	ret = DigitSum(num);
//	printf("%d\n", ret);
//
//	return 0;
//}

//double Pow(int n, int k)
//{
//	if (k == 0)
//		return 1.0;
//	else if (k > 0)
//		return n * Pow(n, k - 1);
//	else
//		return 1.0 / Pow(n, -k);
//}
//
//int main()  // 递归实现n的k次方
//{
//	int n = 0, k = 0;
//	double ret = 0.0;
//	scanf("%d%d", &n, &k);
//	ret = Pow(n, k);
//	printf("%lf", ret);
//
//	return 0;
//}

//int main()  // 一维数组的创建和初始化
//{
//	int arr1[10] = { 1,2,3 };  // 不完全初始化，剩余的默认初始化为0
//	int arr2[] = { 1,2,3,4 };
//	int arr3[5] = { 1,2,3,4,5 };
//	char arr4[3] = { 'a',98, 'c' };
//	char arr5[] = { 'a','b','c' };
//	char arr6[] = "abcdef";
//
//	return 0;
//}

//int main()  // 一维数组的使用
//{
//	int arr[10] = { 0 };
//
//	int sz = sizeof(arr) / sizeof(arr[0]);  // 计算数组的元素个数
//
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = i;  // 对数组内容赋值，数组是使用下标来访问的，下标从0开始
//	}
//	for (i = 0; i < sz; ++i)
//	{
//		printf("%d ", arr[i]);  // 输出数组的内容
//	}
//
//	return 0;
//}

int main()  // 一维数组在内存中的存储
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };

	int i = 0;
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("&arr[%d] = %p\n", i, &arr[i]);
	}

	return 0;
}