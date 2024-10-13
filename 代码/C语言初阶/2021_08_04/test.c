#include <stdio.h>
#include <assert.h>

//void my_strcpy(char* dst, char* src)  // 版本1
//{
//	while (*src != '\0')
//	{
//		*dst = *src;
//		src++;
//		dst++;
//	}
//	*dst = *src;
//}
//
//void my_strcpy(char* dst, char* src)  // 版本2
//{
//	while (*src != '\0')
//	{
//		*dst++ = *src++;
//	}
//	*dst = *src;
//}
//
//void my_strcpy(char* dst, char* src)  // 版本3
//{
//	while (*dst++ = *src++)
//	{
//		;
//	}
//}
//
//void my_strcpy(char* dst, char* src)  // 版本4
//{
//	if (src == NULL || dst == NULL)
//	{
//		return;
//	}
//
//	while (*dst++ = *src++)
//	{
//		;
//	}
//}
//
//void my_strcpy(char* dst, char* src)  // 版本5
//{
//	assert(src != NULL);  // 断言 - release版本可以优化掉
//	assert(dst != NULL);
//
//	while (*dst++ = *src++)
//	{
//		;
//	}
//}
//
//void my_strcpy(char* dst, char* src)  // 版本6
//{
//	assert(src && dst);
//
//	while (*dst++ = *src++)
//	{
//		;
//	}
//}
//
//void my_strcpy(char* dst, const char* src)  // 版本7
//{
//	assert(src && dst);
//
//	while (*dst++ = *src++)
//	{
//		;
//	}
//}
//
//char* my_strcpy(char* dst, const char* src)  // 版本8
//{
//	assert(src && dst);
//
//	char* ret = dst;
//	while (*dst++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()  // 模拟实现库函数strcpy
//{
//	char arr1[] = "abcdef";  // [a b c d e f \0]
//	char arr2[10] = { 0 };  // [0 0 0 0 0 0 0 0 0 0]
//
//	my_strcpy(arr2, arr1);
//
//	printf("%s\n", arr2);
//
//	return 0;
//}

//int main()  // const作用
//{
//	const int num = 10;  // const修饰的常变量，只是语法层面上限制了遇到num不能修改
//	num = 20;  // err
//
//	int* p = &num;  // 可以通过num的地址间接修改num
//	*p = 20;
//
//	return 0;
//}

//int main()  // const ptr* p
//{
//	// const放在*的左边——修饰的是指针指向的内容（*p），指针指向的内容不能通过指针修改，但是指针变量本身可以修改
//	int num1 = 10;
//	int num2 = 20;
//
//	const int* p = &num1;  // int const* p = &num;
//
//	*p = 20;  // err
//	p = &num2;
//
//	return 0;
//}

//int main()  // ptr* const p
//{
//	// const放在*的右边——修饰的是指针变量本身（p），指针变量本身不能修改，但是指针指向的内容可以通过指针修改
//	int num1 = 10;
//	int num2 = 20;
//
//	int* const p = &num1;
//
//	*p = 20;
//	p = &num2;  // err
//
//	return 0;
//}

//int main()  // const ptr* const p
//{
//	int num1 = 10;
//	int num2 = 20;
//
//	const int* const p = &num1;
//
//	*p = 20;  // err
//	p = &num2;  // err
//
//	return 0;
//}

//size_t my_strlen(const char* str)
//{
//	assert(str != NULL);
//	int count = 0;
//	while (*str++)
//	{
//		count++;
//	}
//	return count;
//}
//
//int main()  // 模拟实现库函数strlen
//{
//	// 如果有符号数的结果为正，那么无符号数的结果与其相同
//	// 如果有符号数的结果为负，那么无符号数会将运算结果的补码视为原码
//	// 3-6 = -3
//	// 10000000000000000000000000000011 - -3原码
//	// 11111111111111111111111111111100 - -3反码
//	// 11111111111111111111111111111101 - -3补码
//	if (my_strlen("abc") - my_strlen("abcdef") > 0)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}

//size_t count_bit_one(int n)  // 法一
//{
//	int count = 0;
//
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//
//	return count;
//}
//
//size_t count_bit_one(unsigned int n)  // 法二
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n /= 2;
//	}
//	return count;
//}
//
//size_t count_bit_one(int n)  // 法三
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()  // 统计二进制中1的个数
//{
//	int num = 0;
//	scanf("%d", &num);
//
//	size_t ret = count_bit_one(num);
//
//	printf("%u\n", ret);
//
//	return 0;
//}

int main()  // 判断一个数是否为2的次方数
{
	int n = 0;
	scanf("%d", &n);

	if ((n & (n - 1)) == 0)  // 二进制中只有一个1，即为2的次方数
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}

	return 0;
}