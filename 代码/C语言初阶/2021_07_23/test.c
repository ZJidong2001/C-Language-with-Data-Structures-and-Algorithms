#include <stdio.h>

//#include "add.h"
//#pragma comment(lib, "2021_07_23_add.lib")  // 导入静态库
//
//int main()
//{
//	int num1 = 0, num2 = 0, ret = 0;
//	scanf("%d%d", &num1, &num2);
//	ret = Add(num1, num2);
//	printf("%d\n", ret);
//
//	return 0;
//}

//void print(unsigned int n)
//{
//	if (n > 9)
//		print(n / 10);
//	printf("%d ", n % 10);
//}
//
//int main()  // 接收一个整型值（无符号），按照顺序打印它的每一位
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	print(num);
//
//	return 0;
//}

//int my_strlen(char* s)
//{
//	int count = 0;
//	while (*s != '\0')
//	{
//		count++;
//		s++;
//	}
//	return count;
//}
//
//int main()  // 求字符串的长度
//{
//	char arr[10] = "abcdef";
//	printf("%d\n", my_strlen(arr));
//
//	return 0;
//}

//int my_strlen(char* s)
//{
//	if (*s == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(s + 1);
//}
//
//int main()  // 编写函数不允许创建临时变量，求字符串的长度
//{
//	char arr[10] = "abcdef";
//	printf("%d\n", my_strlen(arr));
//
//	return 0;
//}

// 字符指针+1，向后跳1个字节
// char* p;
// p+1 -> 向后跳1个字节

// 整型指针+1，向后跳4个字节
// int* p;
// p+1 -> 向后跳4个字节

//int Fac(int n)
//{
//	int ret = 1;
//
//	int i = 0;
//	for (i = 1; i <= n; i++)
//		ret *= i;
//
//	return ret;
//}
//
//int main()  // 求n的阶乘
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	printf("%d\n", Fac(n));
//
//	return 0;
//}

//int Fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac(n - 1);
//}
//
//int main()  // 求n的阶乘（不考虑溢出）
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	printf("%d\n", Fac(n));
//
//	return 0;
//}

//int Fib(int n)
//{
//	int num1 = 1, num2 = 1, ret = 1;
//
//	while (n > 2)
//	{
//		ret = num1 + num2;
//		num1 = num2;
//		num2 = ret;
//		n--;
//	}
//
//	return ret;
//}
//
//int main()  // 求第n个斐波那契数
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	printf("%d\n", Fib(n));
//
//	return 0;
//}

int Fib(int n)
{
	if (n <= 2)
		return 1;
	else
		return Fib(n - 1) + Fib(n - 2);
}

int main()  // 求第n个斐波那契数（不考虑溢出）
{
	int n = 0;
	scanf("%d", &n);

	printf("%d\n", Fib(n));

	return 0;
}