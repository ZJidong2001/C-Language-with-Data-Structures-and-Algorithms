#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <Windows.h>

//int main()  // while循环
//{
//	int i = 1;  // 初始化部分
//	while (i <= 10)  // 条件判断部分
//	{
//		printf("%d ", i);
//		i++;  // 调整部分
//	}
//
//	return 0;
//}

//int main()  // for循环
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)  // 初始化部分、条件判断部分、调整部分在一行显示
//	{
//		printf("%d ", i);
//	}
//
//	return 0;
//}

//int main()  // for循环break
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (5 == i)
//			break;
//		printf("%d ", i);
//	}
//
//	return 0;
//}

//int main()  // for循环continue
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (5 == i)
//			continue;
//		printf("%d ", i);
//	}
//
//	return 0;
//}

//int main()  // for循环处理数组
//{
//	int arr[10] = { 0 };
//	int i = 0;
//
//	for (i = 0; i < 10; i++)  // 输入数据存储到数组的每个元素中
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	for (i = 0; i < 10; i++)  // 输出数组每个元素的数据
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//int main()  // 省略for循环的初始化，条件判断，调整三个部分
//{
//	// 1. 可以省略
//	// 2. 判断部分只要省略，就意味着判断结果恒为真
//	// 3. 尽量不要省略
//	for (;;)
//	{
//		printf("hehe\n");
//	}
//
//	return 0;
//}

//int main()  // 省略for循环的三个部分，易产生bug
//{
//	int i = 0;
//	int j = 0;
//
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//
//	return 0;
//}

//int main()  // do...while循环
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//
//	return 0;
//}

//int main()  // do...while循环continue
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//
//	return 0;
//}

//int main()  // do...while循环break
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//
//	return 0;
//}

//int main()  // 计算n的阶乘
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int ret = 1;
//
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//
//	printf("%d\n", ret);
//
//	return 0;
//}

//int main()  // 计算1!+2!+3!+...+10!
//{
//	int ret = 1;
//	int sum = 0;
//
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret = ret * j;
//		}
//		sum = sum + ret;
//	}
//
//	printf("%d\n", sum);
//
//	return 0;
//}

//int main()  // 计算1!+2!+3!+...+10!
//{
//	int ret = 1;
//	int sum = 0;
//
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		ret = ret * i;
//		sum = sum + ret;
//	}
//
//	printf("%d\n", sum);
//
//	return 0;
//}

//int main()  // 有序数组查找数字
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };  // 有序数组
//	int sz = sizeof(arr) / sizeof(arr[0]);  // 数组的元素个数
//	int k = 7;  // 要查找的数字
//
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("找到了，下标是：%d\n", i);
//			break;
//		}
//	}
//
//	if (i == sz)
//	{
//		printf("找不到\n");
//	}
//
//	return 0;
//}

//int main()  // 有序数组查找数字
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };  // 有序数组
//	int sz = sizeof(arr) / sizeof(arr[0]);  // 数组的元素个数
//	int k = 7;  // 要查找的数字
//
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//
//	return 0;
//}

//int main()  // 动态打印
//{
//	char arr1[] = "hello world!!!!!!!";
//	char arr2[] = "##################";
//	int len = strlen(arr1);  // 字符串长度
//
//	int left = 0;
//	int right = len - 1;
//	while (left <= right)
//	{
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}

//int main()  // 验证密码
//{
//	char password[20] = { 0 };
//
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", password);
//
//		if (strcmp(password, "abcdef") == 0)  // 假设密码是abcdef，两个字符串比较，不能使用==
//		{
//			printf("登录成功！\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误！\n");
//		}
//	}
//
//	if (i == 3)
//	{
//		printf("三次密码输入错误，退出程序！\n");
//	}
//
//	return 0;
//}

//int main()  // goto语句
//{
//again:
//	printf("hehe\n");
//	goto again;
//
//	return 0;
//}

//void test()
//{
//func:
//	printf("hehe\n");
//}
//
//int main()  // goto语句不能跨函数使用
//{
//	goto func;  // err
//
//	return 0;
//}

//int main()  // goto语句实现关机程序
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//
//again:
//	printf("请注意，你的电脑在1分钟内关机！如果输入“我是猪”，就取消关机。\n");
//	scanf("%s", input);
//
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//
//	return 0;
//}

int main()  // 循环语句实现关机程序
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");

	while (1)
	{
		printf("请注意，你的电脑在1分钟内关机！如果输入“我是猪”，就取消关机。\n");
		scanf("%s", input);
		if (strcmp(input, "我是猪") == 0)
		{
			system("shutdown -a");
			break;
		}
	}

	return 0;
}